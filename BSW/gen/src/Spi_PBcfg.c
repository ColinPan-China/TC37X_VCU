
/*******************************************************************************
**                                                                            **
** Copyright (C) Infineon Technologies (2019)                                 **
**                                                                            **
** All rights reserved.                                                       **
**                                                                            **
** This document contains proprietary information belonging to Infineon       **
** Technologies. Passing on and copying of this document, and communication   **
** of its contents is not permitted without prior written authorization.      **
**                                                                            **
********************************************************************************
**                                                                            **
**  FILENAME  : Spi_PBCfg.c                                                   **
**                                                                            **
**  VERSION   : 15.0.0                                                        **
**                                                                            **
**  DATE, TIME: 2025-11-12, 17:02:41  !!!IGNORE-LINE!!!                   **
**                                                                            **
**  GENERATOR : Build b180321-0610      !!!IGNORE-LINE!!!                   **
**                                                                            **
**  BSW MODULE DECRIPTION : Spi.bmd                                           **
**                                                                            **
**  VARIANT   : Variant PB                                                    **
**                                                                            **
**  PLATFORM  : Infineon AURIX2G                                              **
**                                                                            **
**  AUTHOR    : DL-AUTOSAR-Engineering                                        **
**                                                                            **
**  VENDOR    : Infineon Technologies                                         **
**                                                                            **
**  DESCRIPTION  : Spi configuration generated out of ECUC file               **
**                                                                            **
**  SPECIFICATION(S) : Specification of Spi Driver, AUTOSAR Release 4.2.2     **
**                                                                            **
**  MAY BE CHANGED BY USER : no                                               **
**                                                                            **
*******************************************************************************/

/*******************************************************************************
**                      Includes                                              **
*******************************************************************************/
/* Module header file */
#include "Spi.h"
/*******************************************************************************
**                      Private Macro definition                              **
*******************************************************************************/
/* MISRA2012_RULE_4_9_JUSTIFICATION: More readble as macros. Code coplexity
reduces as well. */
#define Spi_BaudRateAndClockParam(TQ,LB,Q,A,B,C,CPH,CPOL,PAREN)                \
(                                                                  \
(uint32)(                                                         \
((uint32)TQ << 16U)|((uint32)LB << 30U)|((uint32)Q)|\
((uint32)A << 6U)|((uint32)B << 8U)|         \
((uint32)C << 10U)|((uint32)CPH << 12U)|        \
((uint32)CPOL << 13U)|((uint32)PAREN << 14U)     \
)                                                         \
)
/* MISRA2012_RULE_4_9_JUSTIFICATION: More readble as macros. Code coplexity
reduces as well. */
#define Spi_IdleLeadTrailParam(IPRE,IDLE,LPRE,LEAD,TPRE,TRAIL,PARTYP)          \
(                                                                  \
(uint32)(                                                         \
((uint32)IPRE << 1U)|((uint32)IDLE << 4U)|    \
((uint32)LPRE << 7U)|((uint32)LEAD << 10U)|   \
((uint32)TPRE << 13U)|((uint32)TRAIL << 16U)| \
((uint32)PARTYP << 19U)            \
)                                                         \
)
/*******************************************************************************
**                      Extern Declaration                                    **
*******************************************************************************/
/* Notification function for Sequence: SpiSequence_TLE8888 */
extern void SpiSeq_TLE8888_Notify(void);
/* Notification function for Sequence: SpiSequence_TLE9201 */
extern void SpiSeq_TLE9201_Notify(void);
/* Notification function for Sequence: SpiSequence_TLE9410_SPI1 */
extern void SpiSequence_TLE9410_SPI1_Notify(void);
/*******************************************************************************
**                      Global Constant Definitions                           **
*******************************************************************************/
/******************* GLOBAL CONFIGURATION MEMMAP SECTION *********************/

/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_32

/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"
    
          
            
  /*Sequence Index Lookup*/
  static const uint8 SequenceLookupIndex[6] =
{
  /* Physical index value for Sequence SpiSequence_TLE8888 Sequence ID 0 */
  2U,
    /* Physical index value for Sequence SpiSequence_TLE9201 Sequence ID 1 */
  1U,
    /* Physical index value for Sequence SpiSequence_TJA1145_Norm Sequence ID 2 */
  5U,
    /* Physical index value for Sequence SpiSequence_TJA1145_Large Sequence ID 3 */
  3U,
    /* Physical index value for Sequence SpiSequence_TJA1145_Medium Sequence ID 4 */
  4U,
    /* Physical index value for Sequence SpiSequence_TLE9410_SPI1 Sequence ID 5 */
  0U  
};

  /*Job Index Lookup*/
static const uint16 JobLookupIndex[7] =
{
  /* Physical index value for Job SpiJob_TLE8888 Job ID 0 */
  2U,
    /* Physical index value for Job SpiJob_TLE9201 Job ID 1 */
  1U,
    /* Physical index value for Job SpiJob_TJA1145_0 Job ID 2 */
  3U,
    /* Physical index value for Job SpiJob_TJA1145_1 Job ID 3 */
  4U,
    /* Physical index value for Job SpiJob_TJA1145_2 Job ID 4 */
  5U,
    /* Physical index value for Job SpiJob_TJA1145_3 Job ID 5 */
  6U,
    /* Physical index value for Job SpiJob_TLE9410_SPI1 Job ID 6 */
  0U  
};

  /*Channel Index Lookup*/
