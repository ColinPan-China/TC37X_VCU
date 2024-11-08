#if !defined (OVERLAY_H)
# define OVERLAY_H

#include "Platform_Types.h"
#include "IfxCpu_regdef.h"
#include "IfxScu_regdef.h"
#include "Compiler.h"
#include "IfxCpu_reg.h"
#include "IfxScu_reg.h"
#include "IfxScu_bf.h"

/** \brief List of the available CPU resources
 */
typedef enum
{
    IfxCpu_Index_0 = 0,  /**< \brief CPU 0 */
    IfxCpu_Index_1 = 1,  /**< \brief CPU 1 */
    IfxCpu_Index_2 = 2,  /**< \brief CPU 2 */
    IfxCpu_Index_none    /**< \brief None of the CPU */
} IfxCpu_Index;

/** \brief List of the available CPU resources
 */
typedef enum
{
    IfxCpu_ResourceCpu_0    = IfxCpu_Index_0,    /**< \brief CPU 0 */
    IfxCpu_ResourceCpu_1    = IfxCpu_Index_1,    /**< \brief CPU 1 */
    IfxCpu_ResourceCpu_2    = IfxCpu_Index_2,    /**< \brief CPU 2 */
    IfxCpu_ResourceCpu_none = IfxCpu_Index_none  /**< \brief None of the CPU */
} IfxCpu_ResourceCpu;

/** \brief Selects overlay memory used for redirection
 */
typedef enum
{
    IfxCpu_OverlayMemorySelect_core0DsprPspr = 0,  /**< \brief Redirection to Core 0 DSPR/PSPR memory */
    IfxCpu_OverlayMemorySelect_core1DsprPspr = 1,  /**< \brief Redirection to Core 1 DSPR/PSPR memory */
    IfxCpu_OverlayMemorySelect_core2DsprPspr = 2   /**< \brief Redirection to Core 2 DSPR/PSPR memory */
} IfxCpu_OverlayMemorySelect;

/** \brief Overlay Address Mask: determines the overlay block size and the bits used for address comparison and translation
 */
typedef enum
{
    IfxCpu_OverlayAddressMask_32byte  = 0xFFF,  /**< \brief 32 byte block size Mask */
    IfxCpu_OverlayAddressMask_64byte  = 0xFFE,  /**< \brief 64 byte block size Mask */
    IfxCpu_OverlayAddressMask_128byte = 0xFFC,  /**< \brief 128 byte block size Mask */
    IfxCpu_OverlayAddressMask_256byte = 0xFF8,  /**< \brief 256 byte block size Mask */
    IfxCpu_OverlayAddressMask_512byte = 0xFF0,  /**< \brief 512 byte block size Mask */
    IfxCpu_OverlayAddressMask_1KB     = 0xFE0,  /**< \brief 1K byte block size Mask */
    IfxCpu_OverlayAddressMask_2KB     = 0xFC0,  /**< \brief 2K byte block size Mask */
    IfxCpu_OverlayAddressMask_4KB     = 0xF80,  /**< \brief 4K byte block size Mask */
    IfxCpu_OverlayAddressMask_8KB     = 0xF00,  /**< \brief 8K byte block size Mask */
    IfxCpu_OverlayAddressMask_16KB    = 0xE00,  /**< \brief 16K byte block size Mask */
    IfxCpu_OverlayAddressMask_32KB    = 0xC00,  /**< \brief 32K byte block size Mask */
    IfxCpu_OverlayAddressMask_64KB    = 0x800,  /**< \brief 64K byte block size Mask */
    IfxCpu_OverlayAddressMask_128KB   = 0x0     /**< \brief 128K byte block size Mask */
} IfxCpu_OverlayAddressMask;



extern void IfxCpu_enableOverlayBlock(IfxCpu_ResourceCpu cpu, uint16 overlayBlock, 
                                        IfxCpu_OverlayMemorySelect overlayMemorySelect, 
                                        IfxCpu_OverlayAddressMask overlayAddressMask, 
                                        uint32 targetBaseAddress, uint32 overlayBaseAddress);

extern void IfxCpu_disableOverlayBlock(IfxCpu_ResourceCpu cpu, uint16 overlayBlock);

#endif /* OVERLAY_H */