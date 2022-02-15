#===================================================================================================
#   @file    build_cfg.mak
#   @version 1.0.5
#
#   @brief       configuration file for WindRiver DIAB toolchain
#   @details     This file contains the compiler, assembler, linker options for WindRiver DIAB toolchain
#
#===================================================================================================
#   Project              : AUTOSAR 4.0 MCAL
#   Platform             : PA
#   Peripheral           : 
#   Dependencies         : Base Det Dem Port Dio Mcu Rte Wdg WdgIf CanIf LinIf FrIf EcuM
#
#   Autosar Version      : 4.0.3
#   Autosar Revision     : ASR_REL_4_0_REV_0003
#   Autosar Conf.Variant :
#   SW Version           : 1.0.5
#   Build Version        : MPC5746C_MCAL_1_0_5_RTM_ASR_REL_4_0_REV_0003_20171214
#
#   (c) Copyright 2017 NXP
#   All Rights Reserved.
#===================================================================================================
#===================================================================================================
##===================================================================================================

VLETYPE := vle
PRJFLAG :=-DMPC$(DERIVATIVE)
MODEFLAG=$(DEFINE_FLAG_SPECIFIC)
DEBUG_FLAGS := -g3 -Wa,-Xisa-vle
SUBDERIVATIVE_NAME=-DDERIVATIVE_$(DERIVATIVE)

LIB_PATH        := -Y P,$(call winpath, $(TOOLCHAIN_DIR))/PPCVLEEN/simple:$(call winpath, $(TOOLCHAIN_DIR))/PPCVLEEN:$(call winpath, $(TOOLCHAIN_DIR))/PPCVLEE/simple:$(call winpath, $(TOOLCHAIN_DIR))/PPCVLEE

CC          := $(call winpath, $(TOOLCHAIN_DIR)/WIN32/bin/dcc.exe)
LD          := $(call winpath, $(TOOLCHAIN_DIR)/WIN32/bin/dld.exe)
AS          := $(call winpath, $(TOOLCHAIN_DIR)/WIN32/bin/das.exe)

# Actual core:
MULTICORE_TST_CORE=$(if $(findstring CORE,$(CFG_SET)),$(subst CORE,,$(lastword $(subst $(_UNDERLINE_CHAR_), $(_SPACE_CHAR_), $(CFG_SET)))),)

# CORE-specific CC/AS/LD options
CCOPT_CORE_ := -tPPCE200Z4204N3VEN:simple
ASOPT_CORE_ := $(CCOPT_CORE_)
LDOPT_CORE_ := $(CCOPT_CORE_)

CCOPT_CORE_0:= -tPPCE200Z4204N3VEN:simple
ASOPT_CORE_0:= $(CCOPT_CORE_0)
LDOPT_CORE_0:= $(CCOPT_CORE_0)

CCOPT_CORE_1:= -tPPCE200Z4204N3VEN:simple
ASOPT_CORE_1:= $(CCOPT_CORE_1)
LDOPT_CORE_1:= $(CCOPT_CORE_1)

CCOPT_CORE_2:= -tPPCE200Z210N3VEN:simple
ASOPT_CORE_2:= $(CCOPT_CORE_2)
LDOPT_CORE_2:= $(CCOPT_CORE_2)

CCOPT_CORE=$(CCOPT_CORE_$(MULTICORE_TST_CORE)) 
ASOPT_CORE=$(ASOPT_CORE_$(MULTICORE_TST_CORE))
LDOPT_CORE=$(LDOPT_CORE_$(MULTICORE_TST_CORE))

CCOPT       :=  $(CCOPT) \
                $(PRJFLAG) \
                $(DEBUG_FLAGS) \
                $(SUBDERIVATIVE_NAME) \
                -DDIAB \
                $(MODEFLAG) \
                -DAUTOSAR_OS_NOT_USED \
                -DEU_DISABLE_ANSILIB_CALLS \
                -Xdialect-ansi \
                -XO \
                -Xsize-opt \
                -Xsmall-data=0 \
                -Xsmall-const=0 \
                -Xno-common \
                -Xdebug-dwarf2 \
                -Xdebug-local-all \
                -Xdebug-local-cie \
                -Xdebug-struct-all \
                -Xforce-declarations \
                -Xmacro-undefined-warn \
                -ee1481 \
                -Xnested-interrupts \
                -Xaddr-sconst=0x11 \
                -Xaddr-sdata=0x11 \
                -Xlink-time-lint \
                -W:as:,-l
                

                