static const uint8 ChannelLookupIndex[7] =
{
  /* Physical index value for channel SpiChannel_TLE8888 channel ID 0 */
  2U,
    /* Physical index value for channel SpiChannel_TLE9201 channel ID 1 */
  1U,
    /* Physical index value for channel SpiChannel_TJA1145_0 channel ID 2 */
  6U,
    /* Physical index value for channel SpiChannel_TJA1145_1 channel ID 3 */
  5U,
    /* Physical index value for channel SpiChannel_TJA1145_2 channel ID 4 */
  4U,
    /* Physical index value for channel SpiChannel_TJA1145_3 channel ID 5 */
  3U,
    /* Physical index value for channel SpiChannel_TLE9410_SPI1 channel ID 6 */
  0U  
};

  /* Linked list for the Job[s] assigned to the sequence[s] Physical*/

static const Spi_JobType SpiSequence_TJA1145_Large_JobLinkPtr_Physical[] =
{
  3U, /* Physical index value for Job SpiJob_TJA1145_0 Job ID 2 */
  
  4U, /* Physical index value for Job SpiJob_TJA1145_1 Job ID 3 */
  
  5U, /* Physical index value for Job SpiJob_TJA1145_2 Job ID 4 */
  
  6U, /* Physical index value for Job SpiJob_TJA1145_3 Job ID 5 */
  
  SPI_JOB_DELIMITER
};

static const Spi_JobType SpiSequence_TJA1145_Medium_JobLinkPtr_Physical[] =
{
  3U, /* Physical index value for Job SpiJob_TJA1145_0 Job ID 2 */
  
  4U, /* Physical index value for Job SpiJob_TJA1145_1 Job ID 3 */
  
  5U, /* Physical index value for Job SpiJob_TJA1145_2 Job ID 4 */
  
  SPI_JOB_DELIMITER
};

static const Spi_JobType SpiSequence_TJA1145_Norm_JobLinkPtr_Physical[] =
{
  3U, /* Physical index value for Job SpiJob_TJA1145_0 Job ID 2 */
  
  SPI_JOB_DELIMITER
};

static const Spi_JobType SpiSequence_TLE8888_JobLinkPtr_Physical[] =
{
  2U, /* Physical index value for Job SpiJob_TLE8888 Job ID 0 */
  
  SPI_JOB_DELIMITER
};

static const Spi_JobType SpiSequence_TLE9201_JobLinkPtr_Physical[] =
{
  1U, /* Physical index value for Job SpiJob_TLE9201 Job ID 1 */
  
  SPI_JOB_DELIMITER
};

static const Spi_JobType SpiSequence_TLE9410_SPI1_JobLinkPtr_Physical[] =
{
  0U, /* Physical index value for Job SpiJob_TLE9410_SPI1 Job ID 6 */
  
  SPI_JOB_DELIMITER
};
  /* Linked list for the channel[s] assigned to the job[s] Physical */

static const Spi_ChannelType SpiJob_TJA1145_0_ChannelLinkPtr_Physical[] =
{
  6U, /* Physical index value for Channel SpiChannel_TJA1145_0 Channel ID 2 */
  
  SPI_CHANNEL_DELIMITER
};

static const Spi_ChannelType SpiJob_TJA1145_1_ChannelLinkPtr_Physical[] =
{
  5U, /* Physical index value for Channel SpiChannel_TJA1145_1 Channel ID 3 */
  
  SPI_CHANNEL_DELIMITER
};

static const Spi_ChannelType SpiJob_TJA1145_2_ChannelLinkPtr_Physical[] =
{
  4U, /* Physical index value for Channel SpiChannel_TJA1145_2 Channel ID 4 */
  
  SPI_CHANNEL_DELIMITER
};

static const Spi_ChannelType SpiJob_TJA1145_3_ChannelLinkPtr_Physical[] =
{
  3U, /* Physical index value for Channel SpiChannel_TJA1145_3 Channel ID 5 */
  
  SPI_CHANNEL_DELIMITER
};

static const Spi_ChannelType SpiJob_TLE8888_ChannelLinkPtr_Physical[] =
{
  2U, /* Physical index value for Channel SpiChannel_TLE8888 Channel ID 0 */
  
  SPI_CHANNEL_DELIMITER
};

static const Spi_ChannelType SpiJob_TLE9201_ChannelLinkPtr_Physical[] =
{
  1U, /* Physical index value for Channel SpiChannel_TLE9201 Channel ID 1 */
  
  SPI_CHANNEL_DELIMITER
};

static const Spi_ChannelType SpiJob_TLE9410_SPI1_ChannelLinkPtr_Physical[] =
{
  0U, /* Physical index value for Channel SpiChannel_TLE9410_SPI1 Channel ID 6 */
  
  SPI_CHANNEL_DELIMITER
};
    /* Linked list of sequence[s] with Job[s] shared  */
