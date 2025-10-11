
#define LCF_INTVEC0_START 0x802FE000
#define LCF_INTVEC1_START 0x805FC000
#define LCF_INTVEC2_START 0x805FE000

#define LCF_TRAPVEC0_START 0x80000100
#define LCF_TRAPVEC1_START 0x80300000
#define LCF_TRAPVEC2_START 0x80300100

#define LCF_STARTPTR_CPU0 0x80000000
#define LCF_STARTPTR_CPU1 0x80300200
#define LCF_STARTPTR_CPU2 0x80300220

#define LCF_STARTPTR_NC_CPU0 0xA0000000
#define LCF_STARTPTR_NC_CPU1 0xA0300200
#define LCF_STARTPTR_NC_CPU2 0xA0300220

#define INTTAB0             (LCF_INTVEC0_START)
#define INTTAB1             (LCF_INTVEC1_START)
#define INTTAB2             (LCF_INTVEC2_START)
#define TRAPTAB0            (LCF_TRAPVEC0_START)
#define TRAPTAB1            (LCF_TRAPVEC1_START)
#define TRAPTAB2            (LCF_TRAPVEC2_START)  

section_layout :vtc:linear
{ 
	"_lc_u_trap_tab"     := TRAPTAB0;
	"_lc_u_trap_tab_tc1" := TRAPTAB1;                
	"_lc_u_trap_tab_tc2" := TRAPTAB2;                                           

	"_lc_u_int_tab_tc1" := INTTAB1;
	"_lc_u_int_tab_tc2" := INTTAB2;
} 