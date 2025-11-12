/**********************************************************************************************************************
 *  EXAMPLE CODE ONLY
 *  -------------------------------------------------------------------------------------------------------------------
 *  This Example Code is only intended for illustrating an example of a possible BSW integration and BSW configuration.
 *  The Example Code has not passed any quality control measures and may be incomplete. The Example Code is neither
 *  intended nor qualified for use in series production. The Example Code as well as any of its modifications and/or
 *  implementations must be tested with diligent care and must comply with all quality requirements which are necessary
 *  according to the state of the art before their use.
 *********************************************************************************************************************/


architecture TC1V1.6.2
{
  endianness
  {
    little;
  }
  space linear
  {
    id = 1;
    mau = 8;
    map (dest = bus:local_bus, size = 4G);
    copytable (align = 4, copy_unit = 1, dest = linear);
  }
  bus local_bus
  {
    mau = 8;
    width = 32;
  }
}

derivative mpe
{
  core vtc
  {
    architecture = TC1V1.6.2;
  }
  bus local_bus
  {
    mau = 8;
    width = 32;
    map (dest = bus:vtc:local_bus, dest_offset = 0, size = 4G);
  }
  section_setup :vtc:linear
  {
    start_address (symbol = "brsStartupEntry");
  }
  memory RegionBlock_0_DSPR_Core2
  {
    mau = 8;
    type = ram;
    size = 98304; /* 96 KiB */
    map (dest=bus:local_bus, dest_offset = 0x50000000, size = 98304);
  }
  memory RegionBlock_0_DSPR_Core1
  {
    mau = 8;
    type = ram;
    size = 245760; /* 240 KiB */
    map (dest=bus:local_bus, dest_offset = 0x60000000, size = 245760);
  }
  memory RegionBlock_0_DSPR_Core0
  {
    mau = 8;
    type = ram;
    size = 245760; /* 240 KiB */
    map (dest=bus:local_bus, dest_offset = 0x70000000, size = 245760);
  }
  memory RegionBlock_Startup_Cached
  {
    mau = 8;
    type = rom;
    size = 1536; /* 2 KiB */
    map (dest=bus:local_bus, dest_offset = 0x80100000, size = 1536);
  }
  memory RegionBlock_PFlash0_Cached
  {
    mau = 8;
    type = rom;
    size = 2030080; /* 2 MiB */
    map (dest=bus:local_bus, dest_offset = 0x80100600, size = 2030080);
  }
  memory RegionBlock_PFlash0_Calibration
  {
    mau = 8;
    type = rom;
    size = 65536; /* 64 KiB */
    map (dest=bus:local_bus, dest_offset = 0x802F0000, size = 65536);
  }
  memory RegionBlock_BMHD0
  {
    mau = 8;
    type = rom;
    size = 512; /* 512 Byte */
    map (dest=bus:local_bus, dest_offset = 0xAF400000, size = 512);
  }
}