static const Spi_SequenceType SpiSequence_TJA1145_Large_SeqSharePtr[] =
{
  
  
  SpiConf_SpiSequence_SpiSequence_TJA1145_Medium,

    
  
  SpiConf_SpiSequence_SpiSequence_TJA1145_Norm,

  SPI_SEQUENCE_DELIMITER
};

static const Spi_SequenceType SpiSequence_TJA1145_Medium_SeqSharePtr[] =
{
  
  
  SpiConf_SpiSequence_SpiSequence_TJA1145_Large,

    
  
  SpiConf_SpiSequence_SpiSequence_TJA1145_Norm,

  SPI_SEQUENCE_DELIMITER
};

static const Spi_SequenceType SpiSequence_TJA1145_Norm_SeqSharePtr[] =
{
  
  
  SpiConf_SpiSequence_SpiSequence_TJA1145_Large,

    
  
  SpiConf_SpiSequence_SpiSequence_TJA1145_Medium,

  SPI_SEQUENCE_DELIMITER
};

static const Spi_SequenceType SpiSequence_TLE8888_SeqSharePtr[] =
{
  SPI_SEQUENCE_DELIMITER
};

static const Spi_SequenceType SpiSequence_TLE9201_SeqSharePtr[] =
{
  SPI_SEQUENCE_DELIMITER
};

static const Spi_SequenceType SpiSequence_TLE9410_SPI1_SeqSharePtr[] =
{
  SPI_SEQUENCE_DELIMITER
};


/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"
/******************* GLOBAL CONFIGURATION MEMMAP SECTION *********************/
  
    
 /******************* CORE0 SEQUENCE CONFIGURATION MEMMAP SECTION *************/
/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_START_SEC_CONFIG_DATA_ASIL_B_CORE0_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"

static const Spi_SequenceConfigType Spi_kSequenceConfig_Core0[] =
{
    /* Synchronous Sequence[s] */
    /* Sequence:SpiSequence_TLE9410_SPI1 */
  {
    SpiConf_SpiSequence_SpiSequence_TLE9410_SPI1,
    
    /* Notification function */
    &SpiSequence_TLE9410_SPI1_Notify,
    /* Job linked list */
    SpiSequence_TLE9410_SPI1_JobLinkPtr_Physical,
    /* Seq linked list, with jobs shared */
    SpiSequence_TLE9410_SPI1_SeqSharePtr,
    /* No. of jobs in Seq */
    1U,
    /* Seq Interruptible or not */
    SPI_SEQ_INT_FALSE,
    /* Hw Module Used (b000010)*/
    0x02U,
    /* Sync sequence = 0x00 or Async sequence = 0x01 */
    0x00U
  },
    /* Synchronous Sequence[s] */
    /* Sequence:SpiSequence_TLE9201 */
  {
    SpiConf_SpiSequence_SpiSequence_TLE9201,
    
    /* Notification function */
    &SpiSeq_TLE9201_Notify,
    /* Job linked list */
    SpiSequence_TLE9201_JobLinkPtr_Physical,
    /* Seq linked list, with jobs shared */
    SpiSequence_TLE9201_SeqSharePtr,
    /* No. of jobs in Seq */
    1U,
    /* Seq Interruptible or not */
    SPI_SEQ_INT_FALSE,
    /* Hw Module Used (b000100)*/
    0x04U,
    /* Sync sequence = 0x00 or Async sequence = 0x01 */
    0x00U
  },
    /* Synchronous Sequence[s] */
    /* Sequence:SpiSequence_TLE8888 */
  {
    SpiConf_SpiSequence_SpiSequence_TLE8888,
    
    /* Notification function */
    &SpiSeq_TLE8888_Notify,
    /* Job linked list */
    SpiSequence_TLE8888_JobLinkPtr_Physical,
    /* Seq linked list, with jobs shared */
    SpiSequence_TLE8888_SeqSharePtr,
    /* No. of jobs in Seq */
    1U,
    /* Seq Interruptible or not */
    SPI_SEQ_INT_FALSE,
    /* Hw Module Used (b001000)*/
    0x08U,
    /* Sync sequence = 0x00 or Async sequence = 0x01 */
    0x00U
  },
    /* Synchronous Sequence[s] */
    /* Sequence:SpiSequence_TJA1145_Large */
  {
    SpiConf_SpiSequence_SpiSequence_TJA1145_Large,
    /* Notification function */
    NULL_PTR,
    /* Job linked list */
    SpiSequence_TJA1145_Large_JobLinkPtr_Physical,
    /* Seq linked list, with jobs shared */
    SpiSequence_TJA1145_Large_SeqSharePtr,
    /* No. of jobs in Seq */
    4U,
    /* Seq Interruptible or not */
    SPI_SEQ_INT_FALSE,
    /* Hw Module Used (b010000)*/
    0x10U,
    /* Sync sequence = 0x00 or Async sequence = 0x01 */
    0x00U
  },
  /* Sequence:SpiSequence_TJA1145_Medium */
  {
    SpiConf_SpiSequence_SpiSequence_TJA1145_Medium,
    /* Notification function */
    NULL_PTR,
    /* Job linked list */
    SpiSequence_TJA1145_Medium_JobLinkPtr_Physical,
    /* Seq linked list, with jobs shared */
    SpiSequence_TJA1145_Medium_SeqSharePtr,
    /* No. of jobs in Seq */
    3U,
    /* Seq Interruptible or not */
    SPI_SEQ_INT_FALSE,
    /* Hw Module Used (b010000)*/
    0x10U,
    /* Sync sequence = 0x00 or Async sequence = 0x01 */
    0x00U
  },
  /* Sequence:SpiSequence_TJA1145_Norm */
  {
    SpiConf_SpiSequence_SpiSequence_TJA1145_Norm,
    /* Notification function */
    NULL_PTR,
    /* Job linked list */
    SpiSequence_TJA1145_Norm_JobLinkPtr_Physical,
    /* Seq linked list, with jobs shared */
    SpiSequence_TJA1145_Norm_SeqSharePtr,
    /* No. of jobs in Seq */
    1U,
    /* Seq Interruptible or not */
    SPI_SEQ_INT_FALSE,
    /* Hw Module Used (b010000)*/
    0x10U,
    /* Sync sequence = 0x00 or Async sequence = 0x01 */
    0x00U
  }};