LDOPT       :=  $(LDOPT) \
                -Xelf \
                -m6 \
                -Xlink-time-lint \
	         -lc \
                $(LIB_PATH)
                    
ASOPT       :=  $(ASOPT) \
                -g \
                -Xisa-vle \
                -Xasm-debug-on \
                -Xdebug-dwarf2 \
                -Xsemi-is-newline

                    
ifeq ($(findstring @LoadTo=ram, $(TEST_PARAMS)),)
    # if compiling/linking into flash
else
    #if compiling/linking into ram
   ASOPT       := $(ASOPT) -DSINTRAM
   CCOPT       := $(CCOPT) -DSINTRAM
endif

ifeq ($(AUX_BUFFER_APP),ON)
   CCOPT       := $(CCOPT) -DENABLE_TIMERS
endif

ifeq ($(T32_TRACE_APP),ON)
	CCOPT       := $(CCOPT) -DT32_TRACE_APP
endif

ifeq ($(D_CACHE_ENABLE),ON)
    #if D_CACHE is needed
    CCOPT:= $(CCOPT) -DD_CACHE_ENABLE
endif
ifeq ($(I_CACHE_ENABLE),ON)
    #if I_CACHE is needed
    CCOPT:= $(CCOPT) -DI_CACHE_ENABLE
endif
ifeq ($(BTB_ENABLE),ON)
   #if BTB is needed
    CCOPT:= $(CCOPT) -DBTB_ENABLE
endif

ifeq ($(MULTICORE_TST_ENABLE),ON)
   #if MULTICORE is enabled
    CCOPT:= $(CCOPT) -DMULTICORE_TST_ENABLE
endif

# Setup system libs, inlude dirs, and sourceinclude files
LIBS			:= 
#INCLUDE_DIRS		 = 
#SRC_FILES		 = 
# Extention of the linked executable file
EXE_EXT 		:= elf

# Compiling and Linking macros
COMPILE_C_FILE = $(CC) $(CCOPT_CORE) $(CCOPT) -DFILE_BASENAME=$(basename $(notdir $<)) -c $(call winpath, $<) $(addprefix -I, $(INCLUDE_DIRS)) -o $(call winpath, $(OUT_DIR)/$@)
PREPROCESS_C_FILE = $(CC) $(CCOPT_CORE) $(CCOPT)  -DENABLE_DUMMY_SUITES -DPREPROCESS_ONLY_TEST -E $(call winpath, $<) $(addprefix -I, $(INCLUDE_DIRS)) -@O=$(call winpath, $@)
COMPILE_S_FILE = $(AS) $(ASOPT_CORE) $(ASOPT)  -o $(call winpath, $(OUT_DIR)/$@) $(call winpath, $<)
LINK_O_FILES = $(LD)  $(LDOPT_CORE) $(LDOPT) $(foreach LINKER_DEF, $(LINKER_DEFS),$(call winpath, $(LINKER_DEF))) \
$(addprefix $(call winpath, $(OUT_DIR)/), $(OUT_FILES)) $(addprefix   , $(call winpath, $(LIBS)))  \
-o $(call winpath, $@) -@O=$(basename $(call winpath, $@)).map

COMPILER_VERSION_CMD = $(CC) -V 2>&1 | grep $(COMPILER_REFERENCE_VERSION)
COMPILER_REFERENCE_VERSION := "Build label: DIAB_5_9_4_0-FCS_20140312_144007"

#check toolchain version
ifeq ($(TOOLCHAIN_VERSION),)
    #export to environment - so that is checked only once during current make run
    export TOOLCHAIN_VERSION:= $(strip $(shell $(COMPILER_VERSION_CMD)))
endif
ifeq ($(strip $(TOOLCHAIN_VERSION)),)
    $(shell echo "**************************************************************************************" 1>&2)
    $(shell echo Bad Compiler version 1>&2)
    $(shell echo For $(PLATFORM)-$(DERIVATIVE) you must use: $(COMPILER_REFERENCE_VERSION) 1>&2)
    $(shell echo "**************************************************************************************" 1>&2)
    $(error Bad Compiler version)
endif
