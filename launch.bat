::===================================================================================================
::
::    @file        launch.bat
::    @version     1.0.5
::
::    @brief       AUTOSAR - Sample_app - launches build.
::    @details     Launches the build of the sample application
::
::    Project      : AUTOSAR 4.0 MCAL
::    Patform      : PA
::    Peripheral   : 
::    Dependencies : Base Det Dem Port Dio Mcu Rte Wdg WdgIf CanIf LinIf FrIf EcuM
::
::    Autosar Version       : 4.0.3
::    Autosar Revision      : ASR_REL_4_0_REV_0003
::    Autosar Conf. Variant :
::    Software Version      : 1.0.5
::    Build Version         : MPC5746C_MCAL_1_0_5_RTM_ASR_REL_4_0_REV_0003_20171214
::
::    (c) Copyright 2017 NXP
::    All Rights Reserved.
::
::    This file contains sample code only. It is not part of the production code deliverables.
::
::===================================================================================================
::::===================================================================================================

@echo off

::You have to uncomment and set the following variables if they are not already set
:: uncomment line below if you do not set TRESOS_DIR over environment
::TRESOS
SET TRESOS_DIR=C:/Tools/EB/tresos/v14.2.1
::GHS
SET GHS_DIR=C:/ghs/ppc/comp_201416
::DIAB
::SET DIAB_DIR=
::Path to the plugins folder
SET PLUGINS_DIR=C:/Tools/EB/tresos/v14.2.1/plugins
SET MAKE_DIR=C:/Tools/GnuWin32
::SSC
SET SSC_ROOT=C:/NXP/AUTOSAR/MPC574xG_AUTOSAR_OS_4_0_92_RTM_1_0_3



if not defined TRESOS_DIR GOTO missing_path_names_TRESOS_DIR
if not exist %TRESOS_DIR% GOTO missing_path_names_TRESOS_DIR

cmd /c "make.bat %1 %2 %3 %4 %5 %6"

GOTO end

:: The variable TRESOS_DIR was not specified
:missing_path_names_TRESOS_DIR
ECHO.
ECHO    The variable TRESOS_DIR was not set correctly.
ECHO    Please specify this variable manually, by editing
ECHO    the batch file 'launch.bat'.
ECHO.
pause
GOTO end

:end