/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"
/***************** CORE0 SEQUENCE CONFIGURATION MEMMAP SECTION END *************/
    
    
    
/******************* CORE0 JOB CONFIGURATION MEMMAP SECTION *************/

/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_START_SEC_CONFIG_DATA_ASIL_B_CORE0_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"

static const Spi_JobConfigType Spi_kJobConfig_Core0[] =
{
      /* Synchronous Job[s] */
  /* Job:SpiJob_TLE9410_SPI1 */
  {
    SpiConf_SpiJob_SpiJob_TLE9410_SPI1,
    NULL_PTR,                   /* No Notification function */
    Spi_BaudRateAndClockParam(  /* Baudrate = 20000.0Hz */
    (0xf9U), (0x00U),          /* TQ , LoopBack */
    (0x13U), (0x00U),          /*  Q , A        */
    (0x00U), (0x01U),          /*  B , C        */
    (0x01U), (0x00U),          /*  CPH , CPOL   */
    (0x00U)                    /*  PAREN        */
    ),
    Spi_IdleLeadTrailParam(
    (2U), (4U), /* IPRE,IDLE:   IdleA/B delay = 4.0E-7s */
    (2U), (4U), /* LPRE,LEAD:   Lead delay    = 4.0E-7s */
    (2U), (4U),/* TPRE, TRAIL: Trail delay   = 4.0E-7s */
    (1U)
    ),
    SpiJob_TLE9410_SPI1_ChannelLinkPtr_Physical, /* Channel linked list Physical*/
    SPI_CS_VIA_HW_OR_NONE,   /* CS_VIA_HW */
    (uint8)0U,               /* Job Priority : 0...3*/
    (uint8)STD_LOW,              /* CS polarity */
    /* Chnl[bit:7:4],QSPI[3:0] */
    (uint8)((SPI_QSPI_CHANNEL8 << 4U)|SPI_QSPI1_INDEX),
    SPI_PARITY_UNUSED,        /* Parity support */
    (0U)                    /*Frame based CS is disabled*/
  },
  /* Synchronous Job[s] */
  /* Job:SpiJob_TLE9201 */
  {
    SpiConf_SpiJob_SpiJob_TLE9201,
    NULL_PTR,                   /* No Notification function */
    Spi_BaudRateAndClockParam(  /* Baudrate = 20000.0Hz */
    (0xf9U), (0x00U),          /* TQ , LoopBack */
    (0x13U), (0x00U),          /*  Q , A        */
    (0x00U), (0x01U),          /*  B , C        */
    (0x01U), (0x00U),          /*  CPH , CPOL   */
    (0x00U)                    /*  PAREN        */
    ),
    Spi_IdleLeadTrailParam(
    (1U), (4U), /* IPRE,IDLE:   IdleA/B delay = 1.0E-7s */
    (1U), (4U), /* LPRE,LEAD:   Lead delay    = 1.0E-7s */
    (1U), (4U),/* TPRE, TRAIL: Trail delay   = 1.0E-7s */
    (1U)
    ),
    SpiJob_TLE9201_ChannelLinkPtr_Physical, /* Channel linked list Physical*/
    SPI_CS_VIA_HW_OR_NONE,   /* CS_VIA_HW */
    (uint8)0U,               /* Job Priority : 0...3*/
    (uint8)STD_LOW,              /* CS polarity */
    /* Chnl[bit:7:4],QSPI[3:0] */
    (uint8)((SPI_QSPI_CHANNEL0 << 4U)|SPI_QSPI2_INDEX),
    SPI_PARITY_UNUSED,        /* Parity support */
    (0U)                    /*Frame based CS is disabled*/
  },
  /* Synchronous Job[s] */
  /* Job:SpiJob_TLE8888 */
  {
    SpiConf_SpiJob_SpiJob_TLE8888,
    NULL_PTR,                   /* No Notification function */
    Spi_BaudRateAndClockParam(  /* Baudrate = 2000000.0Hz */
    (0x18U), (0x00U),          /* TQ , LoopBack */
    (0x01U), (0x00U),          /*  Q , A        */
    (0x00U), (0x01U),          /*  B , C        */
    (0x01U), (0x00U),          /*  CPH , CPOL   */
    (0x00U)                    /*  PAREN        */
    ),
    Spi_IdleLeadTrailParam(
    (1U), (4U), /* IPRE,IDLE:   IdleA/B delay = 1.0E-7s */
    (1U), (4U), /* LPRE,LEAD:   Lead delay    = 1.0E-7s */
    (1U), (4U),/* TPRE, TRAIL: Trail delay   = 1.0E-7s */
    (1U)
    ),
    SpiJob_TLE8888_ChannelLinkPtr_Physical, /* Channel linked list Physical*/
    SPI_CS_VIA_HW_OR_NONE,   /* CS_VIA_HW */
    (uint8)0U,               /* Job Priority : 0...3*/
    (uint8)STD_LOW,              /* CS polarity */
    /* Chnl[bit:7:4],QSPI[3:0] */
    (uint8)((SPI_QSPI_CHANNEL10 << 4U)|SPI_QSPI3_INDEX),
    SPI_PARITY_UNUSED,        /* Parity support */
    (0U)                    /*Frame based CS is disabled*/
  },
  /* Synchronous Job[s] */
  /* Job:SpiJob_TJA1145_0 */
  {
    SpiConf_SpiJob_SpiJob_TJA1145_0,
    NULL_PTR,                   /* No Notification function */
    Spi_BaudRateAndClockParam(  /* Baudrate = 20000.0Hz */
    (0xf9U), (0x00U),          /* TQ , LoopBack */
    (0x13U), (0x00U),          /*  Q , A        */
    (0x00U), (0x01U),          /*  B , C        */
    (0x01U), (0x00U),          /*  CPH , CPOL   */
    (0x00U)                    /*  PAREN        */
    ),
    Spi_IdleLeadTrailParam(
    (1U), (4U), /* IPRE,IDLE:   IdleA/B delay = 1.0E-7s */
    (1U), (4U), /* LPRE,LEAD:   Lead delay    = 1.0E-7s */
    (1U), (4U),/* TPRE, TRAIL: Trail delay   = 1.0E-7s */
    (1U)
    ),
    SpiJob_TJA1145_0_ChannelLinkPtr_Physical, /* Channel linked list Physical*/
    SPI_CS_VIA_HW_OR_NONE,   /* CS_VIA_HW */
    (uint8)0U,               /* Job Priority : 0...3*/
    (uint8)STD_LOW,              /* CS polarity */
    /* Chnl[bit:7:4],QSPI[3:0] */
    (uint8)((SPI_QSPI_CHANNEL3 << 4U)|SPI_QSPI4_INDEX),
    SPI_PARITY_UNUSED,        /* Parity support */
    (0U)                    /*Frame based CS is disabled*/
  },
  /* Job:SpiJob_TJA1145_1 */
  {
    SpiConf_SpiJob_SpiJob_TJA1145_1,
    NULL_PTR,                   /* No Notification function */
    Spi_BaudRateAndClockParam(  /* Baudrate = 20000.0Hz */
    (0xf9U), (0x00U),          /* TQ , LoopBack */
    (0x13U), (0x00U),          /*  Q , A        */
    (0x00U), (0x01U),          /*  B , C        */
    (0x01U), (0x00U),          /*  CPH , CPOL   */
    (0x00U)                    /*  PAREN        */
    ),
    Spi_IdleLeadTrailParam(
    (1U), (4U), /* IPRE,IDLE:   IdleA/B delay = 1.0E-7s */
    (1U), (4U), /* LPRE,LEAD:   Lead delay    = 1.0E-7s */
    (1U), (4U),/* TPRE, TRAIL: Trail delay   = 1.0E-7s */
    (1U)
    ),
    SpiJob_TJA1145_1_ChannelLinkPtr_Physical, /* Channel linked list Physical*/
    SPI_CS_VIA_HW_OR_NONE,   /* CS_VIA_HW */
    (uint8)0U,               /* Job Priority : 0...3*/
    (uint8)STD_LOW,              /* CS polarity */
    /* Chnl[bit:7:4],QSPI[3:0] */
    (uint8)((SPI_QSPI_CHANNEL3 << 4U)|SPI_QSPI4_INDEX),
    SPI_PARITY_UNUSED,        /* Parity support */
    (0U)                    /*Frame based CS is disabled*/
  },
  /* Job:SpiJob_TJA1145_2 */
  {
    SpiConf_SpiJob_SpiJob_TJA1145_2,
    NULL_PTR,                   /* No Notification function */
    Spi_BaudRateAndClockParam(  /* Baudrate = 20000.0Hz */
    (0xf9U), (0x00U),          /* TQ , LoopBack */
    (0x13U), (0x00U),          /*  Q , A        */
    (0x00U), (0x01U),          /*  B , C        */
    (0x01U), (0x00U),          /*  CPH , CPOL   */
    (0x00U)                    /*  PAREN        */
    ),
    Spi_IdleLeadTrailParam(
    (1U), (4U), /* IPRE,IDLE:   IdleA/B delay = 1.0E-7s */
    (1U), (4U), /* LPRE,LEAD:   Lead delay    = 1.0E-7s */
    (1U), (4U),/* TPRE, TRAIL: Trail delay   = 1.0E-7s */
    (1U)
    ),
    SpiJob_TJA1145_2_ChannelLinkPtr_Physical, /* Channel linked list Physical*/
    SPI_CS_VIA_HW_OR_NONE,   /* CS_VIA_HW */
    (uint8)0U,               /* Job Priority : 0...3*/
    (uint8)STD_LOW,              /* CS polarity */
    /* Chnl[bit:7:4],QSPI[3:0] */
    (uint8)((SPI_QSPI_CHANNEL3 << 4U)|SPI_QSPI4_INDEX),
    SPI_PARITY_UNUSED,        /* Parity support */
    (0U)                    /*Frame based CS is disabled*/
  },
  /* Job:SpiJob_TJA1145_3 */
  {
    SpiConf_SpiJob_SpiJob_TJA1145_3,
    NULL_PTR,                   /* No Notification function */
    Spi_BaudRateAndClockParam(  /* Baudrate = 20000.0Hz */
    (0xf9U), (0x00U),          /* TQ , LoopBack */
    (0x13U), (0x00U),          /*  Q , A        */
    (0x00U), (0x01U),          /*  B , C        */
    (0x01U), (0x00U),          /*  CPH , CPOL   */
    (0x00U)                    /*  PAREN        */
    ),
    Spi_IdleLeadTrailParam(
    (1U), (4U), /* IPRE,IDLE:   IdleA/B delay = 1.0E-7s */
    (1U), (4U), /* LPRE,LEAD:   Lead delay    = 1.0E-7s */
    (1U), (4U),/* TPRE, TRAIL: Trail delay   = 1.0E-7s */
    (1U)
    ),
    SpiJob_TJA1145_3_ChannelLinkPtr_Physical, /* Channel linked list Physical*/
    SPI_CS_VIA_HW_OR_NONE,   /* CS_VIA_HW */
    (uint8)0U,               /* Job Priority : 0...3*/
    (uint8)STD_LOW,              /* CS polarity */
    /* Chnl[bit:7:4],QSPI[3:0] */
    (uint8)((SPI_QSPI_CHANNEL3 << 4U)|SPI_QSPI4_INDEX),
    SPI_PARITY_UNUSED,        /* Parity support */
    (0U)                    /*Frame based CS is disabled*/
  }};