section_layout mpe:vtc:linear
{
  group OS_STACKS_CORE0_VAR_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core0)
  {
    group OS_STACKS_CORE0_VAR_NOINIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_STACKS_CORE0_VAR_NOINIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]bss.OS_STACK_CORE0_BSW_TASK_VAR_NOINIT";
        select "[.]bss.OS_STACK_CORE0_CDDTASK_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE0_ERROR_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE0_INIT_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE0_ISR_CORE_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE0_KERNEL_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE0_SHUTDOWN_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE0_TASK_PRIO49_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE0_TASK_PRIO50_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE0_TASK_PRIO64_VAR_NOINIT";
      }
    }
    group OS_STACKS_CORE0_VAR_NOINIT_PAD (align = 1)
    {
      reserved "OS_STACKS_CORE0_VAR_NOINIT_PAD" (size = 16);
    }
    "_OS_STACKS_CORE0_VAR_NOINIT_START" = "_lc_gb_OS_STACKS_CORE0_VAR_NOINIT";
    "_OS_STACKS_CORE0_VAR_NOINIT_END" = ("_lc_gb_OS_STACKS_CORE0_VAR_NOINIT_PAD" == 0) ? 0 : "_lc_gb_OS_STACKS_CORE0_VAR_NOINIT_PAD" - 1;
    "_OS_STACKS_CORE0_VAR_NOINIT_LIMIT" = "_lc_gb_OS_STACKS_CORE0_VAR_NOINIT_PAD";

    "_OS_STACKS_CORE0_VAR_ALL_START" = "_OS_STACKS_CORE0_VAR_NOINIT_START";
    "_OS_STACKS_CORE0_VAR_ALL_END" = "_OS_STACKS_CORE0_VAR_NOINIT_END";
    "_OS_STACKS_CORE0_VAR_ALL_LIMIT" = "_OS_STACKS_CORE0_VAR_NOINIT_LIMIT";
  }

  group OS_STACKS_CORE1_VAR_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core1)
  {
    group OS_STACKS_CORE1_VAR_NOINIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_STACKS_CORE1_VAR_NOINIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]bss.OS_STACK_CORE1_ASW_TASK_QM_VAR_NOINIT";
        select "[.]bss.OS_STACK_CORE1_BSW_TASK_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE1_ERROR_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE1_INIT_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE1_ISR_CORE_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE1_KERNEL_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE1_SHUTDOWN_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE1_TASK_PRIO40_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE1_TASK_PRIO4294967295_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE1_TASK_PRIO49_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE1_TASK_PRIO50_VAR_NOINIT";
      }
    }
    group OS_STACKS_CORE1_VAR_NOINIT_PAD (align = 1)
    {
      reserved "OS_STACKS_CORE1_VAR_NOINIT_PAD" (size = 16);
    }
    "_OS_STACKS_CORE1_VAR_NOINIT_START" = "_lc_gb_OS_STACKS_CORE1_VAR_NOINIT";
    "_OS_STACKS_CORE1_VAR_NOINIT_END" = ("_lc_gb_OS_STACKS_CORE1_VAR_NOINIT_PAD" == 0) ? 0 : "_lc_gb_OS_STACKS_CORE1_VAR_NOINIT_PAD" - 1;
    "_OS_STACKS_CORE1_VAR_NOINIT_LIMIT" = "_lc_gb_OS_STACKS_CORE1_VAR_NOINIT_PAD";

    "_OS_STACKS_CORE1_VAR_ALL_START" = "_OS_STACKS_CORE1_VAR_NOINIT_START";
    "_OS_STACKS_CORE1_VAR_ALL_END" = "_OS_STACKS_CORE1_VAR_NOINIT_END";
    "_OS_STACKS_CORE1_VAR_ALL_LIMIT" = "_OS_STACKS_CORE1_VAR_NOINIT_LIMIT";
  }

  group OS_STACKS_CORE2_VAR_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core2)
  {
    group OS_STACKS_CORE2_VAR_NOINIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_STACKS_CORE2_VAR_NOINIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]bss.OS_STACK_OSCORE2_ERROR_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE2_INIT_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE2_ISR_CORE_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE2_KERNEL_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE2_SHUTDOWN_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE2_TASK_PRIO0_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE2_TASK_PRIO4294967295_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE2_TASK_PRIO49_VAR_NOINIT";
        select "[.]bss.OS_STACK_OSCORE2_TASK_PRIO50_VAR_NOINIT";
      }
    }
    group OS_STACKS_CORE2_VAR_NOINIT_PAD (align = 1)
    {
      reserved "OS_STACKS_CORE2_VAR_NOINIT_PAD" (size = 16);
    }
    "_OS_STACKS_CORE2_VAR_NOINIT_START" = "_lc_gb_OS_STACKS_CORE2_VAR_NOINIT";
    "_OS_STACKS_CORE2_VAR_NOINIT_END" = ("_lc_gb_OS_STACKS_CORE2_VAR_NOINIT_PAD" == 0) ? 0 : "_lc_gb_OS_STACKS_CORE2_VAR_NOINIT_PAD" - 1;
    "_OS_STACKS_CORE2_VAR_NOINIT_LIMIT" = "_lc_gb_OS_STACKS_CORE2_VAR_NOINIT_PAD";

    "_OS_STACKS_CORE2_VAR_ALL_START" = "_OS_STACKS_CORE2_VAR_NOINIT_START";
    "_OS_STACKS_CORE2_VAR_ALL_END" = "_OS_STACKS_CORE2_VAR_NOINIT_END";
    "_OS_STACKS_CORE2_VAR_ALL_LIMIT" = "_OS_STACKS_CORE2_VAR_NOINIT_LIMIT";
  }

  group Startup_Code_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_Startup_Cached)
  {
    group Startup_Code (ordered, contiguous, fill, align = 4)
    {
      section "Startup_Code_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]text.brsStartup";
      }
    }
    "_Startup_Code_START" = "_lc_gb_Startup_Code";
    "_Startup_Code_END" = ("_lc_ge_Startup_Code" == 0) ? 0 : "_lc_ge_Startup_Code" - 1;
    "_Startup_Code_LIMIT" = "_lc_ge_Startup_Code";

    "_Startup_Code_ALL_START" = "_Startup_Code_START";
    "_Startup_Code_ALL_END" = "_Startup_Code_END";
    "_Startup_Code_ALL_LIMIT" = "_Startup_Code_LIMIT";
  }

  group BMHD0_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_BMHD0)
  {
    group BMHD0 (ordered, contiguous, fill, align = 4)
    {
      section "BMHD0_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]rodata.BMHD0";
      }
    }
    "_BMHD0_START" = "_lc_gb_BMHD0";
    "_BMHD0_END" = ("_lc_ge_BMHD0" == 0) ? 0 : "_lc_ge_BMHD0" - 1;
    "_BMHD0_LIMIT" = "_lc_ge_BMHD0";

    "_BMHD0_ALL_START" = "_BMHD0_START";
    "_BMHD0_ALL_END" = "_BMHD0_END";
    "_BMHD0_ALL_LIMIT" = "_BMHD0_LIMIT";
  }

  group CALIBRATION_CONST_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Calibration)
  {
    group CALIBRATION_CONST (ordered, contiguous, fill, align = 32)
    {
      section "CALIBRATION_CONST_SEC" (fill, blocksize = 2, attributes = rx, size = 65536)
      {
        select "[.]rodata.CALIBRATION_CONST";
        select "[.]zrodata.CALIBRATION_CONST_FAST";
      }
    }
    group CALIBRATION_CONST_PAD (align = 32)
    {
      reserved "CALIBRATION_CONST_PAD" (size = 0);
    }
    "_CALIBRATION_CONST_START" = "_lc_gb_CALIBRATION_CONST";
    "_CALIBRATION_CONST_END" = ("_lc_ge_CALIBRATION_CONST" == 0) ? 0 : "_lc_ge_CALIBRATION_CONST" - 1;
    "_CALIBRATION_CONST_LIMIT" = "_lc_ge_CALIBRATION_CONST";

    "_CALIBRATION_CONST_ALL_START" = "_CALIBRATION_CONST_START";
    "_CALIBRATION_CONST_ALL_END" = "_CALIBRATION_CONST_END";
    "_CALIBRATION_CONST_ALL_LIMIT" = "_CALIBRATION_CONST_LIMIT";
  }

  group CSA_CORE0_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core0)
  {
    group CSA_CORE0 (ordered, contiguous, fill, align = 64)
    {
      reserved "CSA_CORE0" (size = 32768);
    }
    "_CSA_CORE0_START" = "_lc_gb_CSA_CORE0";
    "_CSA_CORE0_END" = ("_lc_ge_CSA_CORE0" == 0) ? 0 : "_lc_ge_CSA_CORE0" - 1;
    "_CSA_CORE0_LIMIT" = "_lc_ge_CSA_CORE0";

    "_CSA_CORE0_ALL_START" = "_CSA_CORE0_START";
    "_CSA_CORE0_ALL_END" = "_CSA_CORE0_END";
    "_CSA_CORE0_ALL_LIMIT" = "_CSA_CORE0_LIMIT";
  }

  group CSA_CORE1_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core1)
  {
    group CSA_CORE1 (ordered, contiguous, fill, align = 64)
    {
      reserved "CSA_CORE1" (size = 8192);
    }
    "_CSA_CORE1_START" = "_lc_gb_CSA_CORE1";
    "_CSA_CORE1_END" = ("_lc_ge_CSA_CORE1" == 0) ? 0 : "_lc_ge_CSA_CORE1" - 1;
    "_CSA_CORE1_LIMIT" = "_lc_ge_CSA_CORE1";

    "_CSA_CORE1_ALL_START" = "_CSA_CORE1_START";
    "_CSA_CORE1_ALL_END" = "_CSA_CORE1_END";
    "_CSA_CORE1_ALL_LIMIT" = "_CSA_CORE1_LIMIT";
  }

  group CSA_CORE2_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core2)
  {
    group CSA_CORE2 (ordered, contiguous, fill, align = 64)
    {
      reserved "CSA_CORE2" (size = 8192);
    }
    "_CSA_CORE2_START" = "_lc_gb_CSA_CORE2";
    "_CSA_CORE2_END" = ("_lc_ge_CSA_CORE2" == 0) ? 0 : "_lc_ge_CSA_CORE2" - 1;
    "_CSA_CORE2_LIMIT" = "_lc_ge_CSA_CORE2";

    "_CSA_CORE2_ALL_START" = "_CSA_CORE2_START";
    "_CSA_CORE2_ALL_END" = "_CSA_CORE2_END";
    "_CSA_CORE2_ALL_LIMIT" = "_CSA_CORE2_LIMIT";
  }

  "__CSA_BEGIN_CPU0_" = "_CSA_CORE0_START";
  "__CSA_END_CPU0_" = "_CSA_CORE0_LIMIT";
  "__CSA_BEGIN_CPU1_" = "_CSA_CORE1_START";
  "__CSA_END_CPU1_" = "_CSA_CORE1_LIMIT";
  "__CSA_BEGIN_CPU2_" = "_CSA_CORE2_START";
  "__CSA_END_CPU2_" = "_CSA_CORE2_LIMIT";

  group MSR_CODE_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group MSR_CODE (ordered, contiguous, fill)
    {
      section "MSR_CODE_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]text.MSR_CODE";
      }
    }
    "_MSR_CODE_START" = "_lc_gb_MSR_CODE";
    "_MSR_CODE_END" = ("_lc_ge_MSR_CODE" == 0) ? 0 : "_lc_ge_MSR_CODE" - 1;
    "_MSR_CODE_LIMIT" = "_lc_ge_MSR_CODE";

    "_MSR_CODE_ALL_START" = "_MSR_CODE_START";
    "_MSR_CODE_ALL_END" = "_MSR_CODE_END";
    "_MSR_CODE_ALL_LIMIT" = "_MSR_CODE_LIMIT";
  }

  group MSR_CONST_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group MSR_CONST (ordered, contiguous, fill)
    {
      section "MSR_CONST_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]rodata.MSR_CONST";
        select "[.]zrodata.MSR_CONST_FAST";
      }
    }
    "_MSR_CONST_START" = "_lc_gb_MSR_CONST";
    "_MSR_CONST_END" = ("_lc_ge_MSR_CONST" == 0) ? 0 : "_lc_ge_MSR_CONST" - 1;
    "_MSR_CONST_LIMIT" = "_lc_ge_MSR_CONST";

    "_MSR_CONST_ALL_START" = "_MSR_CONST_START";
    "_MSR_CONST_ALL_END" = "_MSR_CONST_END";
    "_MSR_CONST_ALL_LIMIT" = "_MSR_CONST_LIMIT";
  }

  group MSR_PBCFG_CONST_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group MSR_PBCFG_CONST (ordered, contiguous, fill)
    {
      section "MSR_PBCFG_CONST_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]rodata.MSR_PBCFG_CONST";
        select "[.]zrodata.MSR_PBCFG_CONST_FAST";
      }
    }
    "_MSR_PBCFG_CONST_START" = "_lc_gb_MSR_PBCFG_CONST";
    "_MSR_PBCFG_CONST_END" = ("_lc_ge_MSR_PBCFG_CONST" == 0) ? 0 : "_lc_ge_MSR_PBCFG_CONST" - 1;
    "_MSR_PBCFG_CONST_LIMIT" = "_lc_ge_MSR_PBCFG_CONST";

    "_MSR_PBCFG_CONST_ALL_START" = "_MSR_PBCFG_CONST_START";
    "_MSR_PBCFG_CONST_ALL_END" = "_MSR_PBCFG_CONST_END";
    "_MSR_PBCFG_CONST_ALL_LIMIT" = "_MSR_PBCFG_CONST_LIMIT";
  }

  group MSR_PBCFG_VAR_ROM_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group MSR_PBCFG_VAR_INIT_ROM (ordered, contiguous, fill, align = 16)
    {
      section "MSR_PBCFG_VAR_INIT_ROM_SEC" (fill, blocksize = 2, attributes = rx)
      {
        group (load_addr)
        {
          select "[.]data.MSR_PBCFG_VAR";
          select "[.]zdata.MSR_PBCFG_VAR_FAST";
        }
      }
    }
    "_MSR_PBCFG_VAR_INIT_ROM_START" = "_lc_gb_MSR_PBCFG_VAR_INIT_ROM";
    "_MSR_PBCFG_VAR_INIT_ROM_LIMIT" = "_lc_ge_MSR_PBCFG_VAR_INIT_ROM";

  }

  group MSR_PBCFG_VAR_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core0)
  {
    group MSR_PBCFG_VAR_INIT (ordered, contiguous, fill, align = 16)
    {
      section "MSR_PBCFG_VAR_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]data.MSR_PBCFG_VAR";
        select "[.]zdata.MSR_PBCFG_VAR_FAST";
      }
    }
    group MSR_PBCFG_VAR_INIT_PAD (align = 4)
    {
      reserved "MSR_PBCFG_VAR_INIT_PAD" (size = 0);
    }
    "_MSR_PBCFG_VAR_INIT_START" = "_lc_gb_MSR_PBCFG_VAR_INIT";
    "_MSR_PBCFG_VAR_INIT_END" = ("_lc_ge_MSR_PBCFG_VAR_INIT" == 0) ? 0 : "_lc_ge_MSR_PBCFG_VAR_INIT" - 1;
    "_MSR_PBCFG_VAR_INIT_LIMIT" = "_lc_ge_MSR_PBCFG_VAR_INIT";

    group MSR_PBCFG_VAR_NO_INIT (ordered, contiguous, fill, align = 16)
    {
      section "MSR_PBCFG_VAR_NO_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]zbss.MSR_PBCFG_VAR_FAST_NO_INIT";
        select "[.]bss.MSR_PBCFG_VAR_NO_INIT";
      }
    }
    "_MSR_PBCFG_VAR_NO_INIT_START" = "_lc_gb_MSR_PBCFG_VAR_NO_INIT";
    "_MSR_PBCFG_VAR_NO_INIT_END" = ("_lc_ge_MSR_PBCFG_VAR_NO_INIT" == 0) ? 0 : "_lc_ge_MSR_PBCFG_VAR_NO_INIT" - 1;
    "_MSR_PBCFG_VAR_NO_INIT_LIMIT" = "_lc_ge_MSR_PBCFG_VAR_NO_INIT";

    "_MSR_PBCFG_VAR_ALL_START" = "_MSR_PBCFG_VAR_INIT_START";
    "_MSR_PBCFG_VAR_ALL_END" = "_MSR_PBCFG_VAR_NO_INIT_END";
    "_MSR_PBCFG_VAR_ALL_LIMIT" = "_MSR_PBCFG_VAR_NO_INIT_LIMIT";
  }

  group MSR_VAR_ROM_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group MSR_VAR_INIT_ROM (ordered, contiguous, fill, align = 16)
    {
      section "MSR_VAR_INIT_ROM_SEC" (fill, blocksize = 2, attributes = rx)
      {
        group (load_addr)
        {
          select "[.]zdata.MSR_VAR_FAST_INIT";
          select "[.]data.MSR_VAR_INIT";
        }
      }
    }
    "_MSR_VAR_INIT_ROM_START" = "_lc_gb_MSR_VAR_INIT_ROM";
    "_MSR_VAR_INIT_ROM_LIMIT" = "_lc_ge_MSR_VAR_INIT_ROM";

  }

  group MSR_VAR_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core0)
  {
    group MSR_VAR_CLEARED (ordered, contiguous, fill, align = 16)
    {
      section "MSR_VAR_CLEARED_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]*.MSR_VAR_CLEARED";
        select "[.]*.MSR_VAR_FAST_CLEARED";
      }
    }
    group MSR_VAR_CLEARED_PAD (align = 4)
    {
      reserved "MSR_VAR_CLEARED_PAD" (size = 0);
    }
    "_MSR_VAR_CLEARED_START" = "_lc_gb_MSR_VAR_CLEARED";
    "_MSR_VAR_CLEARED_END" = ("_lc_ge_MSR_VAR_CLEARED" == 0) ? 0 : "_lc_ge_MSR_VAR_CLEARED" - 1;
    "_MSR_VAR_CLEARED_LIMIT" = "_lc_ge_MSR_VAR_CLEARED";

    group MSR_VAR_INIT (ordered, contiguous, fill, align = 16)
    {
      section "MSR_VAR_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]zdata.MSR_VAR_FAST_INIT";
        select "[.]data.MSR_VAR_INIT";
      }
    }
    group MSR_VAR_INIT_PAD (align = 4)
    {
      reserved "MSR_VAR_INIT_PAD" (size = 0);
    }
    "_MSR_VAR_INIT_START" = "_lc_gb_MSR_VAR_INIT";
    "_MSR_VAR_INIT_END" = ("_lc_ge_MSR_VAR_INIT" == 0) ? 0 : "_lc_ge_MSR_VAR_INIT" - 1;
    "_MSR_VAR_INIT_LIMIT" = "_lc_ge_MSR_VAR_INIT";

    group MSR_VAR_NO_INIT (ordered, contiguous, fill, align = 16)
    {
      section "MSR_VAR_NO_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]zbss.MSR_VAR_FAST_NO_INIT";
        select "[.]bss.MSR_VAR_NO_INIT";
      }
    }
    "_MSR_VAR_NO_INIT_START" = "_lc_gb_MSR_VAR_NO_INIT";
    "_MSR_VAR_NO_INIT_END" = ("_lc_ge_MSR_VAR_NO_INIT" == 0) ? 0 : "_lc_ge_MSR_VAR_NO_INIT" - 1;
    "_MSR_VAR_NO_INIT_LIMIT" = "_lc_ge_MSR_VAR_NO_INIT";

    "_MSR_VAR_ALL_START" = "_MSR_VAR_CLEARED_START";
    "_MSR_VAR_ALL_END" = "_MSR_VAR_NO_INIT_END";
    "_MSR_VAR_ALL_LIMIT" = "_MSR_VAR_NO_INIT_LIMIT";
  }

  group MSR_VAR_SAVED_ZONE_ROM_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group MSR_VAR_SAVED_ZONE_INIT_ROM (ordered, contiguous, fill, align = 16)
    {
      section "MSR_VAR_SAVED_ZONE_INIT_ROM_SEC" (fill, blocksize = 2, attributes = rx)
      {
        group (load_addr)
        {
          select "[.]zdata.MSR_VAR_SAVED_ZONE_FAST_INIT";
          select "[.]data.MSR_VAR_SAVED_ZONE_INIT";
        }
      }
    }
    "_MSR_VAR_SAVED_ZONE_INIT_ROM_START" = "_lc_gb_MSR_VAR_SAVED_ZONE_INIT_ROM";
    "_MSR_VAR_SAVED_ZONE_INIT_ROM_LIMIT" = "_lc_ge_MSR_VAR_SAVED_ZONE_INIT_ROM";

  }

  group MSR_VAR_SAVED_ZONE_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core0)
  {
    group MSR_VAR_SAVED_ZONE_INIT (ordered, contiguous, fill, align = 16)
    {
      section "MSR_VAR_SAVED_ZONE_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]zdata.MSR_VAR_SAVED_ZONE_FAST_INIT";
        select "[.]data.MSR_VAR_SAVED_ZONE_INIT";
      }
    }
    group MSR_VAR_SAVED_ZONE_INIT_PAD (align = 4)
    {
      reserved "MSR_VAR_SAVED_ZONE_INIT_PAD" (size = 0);
    }
    "_MSR_VAR_SAVED_ZONE_INIT_START" = "_lc_gb_MSR_VAR_SAVED_ZONE_INIT";
    "_MSR_VAR_SAVED_ZONE_INIT_END" = ("_lc_ge_MSR_VAR_SAVED_ZONE_INIT" == 0) ? 0 : "_lc_ge_MSR_VAR_SAVED_ZONE_INIT" - 1;
    "_MSR_VAR_SAVED_ZONE_INIT_LIMIT" = "_lc_ge_MSR_VAR_SAVED_ZONE_INIT";

    group MSR_VAR_SAVED_ZONE_NO_INIT (ordered, contiguous, fill, align = 16)
    {
      section "MSR_VAR_SAVED_ZONE_NO_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]zbss.MSR_VAR_SAVED_ZONE_FAST_NO_INIT";
        select "[.]bss.MSR_VAR_SAVED_ZONE_NO_INIT";
      }
    }
    "_MSR_VAR_SAVED_ZONE_NO_INIT_START" = "_lc_gb_MSR_VAR_SAVED_ZONE_NO_INIT";
    "_MSR_VAR_SAVED_ZONE_NO_INIT_END" = ("_lc_ge_MSR_VAR_SAVED_ZONE_NO_INIT" == 0) ? 0 : "_lc_ge_MSR_VAR_SAVED_ZONE_NO_INIT" - 1;
    "_MSR_VAR_SAVED_ZONE_NO_INIT_LIMIT" = "_lc_ge_MSR_VAR_SAVED_ZONE_NO_INIT";

    "_MSR_VAR_SAVED_ZONE_ALL_START" = "_MSR_VAR_SAVED_ZONE_INIT_START";
    "_MSR_VAR_SAVED_ZONE_ALL_END" = "_MSR_VAR_SAVED_ZONE_NO_INIT_END";
    "_MSR_VAR_SAVED_ZONE_ALL_LIMIT" = "_MSR_VAR_SAVED_ZONE_NO_INIT_LIMIT";
  }

  group OS_DATA_CORE0_VAR_ROM_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_DATA_CORE0_VAR_FAST_INIT_ROM (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE0_VAR_FAST_INIT_ROM_SEC" (fill, blocksize = 2, attributes = rx)
      {
        group (load_addr)
        {
          select "[.]zdata.OS_CORE0_VAR_FAST";
          select "[.]zdata.OS_CORE0_VAR_FAST_NOCACHE";
          select "[.]zdata.OS_SystemApplication_OsCore0_VAR_FAST";
          select "[.]zdata.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE";
        }
      }
    }
    "_OS_DATA_CORE0_VAR_FAST_INIT_ROM_START" = "_lc_gb_OS_DATA_CORE0_VAR_FAST_INIT_ROM";
    "_OS_DATA_CORE0_VAR_FAST_INIT_ROM_LIMIT" = "_lc_ge_OS_DATA_CORE0_VAR_FAST_INIT_ROM";

    group OS_DATA_CORE0_VAR_INIT_ROM (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE0_VAR_INIT_ROM_SEC" (fill, blocksize = 2, attributes = rx)
      {
        group (load_addr)
        {
          select "[.]data.OS_CORE0_VAR";
          select "[.]data.OS_CORE0_VAR_NOCACHE";
          select "[.]data.OS_SystemApplication_OsCore0_VAR";
          select "[.]data.OS_SystemApplication_OsCore0_VAR_NOCACHE";
        }
      }
    }
    "_OS_DATA_CORE0_VAR_INIT_ROM_START" = "_lc_gb_OS_DATA_CORE0_VAR_INIT_ROM";
    "_OS_DATA_CORE0_VAR_INIT_ROM_LIMIT" = "_lc_ge_OS_DATA_CORE0_VAR_INIT_ROM";

  }

  group OS_DATA_CORE0_VAR_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core0)
  {
    group OS_DATA_CORE0_VAR_FAST_INIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE0_VAR_FAST_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]zdata.OS_CORE0_VAR_FAST";
        select "[.]zdata.OS_CORE0_VAR_FAST_NOCACHE";
        select "[.]zdata.OS_SystemApplication_OsCore0_VAR_FAST";
        select "[.]zdata.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE";
      }
    }
    group OS_DATA_CORE0_VAR_FAST_INIT_PAD (align = 4)
    {
      reserved "OS_DATA_CORE0_VAR_FAST_INIT_PAD" (size = 16);
    }
    "_OS_DATA_CORE0_VAR_FAST_INIT_START" = "_lc_gb_OS_DATA_CORE0_VAR_FAST_INIT";
    "_OS_DATA_CORE0_VAR_FAST_INIT_END" = ("_lc_gb_OS_DATA_CORE0_VAR_FAST_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE0_VAR_FAST_INIT_PAD" - 1;
    "_OS_DATA_CORE0_VAR_FAST_INIT_LIMIT" = "_lc_gb_OS_DATA_CORE0_VAR_FAST_INIT_PAD";

    group OS_DATA_CORE0_VAR_FAST_NOINIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE0_VAR_FAST_NOINIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]zbss.OS_CORE0_VAR_FAST_NOCACHE_NOINIT";
        select "[.]zbss.OS_CORE0_VAR_FAST_NOINIT";
        select "[.]zbss.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_NOINIT";
        select "[.]zbss.OS_SystemApplication_OsCore0_VAR_FAST_NOINIT";
      }
    }
    group OS_DATA_CORE0_VAR_FAST_NOINIT_PAD (align = 1)
    {
      reserved "OS_DATA_CORE0_VAR_FAST_NOINIT_PAD" (size = 16);
    }
    "_OS_DATA_CORE0_VAR_FAST_NOINIT_START" = "_lc_gb_OS_DATA_CORE0_VAR_FAST_NOINIT";
    "_OS_DATA_CORE0_VAR_FAST_NOINIT_END" = ("_lc_gb_OS_DATA_CORE0_VAR_FAST_NOINIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE0_VAR_FAST_NOINIT_PAD" - 1;
    "_OS_DATA_CORE0_VAR_FAST_NOINIT_LIMIT" = "_lc_gb_OS_DATA_CORE0_VAR_FAST_NOINIT_PAD";

    group OS_DATA_CORE0_VAR_FAST_ZERO_INIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE0_VAR_FAST_ZERO_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]*.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT";
        select "[.]*.OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT";
      }
    }
    group OS_DATA_CORE0_VAR_FAST_ZERO_INIT_PAD (align = 4)
    {
      reserved "OS_DATA_CORE0_VAR_FAST_ZERO_INIT_PAD" (size = 16);
    }
    "_OS_DATA_CORE0_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_DATA_CORE0_VAR_FAST_ZERO_INIT";
    "_OS_DATA_CORE0_VAR_FAST_ZERO_INIT_END" = ("_lc_gb_OS_DATA_CORE0_VAR_FAST_ZERO_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE0_VAR_FAST_ZERO_INIT_PAD" - 1;
    "_OS_DATA_CORE0_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_gb_OS_DATA_CORE0_VAR_FAST_ZERO_INIT_PAD";

    group OS_DATA_CORE0_VAR_FAST_ZERO_INIT_bss (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE0_VAR_FAST_ZERO_INIT_bss_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]*.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_bss";
        select "[.]*.OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_bss";
      }
    }
    group OS_DATA_CORE0_VAR_FAST_ZERO_INIT_bss_PAD (align = 4)
    {
      reserved "OS_DATA_CORE0_VAR_FAST_ZERO_INIT_bss_PAD" (size = 16);
    }
    "_OS_DATA_CORE0_VAR_FAST_ZERO_INIT_bss_START" = "_lc_gb_OS_DATA_CORE0_VAR_FAST_ZERO_INIT_bss";
    "_OS_DATA_CORE0_VAR_FAST_ZERO_INIT_bss_END" = ("_lc_gb_OS_DATA_CORE0_VAR_FAST_ZERO_INIT_bss_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE0_VAR_FAST_ZERO_INIT_bss_PAD" - 1;
    "_OS_DATA_CORE0_VAR_FAST_ZERO_INIT_bss_LIMIT" = "_lc_gb_OS_DATA_CORE0_VAR_FAST_ZERO_INIT_bss_PAD";

    group OS_DATA_CORE0_VAR_INIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE0_VAR_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]data.OS_CORE0_VAR";
        select "[.]data.OS_CORE0_VAR_NOCACHE";
        select "[.]data.OS_SystemApplication_OsCore0_VAR";
        select "[.]data.OS_SystemApplication_OsCore0_VAR_NOCACHE";
      }
    }
    group OS_DATA_CORE0_VAR_INIT_PAD (align = 4)
    {
      reserved "OS_DATA_CORE0_VAR_INIT_PAD" (size = 16);
    }
    "_OS_DATA_CORE0_VAR_INIT_START" = "_lc_gb_OS_DATA_CORE0_VAR_INIT";
    "_OS_DATA_CORE0_VAR_INIT_END" = ("_lc_gb_OS_DATA_CORE0_VAR_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE0_VAR_INIT_PAD" - 1;
    "_OS_DATA_CORE0_VAR_INIT_LIMIT" = "_lc_gb_OS_DATA_CORE0_VAR_INIT_PAD";

    group OS_DATA_CORE0_VAR_NOINIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE0_VAR_NOINIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]bss.OS_CORE0_VAR_NOCACHE_NOINIT";
        select "[.]bss.OS_CORE0_VAR_NOINIT";
        select "[.]bss.OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT";
        select "[.]bss.OS_SystemApplication_OsCore0_VAR_NOINIT";
      }
    }
    group OS_DATA_CORE0_VAR_NOINIT_PAD (align = 1)
    {
      reserved "OS_DATA_CORE0_VAR_NOINIT_PAD" (size = 16);
    }
    "_OS_DATA_CORE0_VAR_NOINIT_START" = "_lc_gb_OS_DATA_CORE0_VAR_NOINIT";
    "_OS_DATA_CORE0_VAR_NOINIT_END" = ("_lc_gb_OS_DATA_CORE0_VAR_NOINIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE0_VAR_NOINIT_PAD" - 1;
    "_OS_DATA_CORE0_VAR_NOINIT_LIMIT" = "_lc_gb_OS_DATA_CORE0_VAR_NOINIT_PAD";

    group OS_DATA_CORE0_VAR_ZERO_INIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE0_VAR_ZERO_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]*.OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT";
        select "[.]*.OS_SystemApplication_OsCore0_VAR_ZERO_INIT";
      }
    }
    group OS_DATA_CORE0_VAR_ZERO_INIT_PAD (align = 4)
    {
      reserved "OS_DATA_CORE0_VAR_ZERO_INIT_PAD" (size = 16);
    }
    "_OS_DATA_CORE0_VAR_ZERO_INIT_START" = "_lc_gb_OS_DATA_CORE0_VAR_ZERO_INIT";
    "_OS_DATA_CORE0_VAR_ZERO_INIT_END" = ("_lc_gb_OS_DATA_CORE0_VAR_ZERO_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE0_VAR_ZERO_INIT_PAD" - 1;
    "_OS_DATA_CORE0_VAR_ZERO_INIT_LIMIT" = "_lc_gb_OS_DATA_CORE0_VAR_ZERO_INIT_PAD";

    group OS_DATA_CORE0_VAR_ZERO_INIT_bss (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE0_VAR_ZERO_INIT_bss_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]*.OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_bss";
        select "[.]*.OS_SystemApplication_OsCore0_VAR_ZERO_INIT_bss";
      }
    }
    group OS_DATA_CORE0_VAR_ZERO_INIT_bss_PAD (align = 4)
    {
      reserved "OS_DATA_CORE0_VAR_ZERO_INIT_bss_PAD" (size = 16);
    }
    "_OS_DATA_CORE0_VAR_ZERO_INIT_bss_START" = "_lc_gb_OS_DATA_CORE0_VAR_ZERO_INIT_bss";
    "_OS_DATA_CORE0_VAR_ZERO_INIT_bss_END" = ("_lc_gb_OS_DATA_CORE0_VAR_ZERO_INIT_bss_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE0_VAR_ZERO_INIT_bss_PAD" - 1;
    "_OS_DATA_CORE0_VAR_ZERO_INIT_bss_LIMIT" = "_lc_gb_OS_DATA_CORE0_VAR_ZERO_INIT_bss_PAD";

    "_OS_DATA_CORE0_VAR_ALL_START" = "_OS_DATA_CORE0_VAR_FAST_INIT_START";
    "_OS_DATA_CORE0_VAR_ALL_END" = "_OS_DATA_CORE0_VAR_ZERO_INIT_bss_END";
    "_OS_DATA_CORE0_VAR_ALL_LIMIT" = "_OS_DATA_CORE0_VAR_ZERO_INIT_bss_LIMIT";
  }

  group OS_DATA_CORE1_VAR_ROM_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_DATA_CORE1_VAR_FAST_INIT_ROM (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE1_VAR_FAST_INIT_ROM_SEC" (fill, blocksize = 2, attributes = rx)
      {
        group (load_addr)
        {
          select "[.]zdata.OS_CORE1_VAR_FAST";
          select "[.]zdata.OS_CORE1_VAR_FAST_NOCACHE";
          select "[.]zdata.OS_SystemApplication_OsCore1_VAR_FAST";
          select "[.]zdata.OS_SystemApplication_OsCore1_VAR_FAST_NOCACHE";
        }
      }
    }
    "_OS_DATA_CORE1_VAR_FAST_INIT_ROM_START" = "_lc_gb_OS_DATA_CORE1_VAR_FAST_INIT_ROM";
    "_OS_DATA_CORE1_VAR_FAST_INIT_ROM_LIMIT" = "_lc_ge_OS_DATA_CORE1_VAR_FAST_INIT_ROM";

    group OS_DATA_CORE1_VAR_INIT_ROM (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE1_VAR_INIT_ROM_SEC" (fill, blocksize = 2, attributes = rx)
      {
        group (load_addr)
        {
          select "[.]data.OS_CORE1_VAR";
          select "[.]data.OS_CORE1_VAR_NOCACHE";
          select "[.]data.OS_SystemApplication_OsCore1_VAR";
          select "[.]data.OS_SystemApplication_OsCore1_VAR_NOCACHE";
        }
      }
    }
    "_OS_DATA_CORE1_VAR_INIT_ROM_START" = "_lc_gb_OS_DATA_CORE1_VAR_INIT_ROM";
    "_OS_DATA_CORE1_VAR_INIT_ROM_LIMIT" = "_lc_ge_OS_DATA_CORE1_VAR_INIT_ROM";

  }

  group OS_DATA_CORE1_VAR_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core1)
  {
    group OS_DATA_CORE1_VAR_FAST_INIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE1_VAR_FAST_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]zdata.OS_CORE1_VAR_FAST";
        select "[.]zdata.OS_CORE1_VAR_FAST_NOCACHE";
        select "[.]zdata.OS_SystemApplication_OsCore1_VAR_FAST";
        select "[.]zdata.OS_SystemApplication_OsCore1_VAR_FAST_NOCACHE";
      }
    }
    group OS_DATA_CORE1_VAR_FAST_INIT_PAD (align = 4)
    {
      reserved "OS_DATA_CORE1_VAR_FAST_INIT_PAD" (size = 16);
    }
    "_OS_DATA_CORE1_VAR_FAST_INIT_START" = "_lc_gb_OS_DATA_CORE1_VAR_FAST_INIT";
    "_OS_DATA_CORE1_VAR_FAST_INIT_END" = ("_lc_gb_OS_DATA_CORE1_VAR_FAST_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE1_VAR_FAST_INIT_PAD" - 1;
    "_OS_DATA_CORE1_VAR_FAST_INIT_LIMIT" = "_lc_gb_OS_DATA_CORE1_VAR_FAST_INIT_PAD";

    group OS_DATA_CORE1_VAR_FAST_NOINIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE1_VAR_FAST_NOINIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]zbss.OS_CORE1_VAR_FAST_NOCACHE_NOINIT";
        select "[.]zbss.OS_CORE1_VAR_FAST_NOINIT";
        select "[.]zbss.OS_SystemApplication_OsCore1_VAR_FAST_NOCACHE_NOINIT";
        select "[.]zbss.OS_SystemApplication_OsCore1_VAR_FAST_NOINIT";
      }
    }
    group OS_DATA_CORE1_VAR_FAST_NOINIT_PAD (align = 1)
    {
      reserved "OS_DATA_CORE1_VAR_FAST_NOINIT_PAD" (size = 16);
    }
    "_OS_DATA_CORE1_VAR_FAST_NOINIT_START" = "_lc_gb_OS_DATA_CORE1_VAR_FAST_NOINIT";
    "_OS_DATA_CORE1_VAR_FAST_NOINIT_END" = ("_lc_gb_OS_DATA_CORE1_VAR_FAST_NOINIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE1_VAR_FAST_NOINIT_PAD" - 1;
    "_OS_DATA_CORE1_VAR_FAST_NOINIT_LIMIT" = "_lc_gb_OS_DATA_CORE1_VAR_FAST_NOINIT_PAD";

    group OS_DATA_CORE1_VAR_FAST_ZERO_INIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE1_VAR_FAST_ZERO_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]*.OS_SystemApplication_OsCore1_VAR_FAST_NOCACHE_ZERO_INIT";
        select "[.]*.OS_SystemApplication_OsCore1_VAR_FAST_ZERO_INIT";
      }
    }
    group OS_DATA_CORE1_VAR_FAST_ZERO_INIT_PAD (align = 4)
    {
      reserved "OS_DATA_CORE1_VAR_FAST_ZERO_INIT_PAD" (size = 16);
    }
    "_OS_DATA_CORE1_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_DATA_CORE1_VAR_FAST_ZERO_INIT";
    "_OS_DATA_CORE1_VAR_FAST_ZERO_INIT_END" = ("_lc_gb_OS_DATA_CORE1_VAR_FAST_ZERO_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE1_VAR_FAST_ZERO_INIT_PAD" - 1;
    "_OS_DATA_CORE1_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_gb_OS_DATA_CORE1_VAR_FAST_ZERO_INIT_PAD";

    group OS_DATA_CORE1_VAR_FAST_ZERO_INIT_bss (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE1_VAR_FAST_ZERO_INIT_bss_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]*.OS_SystemApplication_OsCore1_VAR_FAST_NOCACHE_ZERO_INIT_bss";
        select "[.]*.OS_SystemApplication_OsCore1_VAR_FAST_ZERO_INIT_bss";
      }
    }
    group OS_DATA_CORE1_VAR_FAST_ZERO_INIT_bss_PAD (align = 4)
    {
      reserved "OS_DATA_CORE1_VAR_FAST_ZERO_INIT_bss_PAD" (size = 16);
    }
    "_OS_DATA_CORE1_VAR_FAST_ZERO_INIT_bss_START" = "_lc_gb_OS_DATA_CORE1_VAR_FAST_ZERO_INIT_bss";
    "_OS_DATA_CORE1_VAR_FAST_ZERO_INIT_bss_END" = ("_lc_gb_OS_DATA_CORE1_VAR_FAST_ZERO_INIT_bss_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE1_VAR_FAST_ZERO_INIT_bss_PAD" - 1;
    "_OS_DATA_CORE1_VAR_FAST_ZERO_INIT_bss_LIMIT" = "_lc_gb_OS_DATA_CORE1_VAR_FAST_ZERO_INIT_bss_PAD";

    group OS_DATA_CORE1_VAR_INIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE1_VAR_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]data.OS_CORE1_VAR";
        select "[.]data.OS_CORE1_VAR_NOCACHE";
        select "[.]data.OS_SystemApplication_OsCore1_VAR";
        select "[.]data.OS_SystemApplication_OsCore1_VAR_NOCACHE";
      }
    }
    group OS_DATA_CORE1_VAR_INIT_PAD (align = 4)
    {
      reserved "OS_DATA_CORE1_VAR_INIT_PAD" (size = 16);
    }
    "_OS_DATA_CORE1_VAR_INIT_START" = "_lc_gb_OS_DATA_CORE1_VAR_INIT";
    "_OS_DATA_CORE1_VAR_INIT_END" = ("_lc_gb_OS_DATA_CORE1_VAR_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE1_VAR_INIT_PAD" - 1;
    "_OS_DATA_CORE1_VAR_INIT_LIMIT" = "_lc_gb_OS_DATA_CORE1_VAR_INIT_PAD";

    group OS_DATA_CORE1_VAR_NOINIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE1_VAR_NOINIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]bss.OS_CORE1_VAR_NOCACHE_NOINIT";
        select "[.]bss.OS_CORE1_VAR_NOINIT";
        select "[.]bss.OS_SystemApplication_OsCore1_VAR_NOCACHE_NOINIT";
        select "[.]bss.OS_SystemApplication_OsCore1_VAR_NOINIT";
      }
    }
    group OS_DATA_CORE1_VAR_NOINIT_PAD (align = 1)
    {
      reserved "OS_DATA_CORE1_VAR_NOINIT_PAD" (size = 16);
    }
    "_OS_DATA_CORE1_VAR_NOINIT_START" = "_lc_gb_OS_DATA_CORE1_VAR_NOINIT";
    "_OS_DATA_CORE1_VAR_NOINIT_END" = ("_lc_gb_OS_DATA_CORE1_VAR_NOINIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE1_VAR_NOINIT_PAD" - 1;
    "_OS_DATA_CORE1_VAR_NOINIT_LIMIT" = "_lc_gb_OS_DATA_CORE1_VAR_NOINIT_PAD";

    group OS_DATA_CORE1_VAR_ZERO_INIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE1_VAR_ZERO_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]*.OS_SystemApplication_OsCore1_VAR_NOCACHE_ZERO_INIT";
        select "[.]*.OS_SystemApplication_OsCore1_VAR_ZERO_INIT";
      }
    }
    group OS_DATA_CORE1_VAR_ZERO_INIT_PAD (align = 4)
    {
      reserved "OS_DATA_CORE1_VAR_ZERO_INIT_PAD" (size = 16);
    }
    "_OS_DATA_CORE1_VAR_ZERO_INIT_START" = "_lc_gb_OS_DATA_CORE1_VAR_ZERO_INIT";
    "_OS_DATA_CORE1_VAR_ZERO_INIT_END" = ("_lc_gb_OS_DATA_CORE1_VAR_ZERO_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE1_VAR_ZERO_INIT_PAD" - 1;
    "_OS_DATA_CORE1_VAR_ZERO_INIT_LIMIT" = "_lc_gb_OS_DATA_CORE1_VAR_ZERO_INIT_PAD";

    group OS_DATA_CORE1_VAR_ZERO_INIT_bss (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE1_VAR_ZERO_INIT_bss_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]*.OS_SystemApplication_OsCore1_VAR_NOCACHE_ZERO_INIT_bss";
        select "[.]*.OS_SystemApplication_OsCore1_VAR_ZERO_INIT_bss";
      }
    }
    group OS_DATA_CORE1_VAR_ZERO_INIT_bss_PAD (align = 4)
    {
      reserved "OS_DATA_CORE1_VAR_ZERO_INIT_bss_PAD" (size = 16);
    }
    "_OS_DATA_CORE1_VAR_ZERO_INIT_bss_START" = "_lc_gb_OS_DATA_CORE1_VAR_ZERO_INIT_bss";
    "_OS_DATA_CORE1_VAR_ZERO_INIT_bss_END" = ("_lc_gb_OS_DATA_CORE1_VAR_ZERO_INIT_bss_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE1_VAR_ZERO_INIT_bss_PAD" - 1;
    "_OS_DATA_CORE1_VAR_ZERO_INIT_bss_LIMIT" = "_lc_gb_OS_DATA_CORE1_VAR_ZERO_INIT_bss_PAD";

    "_OS_DATA_CORE1_VAR_ALL_START" = "_OS_DATA_CORE1_VAR_FAST_INIT_START";
    "_OS_DATA_CORE1_VAR_ALL_END" = "_OS_DATA_CORE1_VAR_ZERO_INIT_bss_END";
    "_OS_DATA_CORE1_VAR_ALL_LIMIT" = "_OS_DATA_CORE1_VAR_ZERO_INIT_bss_LIMIT";
  }

  group OS_DATA_CORE2_VAR_ROM_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_DATA_CORE2_VAR_FAST_INIT_ROM (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE2_VAR_FAST_INIT_ROM_SEC" (fill, blocksize = 2, attributes = rx)
      {
        group (load_addr)
        {
          select "[.]zdata.OS_CORE2_VAR_FAST";
          select "[.]zdata.OS_CORE2_VAR_FAST_NOCACHE";
          select "[.]zdata.OS_SystemApplication_OsCore2_VAR_FAST";
          select "[.]zdata.OS_SystemApplication_OsCore2_VAR_FAST_NOCACHE";
        }
      }
    }
    "_OS_DATA_CORE2_VAR_FAST_INIT_ROM_START" = "_lc_gb_OS_DATA_CORE2_VAR_FAST_INIT_ROM";
    "_OS_DATA_CORE2_VAR_FAST_INIT_ROM_LIMIT" = "_lc_ge_OS_DATA_CORE2_VAR_FAST_INIT_ROM";

    group OS_DATA_CORE2_VAR_INIT_ROM (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE2_VAR_INIT_ROM_SEC" (fill, blocksize = 2, attributes = rx)
      {
        group (load_addr)
        {
          select "[.]data.OS_CORE2_VAR";
          select "[.]data.OS_CORE2_VAR_NOCACHE";
          select "[.]data.OS_SystemApplication_OsCore2_VAR";
          select "[.]data.OS_SystemApplication_OsCore2_VAR_NOCACHE";
        }
      }
    }
    "_OS_DATA_CORE2_VAR_INIT_ROM_START" = "_lc_gb_OS_DATA_CORE2_VAR_INIT_ROM";
    "_OS_DATA_CORE2_VAR_INIT_ROM_LIMIT" = "_lc_ge_OS_DATA_CORE2_VAR_INIT_ROM";

  }

  group OS_DATA_CORE2_VAR_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core2)
  {
    group OS_DATA_CORE2_VAR_FAST_INIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE2_VAR_FAST_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]zdata.OS_CORE2_VAR_FAST";
        select "[.]zdata.OS_CORE2_VAR_FAST_NOCACHE";
        select "[.]zdata.OS_SystemApplication_OsCore2_VAR_FAST";
        select "[.]zdata.OS_SystemApplication_OsCore2_VAR_FAST_NOCACHE";
      }
    }
    group OS_DATA_CORE2_VAR_FAST_INIT_PAD (align = 4)
    {
      reserved "OS_DATA_CORE2_VAR_FAST_INIT_PAD" (size = 16);
    }
    "_OS_DATA_CORE2_VAR_FAST_INIT_START" = "_lc_gb_OS_DATA_CORE2_VAR_FAST_INIT";
    "_OS_DATA_CORE2_VAR_FAST_INIT_END" = ("_lc_gb_OS_DATA_CORE2_VAR_FAST_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE2_VAR_FAST_INIT_PAD" - 1;
    "_OS_DATA_CORE2_VAR_FAST_INIT_LIMIT" = "_lc_gb_OS_DATA_CORE2_VAR_FAST_INIT_PAD";

    group OS_DATA_CORE2_VAR_FAST_NOINIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE2_VAR_FAST_NOINIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]zbss.OS_CORE2_VAR_FAST_NOCACHE_NOINIT";
        select "[.]zbss.OS_CORE2_VAR_FAST_NOINIT";
        select "[.]zbss.OS_SystemApplication_OsCore2_VAR_FAST_NOCACHE_NOINIT";
        select "[.]zbss.OS_SystemApplication_OsCore2_VAR_FAST_NOINIT";
      }
    }
    group OS_DATA_CORE2_VAR_FAST_NOINIT_PAD (align = 1)
    {
      reserved "OS_DATA_CORE2_VAR_FAST_NOINIT_PAD" (size = 16);
    }
    "_OS_DATA_CORE2_VAR_FAST_NOINIT_START" = "_lc_gb_OS_DATA_CORE2_VAR_FAST_NOINIT";
    "_OS_DATA_CORE2_VAR_FAST_NOINIT_END" = ("_lc_gb_OS_DATA_CORE2_VAR_FAST_NOINIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE2_VAR_FAST_NOINIT_PAD" - 1;
    "_OS_DATA_CORE2_VAR_FAST_NOINIT_LIMIT" = "_lc_gb_OS_DATA_CORE2_VAR_FAST_NOINIT_PAD";

    group OS_DATA_CORE2_VAR_FAST_ZERO_INIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE2_VAR_FAST_ZERO_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]*.OS_SystemApplication_OsCore2_VAR_FAST_NOCACHE_ZERO_INIT";
        select "[.]*.OS_SystemApplication_OsCore2_VAR_FAST_ZERO_INIT";
      }
    }
    group OS_DATA_CORE2_VAR_FAST_ZERO_INIT_PAD (align = 4)
    {
      reserved "OS_DATA_CORE2_VAR_FAST_ZERO_INIT_PAD" (size = 16);
    }
    "_OS_DATA_CORE2_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_DATA_CORE2_VAR_FAST_ZERO_INIT";
    "_OS_DATA_CORE2_VAR_FAST_ZERO_INIT_END" = ("_lc_gb_OS_DATA_CORE2_VAR_FAST_ZERO_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE2_VAR_FAST_ZERO_INIT_PAD" - 1;
    "_OS_DATA_CORE2_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_gb_OS_DATA_CORE2_VAR_FAST_ZERO_INIT_PAD";

    group OS_DATA_CORE2_VAR_FAST_ZERO_INIT_bss (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE2_VAR_FAST_ZERO_INIT_bss_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]*.OS_SystemApplication_OsCore2_VAR_FAST_NOCACHE_ZERO_INIT_bss";
        select "[.]*.OS_SystemApplication_OsCore2_VAR_FAST_ZERO_INIT_bss";
      }
    }
    group OS_DATA_CORE2_VAR_FAST_ZERO_INIT_bss_PAD (align = 4)
    {
      reserved "OS_DATA_CORE2_VAR_FAST_ZERO_INIT_bss_PAD" (size = 16);
    }
    "_OS_DATA_CORE2_VAR_FAST_ZERO_INIT_bss_START" = "_lc_gb_OS_DATA_CORE2_VAR_FAST_ZERO_INIT_bss";
    "_OS_DATA_CORE2_VAR_FAST_ZERO_INIT_bss_END" = ("_lc_gb_OS_DATA_CORE2_VAR_FAST_ZERO_INIT_bss_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE2_VAR_FAST_ZERO_INIT_bss_PAD" - 1;
    "_OS_DATA_CORE2_VAR_FAST_ZERO_INIT_bss_LIMIT" = "_lc_gb_OS_DATA_CORE2_VAR_FAST_ZERO_INIT_bss_PAD";

    group OS_DATA_CORE2_VAR_INIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE2_VAR_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]data.OS_CORE2_VAR";
        select "[.]data.OS_CORE2_VAR_NOCACHE";
        select "[.]data.OS_SystemApplication_OsCore2_VAR";
        select "[.]data.OS_SystemApplication_OsCore2_VAR_NOCACHE";
      }
    }
    group OS_DATA_CORE2_VAR_INIT_PAD (align = 4)
    {
      reserved "OS_DATA_CORE2_VAR_INIT_PAD" (size = 16);
    }
    "_OS_DATA_CORE2_VAR_INIT_START" = "_lc_gb_OS_DATA_CORE2_VAR_INIT";
    "_OS_DATA_CORE2_VAR_INIT_END" = ("_lc_gb_OS_DATA_CORE2_VAR_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE2_VAR_INIT_PAD" - 1;
    "_OS_DATA_CORE2_VAR_INIT_LIMIT" = "_lc_gb_OS_DATA_CORE2_VAR_INIT_PAD";

    group OS_DATA_CORE2_VAR_NOINIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE2_VAR_NOINIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]bss.OS_CORE2_VAR_NOCACHE_NOINIT";
        select "[.]bss.OS_CORE2_VAR_NOINIT";
        select "[.]bss.OS_SystemApplication_OsCore2_VAR_NOCACHE_NOINIT";
        select "[.]bss.OS_SystemApplication_OsCore2_VAR_NOINIT";
      }
    }
    group OS_DATA_CORE2_VAR_NOINIT_PAD (align = 1)
    {
      reserved "OS_DATA_CORE2_VAR_NOINIT_PAD" (size = 16);
    }
    "_OS_DATA_CORE2_VAR_NOINIT_START" = "_lc_gb_OS_DATA_CORE2_VAR_NOINIT";
    "_OS_DATA_CORE2_VAR_NOINIT_END" = ("_lc_gb_OS_DATA_CORE2_VAR_NOINIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE2_VAR_NOINIT_PAD" - 1;
    "_OS_DATA_CORE2_VAR_NOINIT_LIMIT" = "_lc_gb_OS_DATA_CORE2_VAR_NOINIT_PAD";

    group OS_DATA_CORE2_VAR_ZERO_INIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE2_VAR_ZERO_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]*.OS_SystemApplication_OsCore2_VAR_NOCACHE_ZERO_INIT";
        select "[.]*.OS_SystemApplication_OsCore2_VAR_ZERO_INIT";
      }
    }
    group OS_DATA_CORE2_VAR_ZERO_INIT_PAD (align = 4)
    {
      reserved "OS_DATA_CORE2_VAR_ZERO_INIT_PAD" (size = 16);
    }
    "_OS_DATA_CORE2_VAR_ZERO_INIT_START" = "_lc_gb_OS_DATA_CORE2_VAR_ZERO_INIT";
    "_OS_DATA_CORE2_VAR_ZERO_INIT_END" = ("_lc_gb_OS_DATA_CORE2_VAR_ZERO_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE2_VAR_ZERO_INIT_PAD" - 1;
    "_OS_DATA_CORE2_VAR_ZERO_INIT_LIMIT" = "_lc_gb_OS_DATA_CORE2_VAR_ZERO_INIT_PAD";

    group OS_DATA_CORE2_VAR_ZERO_INIT_bss (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_CORE2_VAR_ZERO_INIT_bss_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]*.OS_SystemApplication_OsCore2_VAR_NOCACHE_ZERO_INIT_bss";
        select "[.]*.OS_SystemApplication_OsCore2_VAR_ZERO_INIT_bss";
      }
    }
    group OS_DATA_CORE2_VAR_ZERO_INIT_bss_PAD (align = 4)
    {
      reserved "OS_DATA_CORE2_VAR_ZERO_INIT_bss_PAD" (size = 16);
    }
    "_OS_DATA_CORE2_VAR_ZERO_INIT_bss_START" = "_lc_gb_OS_DATA_CORE2_VAR_ZERO_INIT_bss";
    "_OS_DATA_CORE2_VAR_ZERO_INIT_bss_END" = ("_lc_gb_OS_DATA_CORE2_VAR_ZERO_INIT_bss_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_CORE2_VAR_ZERO_INIT_bss_PAD" - 1;
    "_OS_DATA_CORE2_VAR_ZERO_INIT_bss_LIMIT" = "_lc_gb_OS_DATA_CORE2_VAR_ZERO_INIT_bss_PAD";

    "_OS_DATA_CORE2_VAR_ALL_START" = "_OS_DATA_CORE2_VAR_FAST_INIT_START";
    "_OS_DATA_CORE2_VAR_ALL_END" = "_OS_DATA_CORE2_VAR_ZERO_INIT_bss_END";
    "_OS_DATA_CORE2_VAR_ALL_LIMIT" = "_OS_DATA_CORE2_VAR_ZERO_INIT_bss_LIMIT";
  }

  group OS_DATA_SHARED_VAR_ROM_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_DATA_SHARED_VAR_FAST_INIT_ROM (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_SHARED_VAR_FAST_INIT_ROM_SEC" (fill, blocksize = 2, attributes = rx)
      {
        group (load_addr)
        {
          select "[.]zdata.OS_VAR_FAST_NOCACHE";
        }
      }
    }
    "_OS_DATA_SHARED_VAR_FAST_INIT_ROM_START" = "_lc_gb_OS_DATA_SHARED_VAR_FAST_INIT_ROM";
    "_OS_DATA_SHARED_VAR_FAST_INIT_ROM_LIMIT" = "_lc_ge_OS_DATA_SHARED_VAR_FAST_INIT_ROM";

    group OS_DATA_SHARED_VAR_INIT_ROM (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_SHARED_VAR_INIT_ROM_SEC" (fill, blocksize = 2, attributes = rx)
      {
        group (load_addr)
        {
          select "[.]data.OS_VAR_NOCACHE";
        }
      }
    }
    "_OS_DATA_SHARED_VAR_INIT_ROM_START" = "_lc_gb_OS_DATA_SHARED_VAR_INIT_ROM";
    "_OS_DATA_SHARED_VAR_INIT_ROM_LIMIT" = "_lc_ge_OS_DATA_SHARED_VAR_INIT_ROM";

  }

  group OS_DATA_SHARED_VAR_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core0)
  {
    group OS_DATA_SHARED_VAR_FAST_INIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_SHARED_VAR_FAST_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]zdata.OS_VAR_FAST_NOCACHE";
      }
    }
    group OS_DATA_SHARED_VAR_FAST_INIT_PAD (align = 4)
    {
      reserved "OS_DATA_SHARED_VAR_FAST_INIT_PAD" (size = 16);
    }
    "_OS_DATA_SHARED_VAR_FAST_INIT_START" = "_lc_gb_OS_DATA_SHARED_VAR_FAST_INIT";
    "_OS_DATA_SHARED_VAR_FAST_INIT_END" = ("_lc_gb_OS_DATA_SHARED_VAR_FAST_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_SHARED_VAR_FAST_INIT_PAD" - 1;
    "_OS_DATA_SHARED_VAR_FAST_INIT_LIMIT" = "_lc_gb_OS_DATA_SHARED_VAR_FAST_INIT_PAD";

    group OS_DATA_SHARED_VAR_FAST_NOINIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_SHARED_VAR_FAST_NOINIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]zbss.OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT";
        select "[.]zbss.OS_BARRIER_CORE1_VAR_FAST_NOCACHE_NOINIT";
        select "[.]zbss.OS_BARRIER_CORE2_VAR_FAST_NOCACHE_NOINIT";
        select "[.]zbss.OS_CORESHARED_0X00000003_VAR_FAST_NOCACHE_NOINIT";
        select "[.]zbss.OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT";
        select "[.]zbss.OS_CORESTATUS_CORE1_VAR_FAST_NOCACHE_NOINIT";
        select "[.]zbss.OS_CORESTATUS_CORE2_VAR_FAST_NOCACHE_NOINIT";
        select "[.]zbss.OS_PUBLIC_CORE0_VAR_FAST_NOINIT";
        select "[.]zbss.OS_PUBLIC_CORE1_VAR_FAST_NOINIT";
        select "[.]zbss.OS_PUBLIC_CORE2_VAR_FAST_NOINIT";
        select "[.]zbss.OS_VAR_FAST_NOCACHE_NOINIT";
      }
    }
    group OS_DATA_SHARED_VAR_FAST_NOINIT_PAD (align = 1)
    {
      reserved "OS_DATA_SHARED_VAR_FAST_NOINIT_PAD" (size = 16);
    }
    "_OS_DATA_SHARED_VAR_FAST_NOINIT_START" = "_lc_gb_OS_DATA_SHARED_VAR_FAST_NOINIT";
    "_OS_DATA_SHARED_VAR_FAST_NOINIT_END" = ("_lc_gb_OS_DATA_SHARED_VAR_FAST_NOINIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_SHARED_VAR_FAST_NOINIT_PAD" - 1;
    "_OS_DATA_SHARED_VAR_FAST_NOINIT_LIMIT" = "_lc_gb_OS_DATA_SHARED_VAR_FAST_NOINIT_PAD";

    group OS_DATA_SHARED_VAR_INIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_SHARED_VAR_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]data.OS_VAR_NOCACHE";
      }
    }
    group OS_DATA_SHARED_VAR_INIT_PAD (align = 4)
    {
      reserved "OS_DATA_SHARED_VAR_INIT_PAD" (size = 16);
    }
    "_OS_DATA_SHARED_VAR_INIT_START" = "_lc_gb_OS_DATA_SHARED_VAR_INIT";
    "_OS_DATA_SHARED_VAR_INIT_END" = ("_lc_gb_OS_DATA_SHARED_VAR_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_SHARED_VAR_INIT_PAD" - 1;
    "_OS_DATA_SHARED_VAR_INIT_LIMIT" = "_lc_gb_OS_DATA_SHARED_VAR_INIT_PAD";

    group OS_DATA_SHARED_VAR_NOINIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_DATA_SHARED_VAR_NOINIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]bss.OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT";
        select "[.]bss.OS_BARRIER_CORE1_VAR_NOCACHE_NOINIT";
        select "[.]bss.OS_BARRIER_CORE2_VAR_NOCACHE_NOINIT";
        select "[.]bss.OS_CORESHARED_0X00000003_VAR_NOCACHE_NOINIT";
        select "[.]bss.OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT";
        select "[.]bss.OS_CORESTATUS_CORE1_VAR_NOCACHE_NOINIT";
        select "[.]bss.OS_CORESTATUS_CORE2_VAR_NOCACHE_NOINIT";
        select "[.]bss.OS_PUBLIC_CORE0_VAR_NOINIT";
        select "[.]bss.OS_PUBLIC_CORE1_VAR_NOINIT";
        select "[.]bss.OS_PUBLIC_CORE2_VAR_NOINIT";
        select "[.]bss.OS_VAR_NOCACHE_NOINIT";
      }
    }
    group OS_DATA_SHARED_VAR_NOINIT_PAD (align = 1)
    {
      reserved "OS_DATA_SHARED_VAR_NOINIT_PAD" (size = 16);
    }
    "_OS_DATA_SHARED_VAR_NOINIT_START" = "_lc_gb_OS_DATA_SHARED_VAR_NOINIT";
    "_OS_DATA_SHARED_VAR_NOINIT_END" = ("_lc_gb_OS_DATA_SHARED_VAR_NOINIT_PAD" == 0) ? 0 : "_lc_gb_OS_DATA_SHARED_VAR_NOINIT_PAD" - 1;
    "_OS_DATA_SHARED_VAR_NOINIT_LIMIT" = "_lc_gb_OS_DATA_SHARED_VAR_NOINIT_PAD";

    "_OS_DATA_SHARED_VAR_ALL_START" = "_OS_DATA_SHARED_VAR_FAST_INIT_START";
    "_OS_DATA_SHARED_VAR_ALL_END" = "_OS_DATA_SHARED_VAR_NOINIT_END";
    "_OS_DATA_SHARED_VAR_ALL_LIMIT" = "_OS_DATA_SHARED_VAR_NOINIT_LIMIT";
  }

  group OS_EXCVEC_CORE0_CODE_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_EXCVEC_CORE0_CODE (ordered, contiguous, fill, align = 256)
    {
      section "OS_EXCVEC_CORE0_CODE_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]text.OS_EXCVEC_CORE0_CODE";
      }
    }
    group OS_EXCVEC_CORE0_CODE_PAD (align = 8)
    {
      reserved "OS_EXCVEC_CORE0_CODE_PAD" (size = 16);
    }
    "_OS_EXCVEC_CORE0_CODE_START" = "_lc_gb_OS_EXCVEC_CORE0_CODE";
    "_OS_EXCVEC_CORE0_CODE_END" = ("_lc_gb_OS_EXCVEC_CORE0_CODE_PAD" == 0) ? 0 : "_lc_gb_OS_EXCVEC_CORE0_CODE_PAD" - 1;
    "_OS_EXCVEC_CORE0_CODE_LIMIT" = "_lc_gb_OS_EXCVEC_CORE0_CODE_PAD";

    "_OS_EXCVEC_CORE0_CODE_ALL_START" = "_OS_EXCVEC_CORE0_CODE_START";
    "_OS_EXCVEC_CORE0_CODE_ALL_END" = "_OS_EXCVEC_CORE0_CODE_END";
    "_OS_EXCVEC_CORE0_CODE_ALL_LIMIT" = "_OS_EXCVEC_CORE0_CODE_LIMIT";
  }

  group OS_EXCVEC_CORE0_CONST_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_EXCVEC_CORE0_CONST (ordered, contiguous, fill, align = 256)
    {
      section "OS_EXCVEC_CORE0_CONST_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]rodata.OS_EXCVEC_CORE0_CONST";
      }
    }
    group OS_EXCVEC_CORE0_CONST_PAD (align = 8)
    {
      reserved "OS_EXCVEC_CORE0_CONST_PAD" (size = 16);
    }
    "_OS_EXCVEC_CORE0_CONST_START" = "_lc_gb_OS_EXCVEC_CORE0_CONST";
    "_OS_EXCVEC_CORE0_CONST_END" = ("_lc_gb_OS_EXCVEC_CORE0_CONST_PAD" == 0) ? 0 : "_lc_gb_OS_EXCVEC_CORE0_CONST_PAD" - 1;
    "_OS_EXCVEC_CORE0_CONST_LIMIT" = "_lc_gb_OS_EXCVEC_CORE0_CONST_PAD";

    "_OS_EXCVEC_CORE0_CONST_ALL_START" = "_OS_EXCVEC_CORE0_CONST_START";
    "_OS_EXCVEC_CORE0_CONST_ALL_END" = "_OS_EXCVEC_CORE0_CONST_END";
    "_OS_EXCVEC_CORE0_CONST_ALL_LIMIT" = "_OS_EXCVEC_CORE0_CONST_LIMIT";
  }

  group OS_EXCVEC_CORE1_CODE_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_EXCVEC_CORE1_CODE (ordered, contiguous, fill, align = 256)
    {
      section "OS_EXCVEC_CORE1_CODE_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]text.OS_EXCVEC_CORE1_CODE";
      }
    }
    group OS_EXCVEC_CORE1_CODE_PAD (align = 8)
    {
      reserved "OS_EXCVEC_CORE1_CODE_PAD" (size = 16);
    }
    "_OS_EXCVEC_CORE1_CODE_START" = "_lc_gb_OS_EXCVEC_CORE1_CODE";
    "_OS_EXCVEC_CORE1_CODE_END" = ("_lc_gb_OS_EXCVEC_CORE1_CODE_PAD" == 0) ? 0 : "_lc_gb_OS_EXCVEC_CORE1_CODE_PAD" - 1;
    "_OS_EXCVEC_CORE1_CODE_LIMIT" = "_lc_gb_OS_EXCVEC_CORE1_CODE_PAD";

    "_OS_EXCVEC_CORE1_CODE_ALL_START" = "_OS_EXCVEC_CORE1_CODE_START";
    "_OS_EXCVEC_CORE1_CODE_ALL_END" = "_OS_EXCVEC_CORE1_CODE_END";
    "_OS_EXCVEC_CORE1_CODE_ALL_LIMIT" = "_OS_EXCVEC_CORE1_CODE_LIMIT";
  }

  group OS_EXCVEC_CORE1_CONST_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_EXCVEC_CORE1_CONST (ordered, contiguous, fill, align = 256)
    {
      section "OS_EXCVEC_CORE1_CONST_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]rodata.OS_EXCVEC_CORE1_CONST";
      }
    }
    group OS_EXCVEC_CORE1_CONST_PAD (align = 8)
    {
      reserved "OS_EXCVEC_CORE1_CONST_PAD" (size = 16);
    }
    "_OS_EXCVEC_CORE1_CONST_START" = "_lc_gb_OS_EXCVEC_CORE1_CONST";
    "_OS_EXCVEC_CORE1_CONST_END" = ("_lc_gb_OS_EXCVEC_CORE1_CONST_PAD" == 0) ? 0 : "_lc_gb_OS_EXCVEC_CORE1_CONST_PAD" - 1;
    "_OS_EXCVEC_CORE1_CONST_LIMIT" = "_lc_gb_OS_EXCVEC_CORE1_CONST_PAD";

    "_OS_EXCVEC_CORE1_CONST_ALL_START" = "_OS_EXCVEC_CORE1_CONST_START";
    "_OS_EXCVEC_CORE1_CONST_ALL_END" = "_OS_EXCVEC_CORE1_CONST_END";
    "_OS_EXCVEC_CORE1_CONST_ALL_LIMIT" = "_OS_EXCVEC_CORE1_CONST_LIMIT";
  }

  group OS_EXCVEC_CORE2_CODE_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_EXCVEC_CORE2_CODE (ordered, contiguous, fill, align = 256)
    {
      section "OS_EXCVEC_CORE2_CODE_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]text.OS_EXCVEC_CORE2_CODE";
      }
    }
    group OS_EXCVEC_CORE2_CODE_PAD (align = 8)
    {
      reserved "OS_EXCVEC_CORE2_CODE_PAD" (size = 16);
    }
    "_OS_EXCVEC_CORE2_CODE_START" = "_lc_gb_OS_EXCVEC_CORE2_CODE";
    "_OS_EXCVEC_CORE2_CODE_END" = ("_lc_gb_OS_EXCVEC_CORE2_CODE_PAD" == 0) ? 0 : "_lc_gb_OS_EXCVEC_CORE2_CODE_PAD" - 1;
    "_OS_EXCVEC_CORE2_CODE_LIMIT" = "_lc_gb_OS_EXCVEC_CORE2_CODE_PAD";

    "_OS_EXCVEC_CORE2_CODE_ALL_START" = "_OS_EXCVEC_CORE2_CODE_START";
    "_OS_EXCVEC_CORE2_CODE_ALL_END" = "_OS_EXCVEC_CORE2_CODE_END";
    "_OS_EXCVEC_CORE2_CODE_ALL_LIMIT" = "_OS_EXCVEC_CORE2_CODE_LIMIT";
  }

  group OS_EXCVEC_CORE2_CONST_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_EXCVEC_CORE2_CONST (ordered, contiguous, fill, align = 256)
    {
      section "OS_EXCVEC_CORE2_CONST_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]rodata.OS_EXCVEC_CORE2_CONST";
      }
    }
    group OS_EXCVEC_CORE2_CONST_PAD (align = 8)
    {
      reserved "OS_EXCVEC_CORE2_CONST_PAD" (size = 16);
    }
    "_OS_EXCVEC_CORE2_CONST_START" = "_lc_gb_OS_EXCVEC_CORE2_CONST";
    "_OS_EXCVEC_CORE2_CONST_END" = ("_lc_gb_OS_EXCVEC_CORE2_CONST_PAD" == 0) ? 0 : "_lc_gb_OS_EXCVEC_CORE2_CONST_PAD" - 1;
    "_OS_EXCVEC_CORE2_CONST_LIMIT" = "_lc_gb_OS_EXCVEC_CORE2_CONST_PAD";

    "_OS_EXCVEC_CORE2_CONST_ALL_START" = "_OS_EXCVEC_CORE2_CONST_START";
    "_OS_EXCVEC_CORE2_CONST_ALL_END" = "_OS_EXCVEC_CORE2_CONST_END";
    "_OS_EXCVEC_CORE2_CONST_ALL_LIMIT" = "_OS_EXCVEC_CORE2_CONST_LIMIT";
  }

  group OS_GLOBALSHARED_CONST_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_GLOBALSHARED_CONST (ordered, contiguous, fill)
    {
      section "OS_GLOBALSHARED_CONST_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]rodata.OS_GLOBALSHARED_CONST";
        select "[.]zrodata.OS_GLOBALSHARED_CONST_FAST";
      }
    }
    group OS_GLOBALSHARED_CONST_PAD (align = 1)
    {
      reserved "OS_GLOBALSHARED_CONST_PAD" (size = 16);
    }
    "_OS_GLOBALSHARED_CONST_START" = "_lc_gb_OS_GLOBALSHARED_CONST";
    "_OS_GLOBALSHARED_CONST_END" = ("_lc_gb_OS_GLOBALSHARED_CONST_PAD" == 0) ? 0 : "_lc_gb_OS_GLOBALSHARED_CONST_PAD" - 1;
    "_OS_GLOBALSHARED_CONST_LIMIT" = "_lc_gb_OS_GLOBALSHARED_CONST_PAD";

    "_OS_GLOBALSHARED_CONST_ALL_START" = "_OS_GLOBALSHARED_CONST_START";
    "_OS_GLOBALSHARED_CONST_ALL_END" = "_OS_GLOBALSHARED_CONST_END";
    "_OS_GLOBALSHARED_CONST_ALL_LIMIT" = "_OS_GLOBALSHARED_CONST_LIMIT";
  }

  group OS_GLOBALSHARED_VAR_ROM_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_GLOBALSHARED_VAR_FAST_INIT_ROM (ordered, contiguous, fill, align = 16)
    {
      section "OS_GLOBALSHARED_VAR_FAST_INIT_ROM_SEC" (fill, blocksize = 2, attributes = rx)
      {
        group (load_addr)
        {
          select "[.]zdata.OS_GLOBALSHARED_VAR_FAST";
          select "[.]zdata.OS_GLOBALSHARED_VAR_FAST_NOCACHE";
        }
      }
    }
    "_OS_GLOBALSHARED_VAR_FAST_INIT_ROM_START" = "_lc_gb_OS_GLOBALSHARED_VAR_FAST_INIT_ROM";
    "_OS_GLOBALSHARED_VAR_FAST_INIT_ROM_LIMIT" = "_lc_ge_OS_GLOBALSHARED_VAR_FAST_INIT_ROM";

    group OS_GLOBALSHARED_VAR_INIT_ROM (ordered, contiguous, fill, align = 16)
    {
      section "OS_GLOBALSHARED_VAR_INIT_ROM_SEC" (fill, blocksize = 2, attributes = rx)
      {
        group (load_addr)
        {
          select "[.]data.OS_GLOBALSHARED_VAR";
          select "[.]data.OS_GLOBALSHARED_VAR_NOCACHE";
        }
      }
    }
    "_OS_GLOBALSHARED_VAR_INIT_ROM_START" = "_lc_gb_OS_GLOBALSHARED_VAR_INIT_ROM";
    "_OS_GLOBALSHARED_VAR_INIT_ROM_LIMIT" = "_lc_ge_OS_GLOBALSHARED_VAR_INIT_ROM";

  }

  group OS_GLOBALSHARED_VAR_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core0)
  {
    group OS_GLOBALSHARED_VAR_FAST_INIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_GLOBALSHARED_VAR_FAST_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]zdata.OS_GLOBALSHARED_VAR_FAST";
        select "[.]zdata.OS_GLOBALSHARED_VAR_FAST_NOCACHE";
      }
    }
    group OS_GLOBALSHARED_VAR_FAST_INIT_PAD (align = 4)
    {
      reserved "OS_GLOBALSHARED_VAR_FAST_INIT_PAD" (size = 16);
    }
    "_OS_GLOBALSHARED_VAR_FAST_INIT_START" = "_lc_gb_OS_GLOBALSHARED_VAR_FAST_INIT";
    "_OS_GLOBALSHARED_VAR_FAST_INIT_END" = ("_lc_gb_OS_GLOBALSHARED_VAR_FAST_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_GLOBALSHARED_VAR_FAST_INIT_PAD" - 1;
    "_OS_GLOBALSHARED_VAR_FAST_INIT_LIMIT" = "_lc_gb_OS_GLOBALSHARED_VAR_FAST_INIT_PAD";

    group OS_GLOBALSHARED_VAR_FAST_NOINIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_GLOBALSHARED_VAR_FAST_NOINIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]zbss.OS_GLOBALSHARED_VAR_FAST_NOCACHE_NOINIT";
        select "[.]zbss.OS_GLOBALSHARED_VAR_FAST_NOINIT";
      }
    }
    group OS_GLOBALSHARED_VAR_FAST_NOINIT_PAD (align = 1)
    {
      reserved "OS_GLOBALSHARED_VAR_FAST_NOINIT_PAD" (size = 16);
    }
    "_OS_GLOBALSHARED_VAR_FAST_NOINIT_START" = "_lc_gb_OS_GLOBALSHARED_VAR_FAST_NOINIT";
    "_OS_GLOBALSHARED_VAR_FAST_NOINIT_END" = ("_lc_gb_OS_GLOBALSHARED_VAR_FAST_NOINIT_PAD" == 0) ? 0 : "_lc_gb_OS_GLOBALSHARED_VAR_FAST_NOINIT_PAD" - 1;
    "_OS_GLOBALSHARED_VAR_FAST_NOINIT_LIMIT" = "_lc_gb_OS_GLOBALSHARED_VAR_FAST_NOINIT_PAD";

    group OS_GLOBALSHARED_VAR_FAST_ZERO_INIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]*.OS_GLOBALSHARED_VAR_FAST_NOCACHE_ZERO_INIT";
        select "[.]*.OS_GLOBALSHARED_VAR_FAST_ZERO_INIT";
      }
    }
    group OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_PAD (align = 4)
    {
      reserved "OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_PAD" (size = 16);
    }
    "_OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_GLOBALSHARED_VAR_FAST_ZERO_INIT";
    "_OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_END" = ("_lc_gb_OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_PAD" - 1;
    "_OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_gb_OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_PAD";

    group OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_bss (ordered, contiguous, fill, align = 16)
    {
      section "OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_bss_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]*.OS_GLOBALSHARED_VAR_FAST_NOCACHE_ZERO_INIT_bss";
        select "[.]*.OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_bss";
      }
    }
    group OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_bss_PAD (align = 4)
    {
      reserved "OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_bss_PAD" (size = 16);
    }
    "_OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_bss_START" = "_lc_gb_OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_bss";
    "_OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_bss_END" = ("_lc_gb_OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_bss_PAD" == 0) ? 0 : "_lc_gb_OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_bss_PAD" - 1;
    "_OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_bss_LIMIT" = "_lc_gb_OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_bss_PAD";

    group OS_GLOBALSHARED_VAR_INIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_GLOBALSHARED_VAR_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]data.OS_GLOBALSHARED_VAR";
        select "[.]data.OS_GLOBALSHARED_VAR_NOCACHE";
      }
    }
    group OS_GLOBALSHARED_VAR_INIT_PAD (align = 4)
    {
      reserved "OS_GLOBALSHARED_VAR_INIT_PAD" (size = 16);
    }
    "_OS_GLOBALSHARED_VAR_INIT_START" = "_lc_gb_OS_GLOBALSHARED_VAR_INIT";
    "_OS_GLOBALSHARED_VAR_INIT_END" = ("_lc_gb_OS_GLOBALSHARED_VAR_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_GLOBALSHARED_VAR_INIT_PAD" - 1;
    "_OS_GLOBALSHARED_VAR_INIT_LIMIT" = "_lc_gb_OS_GLOBALSHARED_VAR_INIT_PAD";

    group OS_GLOBALSHARED_VAR_NOINIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_GLOBALSHARED_VAR_NOINIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]bss.OS_GLOBALSHARED_VAR_NOCACHE_NOINIT";
        select "[.]bss.OS_GLOBALSHARED_VAR_NOINIT";
      }
    }
    group OS_GLOBALSHARED_VAR_NOINIT_PAD (align = 1)
    {
      reserved "OS_GLOBALSHARED_VAR_NOINIT_PAD" (size = 16);
    }
    "_OS_GLOBALSHARED_VAR_NOINIT_START" = "_lc_gb_OS_GLOBALSHARED_VAR_NOINIT";
    "_OS_GLOBALSHARED_VAR_NOINIT_END" = ("_lc_gb_OS_GLOBALSHARED_VAR_NOINIT_PAD" == 0) ? 0 : "_lc_gb_OS_GLOBALSHARED_VAR_NOINIT_PAD" - 1;
    "_OS_GLOBALSHARED_VAR_NOINIT_LIMIT" = "_lc_gb_OS_GLOBALSHARED_VAR_NOINIT_PAD";

    group OS_GLOBALSHARED_VAR_ZERO_INIT (ordered, contiguous, fill, align = 16)
    {
      section "OS_GLOBALSHARED_VAR_ZERO_INIT_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]*.OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT";
        select "[.]*.OS_GLOBALSHARED_VAR_ZERO_INIT";
      }
    }
    group OS_GLOBALSHARED_VAR_ZERO_INIT_PAD (align = 4)
    {
      reserved "OS_GLOBALSHARED_VAR_ZERO_INIT_PAD" (size = 16);
    }
    "_OS_GLOBALSHARED_VAR_ZERO_INIT_START" = "_lc_gb_OS_GLOBALSHARED_VAR_ZERO_INIT";
    "_OS_GLOBALSHARED_VAR_ZERO_INIT_END" = ("_lc_gb_OS_GLOBALSHARED_VAR_ZERO_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_GLOBALSHARED_VAR_ZERO_INIT_PAD" - 1;
    "_OS_GLOBALSHARED_VAR_ZERO_INIT_LIMIT" = "_lc_gb_OS_GLOBALSHARED_VAR_ZERO_INIT_PAD";

    group OS_GLOBALSHARED_VAR_ZERO_INIT_bss (ordered, contiguous, fill, align = 16)
    {
      section "OS_GLOBALSHARED_VAR_ZERO_INIT_bss_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]*.OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_bss";
        select "[.]*.OS_GLOBALSHARED_VAR_ZERO_INIT_bss";
      }
    }
    group OS_GLOBALSHARED_VAR_ZERO_INIT_bss_PAD (align = 4)
    {
      reserved "OS_GLOBALSHARED_VAR_ZERO_INIT_bss_PAD" (size = 16);
    }
    "_OS_GLOBALSHARED_VAR_ZERO_INIT_bss_START" = "_lc_gb_OS_GLOBALSHARED_VAR_ZERO_INIT_bss";
    "_OS_GLOBALSHARED_VAR_ZERO_INIT_bss_END" = ("_lc_gb_OS_GLOBALSHARED_VAR_ZERO_INIT_bss_PAD" == 0) ? 0 : "_lc_gb_OS_GLOBALSHARED_VAR_ZERO_INIT_bss_PAD" - 1;
    "_OS_GLOBALSHARED_VAR_ZERO_INIT_bss_LIMIT" = "_lc_gb_OS_GLOBALSHARED_VAR_ZERO_INIT_bss_PAD";

    "_OS_GLOBALSHARED_VAR_ALL_START" = "_OS_GLOBALSHARED_VAR_FAST_INIT_START";
    "_OS_GLOBALSHARED_VAR_ALL_END" = "_OS_GLOBALSHARED_VAR_ZERO_INIT_bss_END";
    "_OS_GLOBALSHARED_VAR_ALL_LIMIT" = "_OS_GLOBALSHARED_VAR_ZERO_INIT_bss_LIMIT";
  }

  group OS_INTVEC_CODE_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_INTVEC_CODE (ordered, contiguous, fill, align = 8192)
    {
      section "OS_INTVEC_CODE_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]text.OS_INTVEC_CODE";
      }
    }
    group OS_INTVEC_CODE_PAD (align = 8)
    {
      reserved "OS_INTVEC_CODE_PAD" (size = 16);
    }
    "_OS_INTVEC_CODE_START" = "_lc_gb_OS_INTVEC_CODE";
    "_OS_INTVEC_CODE_END" = ("_lc_gb_OS_INTVEC_CODE_PAD" == 0) ? 0 : "_lc_gb_OS_INTVEC_CODE_PAD" - 1;
    "_OS_INTVEC_CODE_LIMIT" = "_lc_gb_OS_INTVEC_CODE_PAD";

    "_OS_INTVEC_CODE_ALL_START" = "_OS_INTVEC_CODE_START";
    "_OS_INTVEC_CODE_ALL_END" = "_OS_INTVEC_CODE_END";
    "_OS_INTVEC_CODE_ALL_LIMIT" = "_OS_INTVEC_CODE_LIMIT";
  }

  group OS_INTVEC_CONST_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_INTVEC_CONST (ordered, contiguous, fill, align = 8192)
    {
      section "OS_INTVEC_CONST_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]rodata.OS_INTVEC_CONST";
      }
    }
    group OS_INTVEC_CONST_PAD (align = 8)
    {
      reserved "OS_INTVEC_CONST_PAD" (size = 16);
    }
    "_OS_INTVEC_CONST_START" = "_lc_gb_OS_INTVEC_CONST";
    "_OS_INTVEC_CONST_END" = ("_lc_gb_OS_INTVEC_CONST_PAD" == 0) ? 0 : "_lc_gb_OS_INTVEC_CONST_PAD" - 1;
    "_OS_INTVEC_CONST_LIMIT" = "_lc_gb_OS_INTVEC_CONST_PAD";

    "_OS_INTVEC_CONST_ALL_START" = "_OS_INTVEC_CONST_START";
    "_OS_INTVEC_CONST_ALL_END" = "_OS_INTVEC_CONST_END";
    "_OS_INTVEC_CONST_ALL_LIMIT" = "_OS_INTVEC_CONST_LIMIT";
  }

  group OS_INTVEC_CORE0_CODE_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_INTVEC_CORE0_CODE (ordered, contiguous, fill, align = 8192)
    {
      section "OS_INTVEC_CORE0_CODE_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]text.OS_INTVEC_CORE0_CODE";
      }
    }
    group OS_INTVEC_CORE0_CODE_PAD (align = 8)
    {
      reserved "OS_INTVEC_CORE0_CODE_PAD" (size = 16);
    }
    "_OS_INTVEC_CORE0_CODE_START" = "_lc_gb_OS_INTVEC_CORE0_CODE";
    "_OS_INTVEC_CORE0_CODE_END" = ("_lc_gb_OS_INTVEC_CORE0_CODE_PAD" == 0) ? 0 : "_lc_gb_OS_INTVEC_CORE0_CODE_PAD" - 1;
    "_OS_INTVEC_CORE0_CODE_LIMIT" = "_lc_gb_OS_INTVEC_CORE0_CODE_PAD";

    "_OS_INTVEC_CORE0_CODE_ALL_START" = "_OS_INTVEC_CORE0_CODE_START";
    "_OS_INTVEC_CORE0_CODE_ALL_END" = "_OS_INTVEC_CORE0_CODE_END";
    "_OS_INTVEC_CORE0_CODE_ALL_LIMIT" = "_OS_INTVEC_CORE0_CODE_LIMIT";
  }

  group OS_INTVEC_CORE0_CONST_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_INTVEC_CORE0_CONST (ordered, contiguous, fill, align = 8192)
    {
      section "OS_INTVEC_CORE0_CONST_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]rodata.OS_INTVEC_CORE0_CONST";
      }
    }
    group OS_INTVEC_CORE0_CONST_PAD (align = 8)
    {
      reserved "OS_INTVEC_CORE0_CONST_PAD" (size = 16);
    }
    "_OS_INTVEC_CORE0_CONST_START" = "_lc_gb_OS_INTVEC_CORE0_CONST";
    "_OS_INTVEC_CORE0_CONST_END" = ("_lc_gb_OS_INTVEC_CORE0_CONST_PAD" == 0) ? 0 : "_lc_gb_OS_INTVEC_CORE0_CONST_PAD" - 1;
    "_OS_INTVEC_CORE0_CONST_LIMIT" = "_lc_gb_OS_INTVEC_CORE0_CONST_PAD";

    "_OS_INTVEC_CORE0_CONST_ALL_START" = "_OS_INTVEC_CORE0_CONST_START";
    "_OS_INTVEC_CORE0_CONST_ALL_END" = "_OS_INTVEC_CORE0_CONST_END";
    "_OS_INTVEC_CORE0_CONST_ALL_LIMIT" = "_OS_INTVEC_CORE0_CONST_LIMIT";
  }

  group OS_INTVEC_CORE1_CODE_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_INTVEC_CORE1_CODE (ordered, contiguous, fill, align = 8192)
    {
      section "OS_INTVEC_CORE1_CODE_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]text.OS_INTVEC_CORE1_CODE";
      }
    }
    group OS_INTVEC_CORE1_CODE_PAD (align = 8)
    {
      reserved "OS_INTVEC_CORE1_CODE_PAD" (size = 16);
    }
    "_OS_INTVEC_CORE1_CODE_START" = "_lc_gb_OS_INTVEC_CORE1_CODE";
    "_OS_INTVEC_CORE1_CODE_END" = ("_lc_gb_OS_INTVEC_CORE1_CODE_PAD" == 0) ? 0 : "_lc_gb_OS_INTVEC_CORE1_CODE_PAD" - 1;
    "_OS_INTVEC_CORE1_CODE_LIMIT" = "_lc_gb_OS_INTVEC_CORE1_CODE_PAD";

    "_OS_INTVEC_CORE1_CODE_ALL_START" = "_OS_INTVEC_CORE1_CODE_START";
    "_OS_INTVEC_CORE1_CODE_ALL_END" = "_OS_INTVEC_CORE1_CODE_END";
    "_OS_INTVEC_CORE1_CODE_ALL_LIMIT" = "_OS_INTVEC_CORE1_CODE_LIMIT";
  }

  group OS_INTVEC_CORE1_CONST_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_INTVEC_CORE1_CONST (ordered, contiguous, fill, align = 8192)
    {
      section "OS_INTVEC_CORE1_CONST_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]rodata.OS_INTVEC_CORE1_CONST";
      }
    }
    group OS_INTVEC_CORE1_CONST_PAD (align = 8)
    {
      reserved "OS_INTVEC_CORE1_CONST_PAD" (size = 16);
    }
    "_OS_INTVEC_CORE1_CONST_START" = "_lc_gb_OS_INTVEC_CORE1_CONST";
    "_OS_INTVEC_CORE1_CONST_END" = ("_lc_gb_OS_INTVEC_CORE1_CONST_PAD" == 0) ? 0 : "_lc_gb_OS_INTVEC_CORE1_CONST_PAD" - 1;
    "_OS_INTVEC_CORE1_CONST_LIMIT" = "_lc_gb_OS_INTVEC_CORE1_CONST_PAD";

    "_OS_INTVEC_CORE1_CONST_ALL_START" = "_OS_INTVEC_CORE1_CONST_START";
    "_OS_INTVEC_CORE1_CONST_ALL_END" = "_OS_INTVEC_CORE1_CONST_END";
    "_OS_INTVEC_CORE1_CONST_ALL_LIMIT" = "_OS_INTVEC_CORE1_CONST_LIMIT";
  }

  group OS_INTVEC_CORE2_CODE_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_INTVEC_CORE2_CODE (ordered, contiguous, fill, align = 8192)
    {
      section "OS_INTVEC_CORE2_CODE_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]text.OS_INTVEC_CORE2_CODE";
      }
    }
    group OS_INTVEC_CORE2_CODE_PAD (align = 8)
    {
      reserved "OS_INTVEC_CORE2_CODE_PAD" (size = 16);
    }
    "_OS_INTVEC_CORE2_CODE_START" = "_lc_gb_OS_INTVEC_CORE2_CODE";
    "_OS_INTVEC_CORE2_CODE_END" = ("_lc_gb_OS_INTVEC_CORE2_CODE_PAD" == 0) ? 0 : "_lc_gb_OS_INTVEC_CORE2_CODE_PAD" - 1;
    "_OS_INTVEC_CORE2_CODE_LIMIT" = "_lc_gb_OS_INTVEC_CORE2_CODE_PAD";

    "_OS_INTVEC_CORE2_CODE_ALL_START" = "_OS_INTVEC_CORE2_CODE_START";
    "_OS_INTVEC_CORE2_CODE_ALL_END" = "_OS_INTVEC_CORE2_CODE_END";
    "_OS_INTVEC_CORE2_CODE_ALL_LIMIT" = "_OS_INTVEC_CORE2_CODE_LIMIT";
  }

  group OS_INTVEC_CORE2_CONST_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_INTVEC_CORE2_CONST (ordered, contiguous, fill, align = 8192)
    {
      section "OS_INTVEC_CORE2_CONST_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]rodata.OS_INTVEC_CORE2_CONST";
      }
    }
    group OS_INTVEC_CORE2_CONST_PAD (align = 8)
    {
      reserved "OS_INTVEC_CORE2_CONST_PAD" (size = 16);
    }
    "_OS_INTVEC_CORE2_CONST_START" = "_lc_gb_OS_INTVEC_CORE2_CONST";
    "_OS_INTVEC_CORE2_CONST_END" = ("_lc_gb_OS_INTVEC_CORE2_CONST_PAD" == 0) ? 0 : "_lc_gb_OS_INTVEC_CORE2_CONST_PAD" - 1;
    "_OS_INTVEC_CORE2_CONST_LIMIT" = "_lc_gb_OS_INTVEC_CORE2_CONST_PAD";

    "_OS_INTVEC_CORE2_CONST_ALL_START" = "_OS_INTVEC_CORE2_CONST_START";
    "_OS_INTVEC_CORE2_CONST_ALL_END" = "_OS_INTVEC_CORE2_CONST_END";
    "_OS_INTVEC_CORE2_CONST_ALL_LIMIT" = "_OS_INTVEC_CORE2_CONST_LIMIT";
  }

  group OS_OsApplication_VAR_ROM_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_OsApplication_VAR_FAST_INIT_ROM (ordered, contiguous, fill, align = 16)
    {
      reserved "OS_OsApplication_VAR_FAST_INIT_ROM" (size = 0);
    }
    "_OS_OsApplication_VAR_FAST_INIT_ROM_START" = "_lc_gb_OS_OsApplication_VAR_FAST_INIT_ROM";
    "_OS_OsApplication_VAR_FAST_INIT_ROM_LIMIT" = "_lc_ge_OS_OsApplication_VAR_FAST_INIT_ROM";

    group OS_OsApplication_VAR_INIT_ROM (ordered, contiguous, fill, align = 16)
    {
      reserved "OS_OsApplication_VAR_INIT_ROM" (size = 0);
    }
    "_OS_OsApplication_VAR_INIT_ROM_START" = "_lc_gb_OS_OsApplication_VAR_INIT_ROM";
    "_OS_OsApplication_VAR_INIT_ROM_LIMIT" = "_lc_ge_OS_OsApplication_VAR_INIT_ROM";

  }

  group OS_OsApplication_VAR_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core0)
  {
    group OS_OsApplication_VAR_FAST_INIT (ordered, contiguous, fill, align = 16)
    {
      reserved "OS_OsApplication_VAR_FAST_INIT" (size = 0);
    }
    group OS_OsApplication_VAR_FAST_INIT_PAD (align = 4)
    {
      reserved "OS_OsApplication_VAR_FAST_INIT_PAD" (size = 16);
    }
    "_OS_OsApplication_VAR_FAST_INIT_START" = "_lc_gb_OS_OsApplication_VAR_FAST_INIT";
    "_OS_OsApplication_VAR_FAST_INIT_END" = ("_lc_gb_OS_OsApplication_VAR_FAST_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_OsApplication_VAR_FAST_INIT_PAD" - 1;
    "_OS_OsApplication_VAR_FAST_INIT_LIMIT" = "_lc_gb_OS_OsApplication_VAR_FAST_INIT_PAD";

    group OS_OsApplication_VAR_FAST_NOINIT (ordered, contiguous, fill, align = 16)
    {
      reserved "OS_OsApplication_VAR_FAST_NOINIT" (size = 0);
    }
    group OS_OsApplication_VAR_FAST_NOINIT_PAD (align = 1)
    {
      reserved "OS_OsApplication_VAR_FAST_NOINIT_PAD" (size = 16);
    }
    "_OS_OsApplication_VAR_FAST_NOINIT_START" = "_lc_gb_OS_OsApplication_VAR_FAST_NOINIT";
    "_OS_OsApplication_VAR_FAST_NOINIT_END" = ("_lc_gb_OS_OsApplication_VAR_FAST_NOINIT_PAD" == 0) ? 0 : "_lc_gb_OS_OsApplication_VAR_FAST_NOINIT_PAD" - 1;
    "_OS_OsApplication_VAR_FAST_NOINIT_LIMIT" = "_lc_gb_OS_OsApplication_VAR_FAST_NOINIT_PAD";

    group OS_OsApplication_VAR_FAST_ZERO_INIT (ordered, contiguous, fill, align = 16)
    {
      reserved "OS_OsApplication_VAR_FAST_ZERO_INIT" (size = 0);
    }
    group OS_OsApplication_VAR_FAST_ZERO_INIT_PAD (align = 4)
    {
      reserved "OS_OsApplication_VAR_FAST_ZERO_INIT_PAD" (size = 16);
    }
    "_OS_OsApplication_VAR_FAST_ZERO_INIT_START" = "_lc_gb_OS_OsApplication_VAR_FAST_ZERO_INIT";
    "_OS_OsApplication_VAR_FAST_ZERO_INIT_END" = ("_lc_gb_OS_OsApplication_VAR_FAST_ZERO_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_OsApplication_VAR_FAST_ZERO_INIT_PAD" - 1;
    "_OS_OsApplication_VAR_FAST_ZERO_INIT_LIMIT" = "_lc_gb_OS_OsApplication_VAR_FAST_ZERO_INIT_PAD";

    group OS_OsApplication_VAR_FAST_ZERO_INIT_bss (ordered, contiguous, fill, align = 16)
    {
      reserved "OS_OsApplication_VAR_FAST_ZERO_INIT_bss" (size = 0);
    }
    group OS_OsApplication_VAR_FAST_ZERO_INIT_bss_PAD (align = 4)
    {
      reserved "OS_OsApplication_VAR_FAST_ZERO_INIT_bss_PAD" (size = 16);
    }
    "_OS_OsApplication_VAR_FAST_ZERO_INIT_bss_START" = "_lc_gb_OS_OsApplication_VAR_FAST_ZERO_INIT_bss";
    "_OS_OsApplication_VAR_FAST_ZERO_INIT_bss_END" = ("_lc_gb_OS_OsApplication_VAR_FAST_ZERO_INIT_bss_PAD" == 0) ? 0 : "_lc_gb_OS_OsApplication_VAR_FAST_ZERO_INIT_bss_PAD" - 1;
    "_OS_OsApplication_VAR_FAST_ZERO_INIT_bss_LIMIT" = "_lc_gb_OS_OsApplication_VAR_FAST_ZERO_INIT_bss_PAD";

    group OS_OsApplication_VAR_INIT (ordered, contiguous, fill, align = 16)
    {
      reserved "OS_OsApplication_VAR_INIT" (size = 0);
    }
    group OS_OsApplication_VAR_INIT_PAD (align = 4)
    {
      reserved "OS_OsApplication_VAR_INIT_PAD" (size = 16);
    }
    "_OS_OsApplication_VAR_INIT_START" = "_lc_gb_OS_OsApplication_VAR_INIT";
    "_OS_OsApplication_VAR_INIT_END" = ("_lc_gb_OS_OsApplication_VAR_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_OsApplication_VAR_INIT_PAD" - 1;
    "_OS_OsApplication_VAR_INIT_LIMIT" = "_lc_gb_OS_OsApplication_VAR_INIT_PAD";

    group OS_OsApplication_VAR_NOINIT (ordered, contiguous, fill, align = 16)
    {
      reserved "OS_OsApplication_VAR_NOINIT" (size = 0);
    }
    group OS_OsApplication_VAR_NOINIT_PAD (align = 1)
    {
      reserved "OS_OsApplication_VAR_NOINIT_PAD" (size = 16);
    }
    "_OS_OsApplication_VAR_NOINIT_START" = "_lc_gb_OS_OsApplication_VAR_NOINIT";
    "_OS_OsApplication_VAR_NOINIT_END" = ("_lc_gb_OS_OsApplication_VAR_NOINIT_PAD" == 0) ? 0 : "_lc_gb_OS_OsApplication_VAR_NOINIT_PAD" - 1;
    "_OS_OsApplication_VAR_NOINIT_LIMIT" = "_lc_gb_OS_OsApplication_VAR_NOINIT_PAD";

    group OS_OsApplication_VAR_ZERO_INIT (ordered, contiguous, fill, align = 16)
    {
      reserved "OS_OsApplication_VAR_ZERO_INIT" (size = 0);
    }
    group OS_OsApplication_VAR_ZERO_INIT_PAD (align = 4)
    {
      reserved "OS_OsApplication_VAR_ZERO_INIT_PAD" (size = 16);
    }
    "_OS_OsApplication_VAR_ZERO_INIT_START" = "_lc_gb_OS_OsApplication_VAR_ZERO_INIT";
    "_OS_OsApplication_VAR_ZERO_INIT_END" = ("_lc_gb_OS_OsApplication_VAR_ZERO_INIT_PAD" == 0) ? 0 : "_lc_gb_OS_OsApplication_VAR_ZERO_INIT_PAD" - 1;
    "_OS_OsApplication_VAR_ZERO_INIT_LIMIT" = "_lc_gb_OS_OsApplication_VAR_ZERO_INIT_PAD";

    group OS_OsApplication_VAR_ZERO_INIT_bss (ordered, contiguous, fill, align = 16)
    {
      reserved "OS_OsApplication_VAR_ZERO_INIT_bss" (size = 0);
    }
    group OS_OsApplication_VAR_ZERO_INIT_bss_PAD (align = 4)
    {
      reserved "OS_OsApplication_VAR_ZERO_INIT_bss_PAD" (size = 16);
    }
    "_OS_OsApplication_VAR_ZERO_INIT_bss_START" = "_lc_gb_OS_OsApplication_VAR_ZERO_INIT_bss";
    "_OS_OsApplication_VAR_ZERO_INIT_bss_END" = ("_lc_gb_OS_OsApplication_VAR_ZERO_INIT_bss_PAD" == 0) ? 0 : "_lc_gb_OS_OsApplication_VAR_ZERO_INIT_bss_PAD" - 1;
    "_OS_OsApplication_VAR_ZERO_INIT_bss_LIMIT" = "_lc_gb_OS_OsApplication_VAR_ZERO_INIT_bss_PAD";

    "_OS_OsApplication_VAR_ALL_START" = "_OS_OsApplication_VAR_FAST_INIT_START";
    "_OS_OsApplication_VAR_ALL_END" = "_OS_OsApplication_VAR_ZERO_INIT_bss_END";
    "_OS_OsApplication_VAR_ALL_LIMIT" = "_OS_OsApplication_VAR_ZERO_INIT_bss_LIMIT";
  }

  group OS_USER_CODE_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_USER_CODE (ordered, contiguous, fill)
    {
      section "OS_USER_CODE_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]text.OS_ADC0SR0_ISR_CODE";
        select "[.]text.OS_ADC11SR0_ISR_CODE";
        select "[.]text.OS_ADC1SR0_ISR_CODE";
        select "[.]text.OS_ADC2SR0_ISR_CODE";
        select "[.]text.OS_ADC3SR0_ISR_CODE";
        select "[.]text.OS_ADC8SR0_ISR_CODE";
        select "[.]text.OS_ASCLIN1ERR_ISR_CODE";
        select "[.]text.OS_ASCLIN1RX_ISR_CODE";
        select "[.]text.OS_ASCLIN1TX_ISR_CODE";
        select "[.]text.OS_ASCLIN2ERR_ISR_CODE";
        select "[.]text.OS_ASCLIN2RX_ISR_CODE";
        select "[.]text.OS_ASCLIN2TX_ISR_CODE";
        select "[.]text.OS_ASCLIN3ERR_ISR_CODE";
        select "[.]text.OS_ASCLIN3RX_ISR_CODE";
        select "[.]text.OS_ASCLIN3TX_ISR_CODE";
        select "[.]text.OS_ASCLIN4ERR_ISR_CODE";
        select "[.]text.OS_ASCLIN4RX_ISR_CODE";
        select "[.]text.OS_ASCLIN4TX_ISR_CODE";
        select "[.]text.OS_CanIsr_0_CODE";
        select "[.]text.OS_CanIsr_1_CODE";
        select "[.]text.OS_CanIsr_3_CODE";
        select "[.]text.OS_CanIsr_4_CODE";
        select "[.]text.OS_CanIsr_6_CODE";
        select "[.]text.OS_Core0_AswTask_CODE";
        select "[.]text.OS_Core0_Bsw_Task_CODE";
        select "[.]text.OS_Core0_CddTask_CODE";
        select "[.]text.OS_Core1_Asw_Init_CODE";
        select "[.]text.OS_Core1_Asw_Task_Qm_CODE";
        select "[.]text.OS_Core1_Bsw_Task_CODE";
        select "[.]text.OS_Core2_Asw_Init_CODE";
        select "[.]text.OS_Core2_Asw_Task_CODE";
        select "[.]text.OS_Core2_Bsw_Task_CODE";
        select "[.]text.OS_Default_Init_Task_CODE";
        select "[.]text.OS_Default_Init_Task_Core1_CODE";
        select "[.]text.OS_Default_Init_Task_Core1_Trusted_CODE";
        select "[.]text.OS_Default_Init_Task_Core2_CODE";
        select "[.]text.OS_Default_Init_Task_Core2_Trusted_CODE";
        select "[.]text.OS_Default_Init_Task_Trusted_CODE";
        select "[.]text.OS_DMACH10SR_ISR_CODE";
        select "[.]text.OS_DMACH11SR_ISR_CODE";
        select "[.]text.OS_ERRORHOOK_CODE";
        select "[.]text.OS_GTMTOM0SR2_ISR_CODE";
        select "[.]text.OS_GTMTOM1SR0_ISR_CODE";
        select "[.]text.OS_GTMTOM1SR1_ISR_CODE";
        select "[.]text.OS_GTMTOM1SR3_ISR_CODE";
        select "[.]text.OS_GTMTOM1SR4_ISR_CODE";
        select "[.]text.OS_QSPI3ERR_ISR_CODE";
        select "[.]text.OS_QSPI3PT_ISR_CODE";
        select "[.]text.OS_SHUTDOWNHOOK_CODE";
      }
    }
    group OS_USER_CODE_PAD (align = 1)
    {
      reserved "OS_USER_CODE_PAD" (size = 16);
    }
    "_OS_USER_CODE_START" = "_lc_gb_OS_USER_CODE";
    "_OS_USER_CODE_END" = ("_lc_gb_OS_USER_CODE_PAD" == 0) ? 0 : "_lc_gb_OS_USER_CODE_PAD" - 1;
    "_OS_USER_CODE_LIMIT" = "_lc_gb_OS_USER_CODE_PAD";

    "_OS_USER_CODE_ALL_START" = "_OS_USER_CODE_START";
    "_OS_USER_CODE_ALL_END" = "_OS_USER_CODE_END";
    "_OS_USER_CODE_ALL_LIMIT" = "_OS_USER_CODE_LIMIT";
  }

  group OS_USER_CONST_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_USER_CONST (ordered, contiguous, fill)
    {
      reserved "OS_USER_CONST" (size = 0);
    }
    group OS_USER_CONST_PAD (align = 1)
    {
      reserved "OS_USER_CONST_PAD" (size = 16);
    }
    "_OS_USER_CONST_START" = "_lc_gb_OS_USER_CONST";
    "_OS_USER_CONST_END" = ("_lc_gb_OS_USER_CONST_PAD" == 0) ? 0 : "_lc_gb_OS_USER_CONST_PAD" - 1;
    "_OS_USER_CONST_LIMIT" = "_lc_gb_OS_USER_CONST_PAD";

    "_OS_USER_CONST_ALL_START" = "_OS_USER_CONST_START";
    "_OS_USER_CONST_ALL_END" = "_OS_USER_CONST_END";
    "_OS_USER_CONST_ALL_LIMIT" = "_OS_USER_CONST_LIMIT";
  }

  group STACK_C0_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core0)
  {
    group STACK_C0 (ordered, contiguous, fill, align = 4)
    {
      reserved "STACK_C0" (size = 1024);
    }
    group STACK_C0_PAD (align = 4)
    {
      reserved "STACK_C0_PAD" (size = 0);
    }
    "_STACK_C0_START" = "_lc_gb_STACK_C0";
    "_STACK_C0_END" = ("_lc_ge_STACK_C0" == 0) ? 0 : "_lc_ge_STACK_C0" - 1;
    "_STACK_C0_LIMIT" = "_lc_ge_STACK_C0";

    "_STACK_C0_ALL_START" = "_STACK_C0_START";
    "_STACK_C0_ALL_END" = "_STACK_C0_END";
    "_STACK_C0_ALL_LIMIT" = "_STACK_C0_LIMIT";
  }

  group STACK_C1_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core1)
  {
    group STACK_C1 (ordered, contiguous, fill, align = 4)
    {
      reserved "STACK_C1" (size = 1024);
    }
    group STACK_C1_PAD (align = 4)
    {
      reserved "STACK_C1_PAD" (size = 0);
    }
    "_STACK_C1_START" = "_lc_gb_STACK_C1";
    "_STACK_C1_END" = ("_lc_ge_STACK_C1" == 0) ? 0 : "_lc_ge_STACK_C1" - 1;
    "_STACK_C1_LIMIT" = "_lc_ge_STACK_C1";

    "_STACK_C1_ALL_START" = "_STACK_C1_START";
    "_STACK_C1_ALL_END" = "_STACK_C1_END";
    "_STACK_C1_ALL_LIMIT" = "_STACK_C1_LIMIT";
  }

  group STACK_C2_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core2)
  {
    group STACK_C2 (ordered, contiguous, fill, align = 4)
    {
      reserved "STACK_C2" (size = 1024);
    }
    group STACK_C2_PAD (align = 4)
    {
      reserved "STACK_C2_PAD" (size = 0);
    }
    "_STACK_C2_START" = "_lc_gb_STACK_C2";
    "_STACK_C2_END" = ("_lc_ge_STACK_C2" == 0) ? 0 : "_lc_ge_STACK_C2" - 1;
    "_STACK_C2_LIMIT" = "_lc_ge_STACK_C2";

    "_STACK_C2_ALL_START" = "_STACK_C2_START";
    "_STACK_C2_ALL_END" = "_STACK_C2_END";
    "_STACK_C2_ALL_LIMIT" = "_STACK_C2_LIMIT";
  }

  "_RESET" = "brsStartupEntry";
  "_start" = "brsStartupEntry";
  "StartupEntry" = "brsStartupEntry";
  "_brsStartupEntry" = "brsStartupEntry";
  "_start_tc0" = "brsStartupEntry";
  "_start_tc1" = "brsStartupEntry";
  "_start_tc2" = "brsStartupEntry";
  "_start_tc1_Core1" = "brsStartupEntry";
  "_start_tc2_Core2" = "brsStartupEntry";

  "__STARTUPSTACK_CORE0" = "_STACK_C0_LIMIT";
  "__STARTUPSTACK_CORE1" = "_STACK_C1_LIMIT";
  "__STARTUPSTACK_CORE2" = "_STACK_C2_LIMIT";

  group OS_CODE_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_CODE (ordered, contiguous, fill)
    {
      section "OS_CODE_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]text.OS_CODE";
        select "[.]text.OS_OS_COREINITHOOK_CODE";
      }
    }
    group OS_CODE_PAD (align = 1)
    {
      reserved "OS_CODE_PAD" (size = 16);
    }
    "_OS_CODE_START" = "_lc_gb_OS_CODE";
    "_OS_CODE_END" = ("_lc_gb_OS_CODE_PAD" == 0) ? 0 : "_lc_gb_OS_CODE_PAD" - 1;
    "_OS_CODE_LIMIT" = "_lc_gb_OS_CODE_PAD";

    "_OS_CODE_ALL_START" = "_OS_CODE_START";
    "_OS_CODE_ALL_END" = "_OS_CODE_END";
    "_OS_CODE_ALL_LIMIT" = "_OS_CODE_LIMIT";
  }

  group OS_CONST_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group OS_CONST (ordered, contiguous, fill)
    {
      section "OS_CONST_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]rodata.OS_CONST";
        select "[.]zrodata.OS_CONST_FAST";
        select "[.]rodata.OS_CORE0_CONST";
        select "[.]zrodata.OS_CORE0_CONST_FAST";
        select "[.]rodata.OS_CORE1_CONST";
        select "[.]zrodata.OS_CORE1_CONST_FAST";
        select "[.]rodata.OS_CORE2_CONST";
        select "[.]zrodata.OS_CORE2_CONST_FAST";
        select "[.]rodata.OS_SystemApplication_OsCore0_CONST";
        select "[.]zrodata.OS_SystemApplication_OsCore0_CONST_FAST";
        select "[.]rodata.OS_SystemApplication_OsCore1_CONST";
        select "[.]zrodata.OS_SystemApplication_OsCore1_CONST_FAST";
        select "[.]rodata.OS_SystemApplication_OsCore2_CONST";
        select "[.]zrodata.OS_SystemApplication_OsCore2_CONST_FAST";
      }
    }
    group OS_CONST_PAD (align = 1)
    {
      reserved "OS_CONST_PAD" (size = 16);
    }
    "_OS_CONST_START" = "_lc_gb_OS_CONST";
    "_OS_CONST_END" = ("_lc_gb_OS_CONST_PAD" == 0) ? 0 : "_lc_gb_OS_CONST_PAD" - 1;
    "_OS_CONST_LIMIT" = "_lc_gb_OS_CONST_PAD";

    "_OS_CONST_ALL_START" = "_OS_CONST_START";
    "_OS_CONST_ALL_END" = "_OS_CONST_END";
    "_OS_CONST_ALL_LIMIT" = "_OS_CONST_LIMIT";
  }

  group Const_Default_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group rodata (ordered, contiguous, fill)
    {
      section "rodata_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]rodata*";
      }
    }
    "_rodata_START" = "_lc_gb_rodata";
    "_rodata_END" = ("_lc_ge_rodata" == 0) ? 0 : "_lc_ge_rodata" - 1;
    "_rodata_LIMIT" = "_lc_ge_rodata";

    group text (ordered, contiguous, fill)
    {
      section "text_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]text*";
      }
    }
    "_text_START" = "_lc_gb_text";
    "_text_END" = ("_lc_ge_text" == 0) ? 0 : "_lc_ge_text" - 1;
    "_text_LIMIT" = "_lc_ge_text";

    group zrodata (ordered, contiguous, fill)
    {
      section "zrodata_SEC" (fill, blocksize = 2, attributes = rx)
      {
        select "[.]zrodata*";
      }
    }
    "_zrodata_START" = "_lc_gb_zrodata";
    "_zrodata_END" = ("_lc_ge_zrodata" == 0) ? 0 : "_lc_ge_zrodata" - 1;
    "_zrodata_LIMIT" = "_lc_ge_zrodata";

    "_Const_Default_ALL_START" = "_rodata_START";
    "_Const_Default_ALL_END" = "_zrodata_END";
    "_Const_Default_ALL_LIMIT" = "_zrodata_LIMIT";
  }

  group Data_Default_ROM_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_PFlash0_Cached)
  {
    group data_ROM (ordered, contiguous, fill, align = 16)
    {
      section "data_ROM_SEC" (fill, blocksize = 2, attributes = rx)
      {
        group (load_addr)
        {
          select "[.]data*";
        }
      }
    }
    "_data_ROM_START" = "_lc_gb_data_ROM";
    "_data_ROM_LIMIT" = "_lc_ge_data_ROM";

    group zdata_ROM (ordered, contiguous, fill, align = 16)
    {
      section "zdata_ROM_SEC" (fill, blocksize = 2, attributes = rx)
      {
        group (load_addr)
        {
          select "[.]zdata*";
        }
      }
    }
    "_zdata_ROM_START" = "_lc_gb_zdata_ROM";
    "_zdata_ROM_LIMIT" = "_lc_ge_zdata_ROM";

  }

  group Data_Default_GROUP (ordered, contiguous, run_addr = mem:mpe:RegionBlock_0_DSPR_Core0)
  {
    group bss (ordered, contiguous, fill, align = 16)
    {
      section "bss_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]bss*";
      }
    }
    group bss_PAD (align = 4)
    {
      reserved "bss_PAD" (size = 0);
    }
    "_bss_START" = "_lc_gb_bss";
    "_bss_END" = ("_lc_ge_bss" == 0) ? 0 : "_lc_ge_bss" - 1;
    "_bss_LIMIT" = "_lc_ge_bss";

    group data (ordered, contiguous, fill, align = 16)
    {
      section "data_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]data*";
      }
    }
    group data_PAD (align = 4)
    {
      reserved "data_PAD" (size = 0);
    }
    "_data_START" = "_lc_gb_data";
    "_data_END" = ("_lc_ge_data" == 0) ? 0 : "_lc_ge_data" - 1;
    "_data_LIMIT" = "_lc_ge_data";

    group zbss (ordered, contiguous, fill, align = 16)
    {
      section "zbss_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]zbss*";
      }
    }
    group zbss_PAD (align = 4)
    {
      reserved "zbss_PAD" (size = 0);
    }
    "_zbss_START" = "_lc_gb_zbss";
    "_zbss_END" = ("_lc_ge_zbss" == 0) ? 0 : "_lc_ge_zbss" - 1;
    "_zbss_LIMIT" = "_lc_ge_zbss";

    group zdata (ordered, contiguous, fill, align = 16)
    {
      section "zdata_SEC" (blocksize = 2, attributes = rw)
      {
        select "[.]zdata*";
      }
    }
    group zdata_PAD (align = 4)
    {
      reserved "zdata_PAD" (size = 0);
    }
    "_zdata_START" = "_lc_gb_zdata";
    "_zdata_END" = ("_lc_ge_zdata" == 0) ? 0 : "_lc_ge_zdata" - 1;
    "_zdata_LIMIT" = "_lc_ge_zdata";

    "_Data_Default_ALL_START" = "_bss_START";
    "_Data_Default_ALL_END" = "_zdata_END";
    "_Data_Default_ALL_LIMIT" = "_zdata_LIMIT";
  }

}


