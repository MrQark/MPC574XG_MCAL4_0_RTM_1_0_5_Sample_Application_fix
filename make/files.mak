#===================================================================================================
#
#    @file        files.mak
#    @version     1.0.5
#
#    @brief       AUTOSAR - files to be build for the current application.
#    @details     List of files to be built for the Leds Sample Application.
#
#    Project      : AUTOSAR 4.0 MCAL
#    Platform     : PA
#    Peripheral   : 
#    Dependencies : Base Det Dem Port Dio Mcu Rte Wdg WdgIf CanIf LinIf FrIf EcuM
#
#    Autosar Version       : 4.0.3
#    Autosar Revision      : ASR_REL_4_0_REV_0003
#    Autosar Conf. Variant :
#    Software Version      : 1.0.5
#    Build Version         : MPC5746C_MCAL_1_0_5_RTM_ASR_REL_4_0_REV_0003_20171214
#
#    (c) Copyright 2017 NXP
#    All Rights Reserved.
#
#    This file contains sample code only. It is not part of the production code deliverables.
#
#
#===================================================================================================
##===================================================================================================

################################################################################
# Sample application name
################################################################################
SAMPLE_APP_NAME := sample_app_mcal

#

################################################################################
# List of all source directories (test, dependency, and generated .c files)
################################################################################
#
# specify modules which will be compiled and linked
include Modules
# paths for building installed plugins
SRC_DIRS    +=  $(GENERATE_DIR)/src \
                $(foreach mod,$(MODULE_LIST),$(PLUGINS_DIR)/$(mod)_$(AR_PKG_NAME)/src)
#
################################################################################
# List of source files
################################################################################
SRC_FILES   +=  $(DEV_DIR)/src/main.c \
                $(DEV_DIR)/src/sample_app_mcal_data_definition.c \
                $(DEV_DIR)/src/sample_app_mcal_initialization_task.c \
                $(DEV_DIR)/src/sample_app_mcal_task_1.c \
                $(DEV_DIR)/src/sample_app_mcal_task_2.c \
                $(DEV_DIR)/src/sample_app_mcal_task_3.c \
                $(DEV_DIR)/src/sample_app_mcal_spi_task.c \
                $(DEV_DIR)/src/sample_app_mcal_lin_task.c \
                $(DEV_DIR)/src/sample_app_mcal_icu_task.c \
                $(DEV_DIR)/src/sample_app_mcal_pwm_task.c \
                $(DEV_DIR)/src/sample_app_mcal_adc_task.c \
                $(DEV_DIR)/src/sample_app_mcal_can_task.c \
                $(DEV_DIR)/src/sample_app_mcal_fee_task.c \
                $(DEV_DIR)/src/sample_app_mcal_uart_console.c

ifeq ($(modulelist),os)
  ifeq ($(TOOLCHAIN),cw)
    ASM_FILES_TO_BUILD      += $(DEV_DIR)/toolchains/CW_Startup_vle_os.s
  else
    SRC_FILES       += $(DEV_DIR)/toolchains/Startup_vle_os.c
  endif
else
ifeq ($(TOOLCHAIN),cw)
    SRC_FILES       += $(DEV_DIR)/toolchains/CW_Startup_vle.s
else
    SRC_FILES       += $(DEV_DIR)/toolchains/Startup_vle.c
endif
endif


################################################################################
# List of all include directories (test, dependency, and generated .h files)
################################################################################
#
INCLUDE_DIRS+=      $(GENERATE_DIR)/include \
                    $(DEV_DIR)/include \
                    $(foreach mod,$(MODULE_LIST),$(PLUGINS_DIR)/$(mod)_$(AR_PKG_NAME)/include) \
                    $(PLUGINS_DIR)/CanIf_$(AR_PKG_NAME)/include
#
################################################################################
# Path to the linker definition file
################################################################################
ifeq ($(DERIVATIVE), 5746C)
#take linker command files
LINKER_DEFS_GHS_FLASH   :=    $(DEV_DIR)/toolchains/autosar_flash.ld
LINKER_DEFS_CW_FLASH    :=    $(DEV_DIR)/toolchains/autosar_flash.lcf
LINKER_DEFS_DIAB_FLASH  :=    $(DEV_DIR)/toolchains/autosar_flash.dld
else
#take linker command files
LINKER_DEFS_GHS_FLASH   :=
LINKER_DEFS_GHS_RAM     :=
LINKER_DEFS_CW_FLASH    :=
LINKER_DEFS_CW_RAM      :=
LINKER_DEFS_DIAB_FLASH  :=
LINKER_DEFS_DIAB_RAM    :=
endif

ifeq ($(TOOLCHAIN),ghs)
    ifeq ($(findstring @LoadTo=ram, $(TEST_PARAMS)),)
        # if linking into flash
        LINKER_DEFS      :=    $(LINKER_DEFS_GHS_FLASH)
    else
        #if linking into ram
        LINKER_DEFS      :=    $(LINKER_DEFS_GHS_RAM)
    endif
    printout := $(shell echo  .set COMPILER_USED, COMPILER_GHS > compiler_used.s );
else
ifeq ($(TOOLCHAIN),cw)
    ifeq ($(findstring @LoadTo=ram, $(TEST_PARAMS)),)
        # if linking into flash
        LINKER_DEFS      :=    $(LINKER_DEFS_CW_FLASH)
    else
        #if linking into ram
        LINKER_DEFS      :=    $(LINKER_DEFS_CW_RAM)
    endif
    printout := $(shell echo  .set COMPILER_USED, COMPILER_CW > compiler_used.s );
else
    ifeq ($(findstring @LoadTo=ram, $(TEST_PARAMS)),)
        # if linking into flash
        LINKER_DEFS      :=    $(LINKER_DEFS_DIAB_FLASH)
    else
        #if linking into ram
        LINKER_DEFS      :=    $(LINKER_DEFS_DIAB_RAM)
    endif
    printout := $(shell echo .set COMPILER_USED, COMPILER_DIAB > compiler_used.s );
endif
endif

################################################################################
# Additional test specific C compiler options
################################################################################
CCOPT   +=

#
################################################################################
# Additional test specific linker options
################################################################################
LDOPT           +=

################################################################################
# Custom libraries
################################################################################
LIBS            +=


#