/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"
/***************** CORE0 JOB CONFIGURATION MemMap SECTION END *************/
    
    
    
/******************* CORE0 CHANNEL CONFIGURATION MEMMAP SECTION *************/

/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_START_SEC_CONFIG_DATA_ASIL_B_CORE0_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"

static const Spi_ChannelConfigType Spi_kChannelConfig_Core0[] =
{
      /* EB Chnl[s] on QSPI1 sync core0*/
  /* Channel:SpiChannel_TLE9410_SPI1 */
  {
    0x00000000U,     /* Default data */
    0x1ffeU,         /* Number of Data Elements */
    SPI_EB_CHANNEL,  /* External Buffer Channel */
    0x08U,            /* LSB[7], DataWidth=8[6:0] */
    SpiConf_SpiChannel_SpiChannel_TLE9410_SPI1
  },
  /* EB Chnl[s] on QSPI2 core0*/
  /* Channel:SpiChannel_TLE9201 */
  {
    0x00000000U,     /* Default data */
    0x1ffeU,         /* Number of Data Elements */
    SPI_EB_CHANNEL,  /* External Buffer Channel */
    0x88U,            /* MSB[7], DataWidth=8[6:0] */
    SpiConf_SpiChannel_SpiChannel_TLE9201
  },
  /* EB Chnl[s] on QSPI3 core0*/
  /* Channel:SpiChannel_TLE8888 */
  {
    0x00000000U,     /* Default data */
    0x1ffeU,         /* Number of Data Elements */
    SPI_EB_CHANNEL,  /* External Buffer Channel */
    0x08U,            /* LSB[7], DataWidth=8[6:0] */
    SpiConf_SpiChannel_SpiChannel_TLE8888
  },
  /* EB Chnl[s] on QSPI4 core0*/
  /* Channel:SpiChannel_TJA1145_3 */
  {
    0x00000000U,     /* Default data */
    0x1ffeU,         /* Number of Data Elements */
    SPI_EB_CHANNEL,  /* External Buffer Channel */
    0x08U,            /* LSB[7], DataWidth=8[6:0] */
    SpiConf_SpiChannel_SpiChannel_TJA1145_3
  },
  /* Channel:SpiChannel_TJA1145_2 */
  {
    0x00000000U,     /* Default data */
    0x1ffeU,         /* Number of Data Elements */
    SPI_EB_CHANNEL,  /* External Buffer Channel */
    0x08U,            /* LSB[7], DataWidth=8[6:0] */
    SpiConf_SpiChannel_SpiChannel_TJA1145_2
  },
  /* Channel:SpiChannel_TJA1145_1 */
  {
    0x00000000U,     /* Default data */
    0x1ffeU,         /* Number of Data Elements */
    SPI_EB_CHANNEL,  /* External Buffer Channel */
    0x08U,            /* LSB[7], DataWidth=8[6:0] */
    SpiConf_SpiChannel_SpiChannel_TJA1145_1
  },
  /* Channel:SpiChannel_TJA1145_0 */
  {
    0x00000000U,     /* Default data */
    0x1ffeU,         /* Number of Data Elements */
    SPI_EB_CHANNEL,  /* External Buffer Channel */
    0x88U,            /* MSB[7], DataWidth=8[6:0] */
    SpiConf_SpiChannel_SpiChannel_TJA1145_0
  }};

