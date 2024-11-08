#include "Overlay.h"

void IfxScuWdt_clearSafetyEndinitInline(uint16 password)
{
    if (SCU_WDTS_CON0.B.LCK)
    {
        /* see Table 1 (Password Access Bit Pattern Requirements) */
        SCU_WDTS_CON0.U = (1 << IFX_SCU_WDTS_CON0_ENDINIT_OFF) |
                          (0 << IFX_SCU_WDTS_CON0_LCK_OFF) |
                          (password << IFX_SCU_WDTS_CON0_PW_OFF) |
                          (SCU_WDTS_CON0.B.REL << IFX_SCU_WDTS_CON0_REL_OFF);
    }

    /* Clear ENDINT and set LCK bit in Config_0 register */
    SCU_WDTS_CON0.U = (0 << IFX_SCU_WDTS_CON0_ENDINIT_OFF) |
                      (1 << IFX_SCU_WDTS_CON0_LCK_OFF) |
                      (password << IFX_SCU_WDTS_CON0_PW_OFF) |
                      (SCU_WDTS_CON0.B.REL << IFX_SCU_WDTS_CON0_REL_OFF);

    /* read back ENDINIT and wait until it has been cleared */
    while (SCU_WDTS_CON0.B.ENDINIT == 1)
    {}
}

void IfxScuWdt_clearSafetyEndinit(uint16 password)
{
    IfxScuWdt_clearSafetyEndinitInline(password);
}

void IfxScuWdt_setSafetyEndinitInline(uint16 password)
{
    if (SCU_WDTS_CON0.B.LCK)
    {
        /* see Table 1 (Password Access Bit Pattern Requirements) */
        SCU_WDTS_CON0.U = (1 << IFX_SCU_WDTS_CON0_ENDINIT_OFF) |
                          (0 << IFX_SCU_WDTS_CON0_LCK_OFF) |
                          (password << IFX_SCU_WDTS_CON0_PW_OFF) |
                          (SCU_WDTS_CON0.B.REL << IFX_SCU_WDTS_CON0_REL_OFF);
    }

    /* Set ENDINT and set LCK bit in Config_0 register */
    SCU_WDTS_CON0.U = (1 << IFX_SCU_WDTS_CON0_ENDINIT_OFF) |
                      (1 << IFX_SCU_WDTS_CON0_LCK_OFF) |
                      (password << IFX_SCU_WDTS_CON0_PW_OFF) |
                      (SCU_WDTS_CON0.B.REL << IFX_SCU_WDTS_CON0_REL_OFF);

    /* read back ENDINIT and wait until it has been cleared */
    while (SCU_WDTS_CON0.B.ENDINIT == 0)
    {}
}

void IfxScuWdt_setSafetyEndinit(uint16 password)
{
    IfxScuWdt_setSafetyEndinitInline(password);
}

uint16 IfxScuWdt_getSafetyWatchdogPasswordInline(void)
{
    uint16        password;
    Ifx_SCU_WDTS *watchdog = &MODULE_SCU.WDTS;

    /* Read Password from Safety WDT CON0 register
     * !!! NOTE: !!! when read bottom six bit of password are inverted so we have
     * to toggle them before returning password */
    password  = watchdog->CON0.B.PW;
    password ^= 0x003F;

    return password;
}

uint16 IfxScuWdt_getSafetyWatchdogPassword(void)
{
    return IfxScuWdt_getSafetyWatchdogPasswordInline();
}

void IfxScuWdt_setGlobalEndinit(uint16 password)
{
    Ifx_SCU       *scu = &MODULE_SCU;
    /* Read EICON0 register */
    Ifx_SCU_EICON0 eicon0;
    eicon0.U = scu->EICON0.U;

    /* Set ENDINT bit in EICON register */
    if (scu->EICON0.B.ENDINIT == 0)
    {
        /* see Table 1 (Password Access Bit Pattern Requirements) */
        eicon0.B.ENDINIT = 1;
        eicon0.B.EPW     = password;

        /* Password ready. Store it to EICON0 to unprotect the register */
        scu->EICON0.U = eicon0.U;
    }

    /* read back ENDINIT and wait until it has been set */
    while (scu->EICON0.B.ENDINIT == 0)
    {}
}