/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"
/***************** CORE0 JOB CONFIGURATION MemMap SECTION END *************/
    
    
      /******************* CORE0 QSPI1 CONFIGURATION MEMMAP SECTION *************/
/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_START_SEC_CONFIG_DATA_ASIL_B_CORE0_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"
/* QSPI1 */

static const Spi_QspiHwConfigType Spi_kQspiHwConfigQSPI1 =
{
  0x01000000U,               /* Active CS Level, SSOC SFR value */
  0,   /* Buffers on all synchronous QSPI Hw */
  0U,                        /* Queue length can be ignored for Sync */
  (uint8)SPI_DMA_CHNL_INVALID,   /* DMA Tx Channel */
  (uint8)SPI_DMA_CHNL_INVALID,   /* DMA Rx Channel */
  0U,                        /* DMA TCS value can be ignored for Sync */
  SPI_CLK_SLEEP_DISABLE,     /* Module Sleep disabled */
  (uint8)0U,                 /* Input class, MRIS bit field in PISEL SFR */
  1U,                         /* Applicable only for Async QSPI */
  0U,  /* External Demultiplexer feature is disabled */
  0U /* SLSO0 Strobe delay */
};
/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"
/***************** CORE0 QSPI1 CONFIGURATION MemMap SECTION END *************/
      /******************* CORE0 QSPI2 CONFIGURATION MEMMAP SECTION *************/
/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_START_SEC_CONFIG_DATA_ASIL_B_CORE0_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"
/* QSPI2 */

static const Spi_QspiHwConfigType Spi_kQspiHwConfigQSPI2 =
{
  0x00010000U,               /* Active CS Level, SSOC SFR value */
  0,   /* Buffers on all synchronous QSPI Hw */
  0U,                        /* Queue length can be ignored for Sync */
  (uint8)SPI_DMA_CHNL_INVALID,   /* DMA Tx Channel */
  (uint8)SPI_DMA_CHNL_INVALID,   /* DMA Rx Channel */
  0U,                        /* DMA TCS value can be ignored for Sync */
  SPI_CLK_SLEEP_DISABLE,     /* Module Sleep disabled */
  (uint8)0U,                 /* Input class, MRIS bit field in PISEL SFR */
  1U,                         /* Applicable only for Async QSPI */
  0U,  /* External Demultiplexer feature is disabled */
  0U /* SLSO0 Strobe delay */
};
/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"
/***************** CORE0 QSPI2 CONFIGURATION MemMap SECTION END *************/
      /******************* CORE0 QSPI3 CONFIGURATION MEMMAP SECTION *************/
/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_START_SEC_CONFIG_DATA_ASIL_B_CORE0_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"
/* QSPI3 */

static const Spi_QspiHwConfigType Spi_kQspiHwConfigQSPI3 =
{
  0x04000000U,               /* Active CS Level, SSOC SFR value */
  0,   /* Buffers on all synchronous QSPI Hw */
  0U,                        /* Queue length can be ignored for Sync */
  (uint8)SPI_DMA_CHNL_INVALID,   /* DMA Tx Channel */
  (uint8)SPI_DMA_CHNL_INVALID,   /* DMA Rx Channel */
  0U,                        /* DMA TCS value can be ignored for Sync */
  SPI_CLK_SLEEP_DISABLE,     /* Module Sleep disabled */
  (uint8)2U,                 /* Input class, MRIS bit field in PISEL SFR */
  1U,                         /* Applicable only for Async QSPI */
  0U,  /* External Demultiplexer feature is disabled */
  0U /* SLSO0 Strobe delay */
};
/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"
/***************** CORE0 QSPI3 CONFIGURATION MemMap SECTION END *************/
      /******************* CORE0 QSPI4 CONFIGURATION MEMMAP SECTION *************/
/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_START_SEC_CONFIG_DATA_ASIL_B_CORE0_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"
/* QSPI4 */