void IfxCpu_enableOverlayBlock(IfxCpu_ResourceCpu cpu, uint16 overlayBlock, IfxCpu_OverlayMemorySelect overlayMemorySelect, IfxCpu_OverlayAddressMask overlayAddressMask, uint32 targetBaseAddress, uint32 overlayBaseAddress)
{
    Ifx_CPU *ovcSfrBase = NULL_PTR;

    switch (cpu)
    {
    case IfxCpu_ResourceCpu_1:
        ovcSfrBase = &MODULE_CPU1;
        break;
    case IfxCpu_ResourceCpu_2:
        ovcSfrBase = &MODULE_CPU2;
        break;

    default:
        ovcSfrBase = &MODULE_CPU0;
        break;
    }

    /* Select overlay Block */
    ovcSfrBase->OSEL.U |= 1 << overlayBlock;

    /* Configure ovcBlock */
    Ifx_CPU_BLK_RABR rabr;
    Ifx_CPU_BLK_OTAR otar;
    rabr.U                                = 0;
    rabr.B.OMEM                           = overlayMemorySelect;
    rabr.B.OBASE                          = overlayBaseAddress >> 5;

    otar.U                                = 0;
    otar.B.TBASE                          = targetBaseAddress >> 5;

    ovcSfrBase->BLK[overlayBlock].RABR.U  = rabr.U;
    ovcSfrBase->BLK[overlayBlock].OTAR.U  = otar.U;
    ovcSfrBase->BLK[overlayBlock].OMASK.U = ((overlayAddressMask << 5) & 0x0001FFE0);

    /* Enable Overlay in SCU */
    uint16         safetyWdtPw = IfxScuWdt_getSafetyWatchdogPassword();
    IfxScuWdt_clearSafetyEndinit(safetyWdtPw);
    Ifx_SCU_OVCCON ovccon;
    ovccon.U = MODULE_SCU.OVCCON.U;

    switch (cpu)
    {
    case IfxCpu_ResourceCpu_1:
        MODULE_SCU.OVCENABLE.B.OVEN1 = 1;
        ovccon.B.CSEL1               = 1;
        break;
    case IfxCpu_ResourceCpu_2:
        MODULE_SCU.OVCENABLE.B.OVEN2 = 1;
        ovccon.B.CSEL2               = 1;
        break;
    default:
        MODULE_SCU.OVCENABLE.B.OVEN0 = 1;
        ovccon.B.CSEL0               = 1;
        break;
    }

    ovccon.B.OVSTRT     = 1;
    MODULE_SCU.OVCCON.U = ovccon.U;
    IfxScuWdt_setSafetyEndinit(safetyWdtPw);
}

void IfxCpu_disableOverlayBlock(IfxCpu_ResourceCpu cpu, uint16 overlayBlock)
{
    Ifx_CPU          *ovcSfrBase = NULL_PTR;

    Ifx_SCU_OVCCON    ovccon;
    Ifx_SCU_OVCENABLE ovcenable;
    uint16            safetyWdtPw = IfxScuWdt_getSafetyWatchdogPassword();
    IfxScuWdt_clearSafetyEndinit(safetyWdtPw);
    ovccon.U    = MODULE_SCU.OVCCON.U;
    ovcenable.U = MODULE_SCU.OVCENABLE.U;

    /* Disable Overlay in SCU */
    switch (cpu)
    {
    case IfxCpu_ResourceCpu_1:
        ovcSfrBase        = &MODULE_CPU1;
        ovcenable.B.OVEN1 = 0;
        ovccon.B.CSEL1    = 0;
        break;
    case IfxCpu_ResourceCpu_2:
        ovcSfrBase        = &MODULE_CPU2;
        ovcenable.B.OVEN2 = 0;
        ovccon.B.CSEL2    = 0;
        break;

    default:
        ovcSfrBase        = &MODULE_CPU0;
        ovcenable.B.OVEN0 = 0;
        ovccon.B.CSEL0    = 0;
        break;
    }

    ovccon.B.OVSTP         = 1;
    ovccon.B.DCINVAL       = 1;
    MODULE_SCU.OVCCON.U    = ovccon.U;
    MODULE_SCU.OVCENABLE.U = ovcenable.U;
    IfxScuWdt_setSafetyEndinit(safetyWdtPw);

    ovcSfrBase->BLK[overlayBlock].RABR.U  = 0;
    ovcSfrBase->BLK[overlayBlock].OTAR.U  = 0;
    ovcSfrBase->BLK[overlayBlock].OMASK.U = 0;
}