static const Spi_QspiHwConfigType Spi_kQspiHwConfigQSPI4 =
{
  0x00080000U,               /* Active CS Level, SSOC SFR value */
  0,   /* Buffers on all synchronous QSPI Hw */
  0U,                        /* Queue length can be ignored for Sync */
  (uint8)SPI_DMA_CHNL_INVALID,   /* DMA Tx Channel */
  (uint8)SPI_DMA_CHNL_INVALID,   /* DMA Rx Channel */
  0U,                        /* DMA TCS value can be ignored for Sync */
  SPI_CLK_SLEEP_DISABLE,     /* Module Sleep disabled */
  (uint8)1U,                 /* Input class, MRIS bit field in PISEL SFR */
  3U,                         /* Applicable only for Async QSPI */
  0U,  /* External Demultiplexer feature is disabled */
  0U /* SLSO0 Strobe delay */
};
/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"
/***************** CORE0 QSPI4 CONFIGURATION MemMap SECTION END *************/
                                                
/********************CORE0 RX/TX BUFFERS MEMMAP SECTION***********************/
/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_START_SEC_CONFIG_DATA_ASIL_B_CORE0_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"
/* Lookup table to hold the offset in buffer and total elements to be transferred for all IB channels.
Index - Represents channel number, 1st element - Offset in buffer, 2nd element - Total elements to be transmitted */

static const Spi_CoreChannelOffsetType Spi_ChannelOffsets_Core0[SPI_NUM_IB_CHANNELS_CORE0 +  SPI_NUM_EB_CHANNELS_CORE0 + 1U] =
{
  {0, 0},    /*SpiChannel_TLE9410_SPI1*/
  {0, 0},    /*SpiChannel_TLE9201*/
  {0, 0},    /*SpiChannel_TLE8888*/
  {0, 0},    /*SpiChannel_TJA1145_3*/
  {0, 0},    /*SpiChannel_TJA1145_2*/
  {0, 0},    /*SpiChannel_TJA1145_1*/
  {0, 0},    /*SpiChannel_TJA1145_0*/
  {0xFFFF, 0xFFFF}
};

/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"
/********************CORE0 RX/TX BUFFERS MEMMAP SECTION***********************/
    
/******************* CORE0 Spi_Config_Core CONFIGURATION MEMMAP SECTION *************/

/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_START_SEC_CONFIG_DATA_ASIL_B_CORE0_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"
/* MISRA2012_RULE_8_7_JUSTIFICATION: Spi_Config_Core0 is used outside
* of this file and therefore it is not declared as static */
/* MISRA2012_RULE_8_4_JUSTIFICATION: Agreed violation */

const Spi_CoreConfigType Spi_Config_Core0 =
{
  /* Sequence Configuration */
  Spi_kSequenceConfig_Core0,
  /* Job configuration */
  Spi_kJobConfig_Core0,
  /* Channel Configuration */
  Spi_kChannelConfig_Core0,
  Spi_ChannelOffsets_Core0,
  /* QSPI Hw configuration */
  {
    NULL_PTR,
    &Spi_kQspiHwConfigQSPI1,
    &Spi_kQspiHwConfigQSPI2,
    &Spi_kQspiHwConfigQSPI3,
    &Spi_kQspiHwConfigQSPI4,
  },
  /* Hw Map Index */      
  /*
  (000 QSPI not configured for core0)
  (001 QSPI configured as Sync for core0)
  (010 QSPI configured as Async for core0)
  QSPI5 - 0
  QSPI4 - 1
  QSPI3 - 1
  QSPI2 - 1
  QSPI1 - 1
  QSPI0 - 0*/
  0x01248U,
  /* No. of Sequences configured */
  6U,
  /* No. of Jobs configured */
  7U,
  /* No. of Channels configured */
  7U
};

/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_STOP_SEC_CONFIG_DATA_ASIL_B_CORE0_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"
/***************** CORE0 Spi_Config_Core CONFIGURATION MemMap SECTION END *************/
          
    

/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_START_SEC_CONFIG_DATA_ASIL_B_GLOBAL_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"

const Spi_ConfigType Spi_Config =
{
  {
    &Spi_Config_Core0,
    NULL_PTR,
    NULL_PTR
  },
  SequenceLookupIndex,
  JobLookupIndex,
  ChannelLookupIndex,
  /*Total number of Sequence*/
  6U,
  /*Total number of Jobs*/
  7U,
  /*Total number of Channels*/
  7U,
  /*Sync Delay*/
  65535U
};

/* MISRA2012_RULE_5_1_JUSTIFICATION: External identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_2_JUSTIFICATION: Identifiers declared in the same scope
shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_4_JUSTIFICATION: Macro identifiers shall be distinct
* because of AS naming convention*/
/* MISRA2012_RULE_5_5_JUSTIFICATION: Identifiers shall be distinct from macro
names
* because of AS naming convention*/
#define SPI_STOP_SEC_CONFIG_DATA_ASIL_B_GLOBAL_32
/* MISRA2012_RULE_4_10_JUSTIFICATION: Spi_Memmap.h is repeatedly included
* without include guard. This is as per AUTOSAR */
/* MISRA2012_RULE_20_1_JUSTIFICATION: Declaration before #include,
* this is due to inclusion of memmap.h to specify the location to which
* the variable has to be placed. */
#include "Spi_MemMap.h"/* End Of File */
