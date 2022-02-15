/******************************************************************************
*
*       Freescale(TM) and the Freescale logo are trademarks of Freescale Semiconductor, Inc.
*       All other product or service names are the property of their respective owners.
*       (C) Freescale Semiconductor, Inc. 2017
*
*       THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
*       BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
*       Freescale Semiconductor, Inc.
*
*       Description: Memory map file
*
*       Note: The implementation that was used is: AUTOSAR_MPC574xG
*       System Generator for AUTOSAR OS/MPC574xG - Version: 4.0 Build 4.0.92
*
********************************************************************************/
/*  --- HOOKS CODE ---  */

#if defined(OSHOOK_START_SEC_CODE)

#undef OSHOOK_START_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSCWPPC)

#pragma section code_type ".oshook"

#elif defined(OSDIABPPC)

#pragma section CODE ".oshook"

#elif defined(OSGHSPPC)

#pragma ghs section text=".oshook"

#else

#error Unknown compiler
#endif /* OSCWPPC */

#elif defined(OSHOOK_STOP_SEC_CODE)

#undef OSHOOK_STOP_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSCWPPC)

#pragma section code_type 

#elif defined(OSDIABPPC)

#pragma section CODE 

#elif defined(OSGHSPPC)

#pragma ghs section text=default

#else

#error Unknown compiler
#endif /* OSCWPPC */

/*  --- APP CODE ---  */

#elif defined(APP_START_SEC_CODE)

#undef APP_START_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSCWPPC)

#pragma section code_type ".appcode"

#elif defined(OSDIABPPC)

#pragma section CODE ".appcode"

#elif defined(OSGHSPPC)

#pragma ghs section text=".appcode"

#else

#error Unknown compiler
#endif /* OSCWPPC */

#elif defined(APP_STOP_SEC_CODE)

#undef APP_STOP_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSCWPPC)

#pragma section code_type 

#elif defined(OSDIABPPC)

#pragma section CODE 

#elif defined(OSGHSPPC)

#pragma ghs section text=default

#else

#error Unknown compiler
#endif /* OSCWPPC */

/*  --- OSVECTORS CODE ---  */

#elif defined(OSVECTORS_START_SEC_CODE)

#undef OSVECTORS_START_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSCWPPC)

#pragma section code_type ".vects"

#elif defined(OSDIABPPC)

#pragma section CODE ".vects"

#elif defined(OSGHSPPC)

OSASM("    .section  \".vects\", \"vax\"    ");
OSASM("    .vle ");

#else

#error Unknown compiler
#endif /* OSCWPPC */

#elif defined(OSVECTORS_STOP_SEC_CODE)

#undef OSVECTORS_STOP_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSCWPPC)

#pragma section code_type

#elif defined(OSDIABPPC)

#pragma section CODE

#elif defined(OSGHSPPC)

OSASM("    .section  \".vletext\", \"vax\"    ");
OSASM("    .vle ");

#else

#error Unknown compiler
#endif /* OSCWPPC */

/*  --- OSVECTORS CODE second core ---  */

#elif defined(OSVECTORS2_START_SEC_CODE)

#undef OSVECTORS2_START_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSCWPPC)

#pragma section code_type ".vects2"

#elif defined(OSDIABPPC)

#pragma section CODE ".vects2"

#elif defined(OSGHSPPC)

OSASM("    .section  \".vects2\", \"vax\"    ");
OSASM("    .vle ");

#else

#error Unknown compiler
#endif /* OSCWPPC */

#elif defined(OSVECTORS2_STOP_SEC_CODE)

#undef OSVECTORS2_STOP_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSCWPPC)

#pragma section code_type

#elif defined(OSDIABPPC)

#pragma section CODE

#elif defined(OSGHSPPC)

OSASM("    .section  \".vletext\", \"vax\"    ");
OSASM("    .vle ");

#else

#error Unknown compiler
#endif /* OSCWPPC */

/*  --- STARTUP CODE second core ---  */

#elif defined(OSSTARTUP2_START_SEC_CODE)

#undef OSSTARTUP2_START_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSCWPPC)

#pragma section code_type ".startup2"

#elif defined(OSDIABPPC)

#pragma section CODE ".startup2"

#elif defined(OSGHSPPC)

OSASM("    .section  \".startup2\", \"vax\"    ");
OSASM("    .vle ");

#else

#error Unknown compiler
#endif /* OSCWPPC */

#elif defined(OSSTARTUP2_STOP_SEC_CODE)

#undef OSSTARTUP2_STOP_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSCWPPC)

#pragma section code_type

#elif defined(OSDIABPPC)

#pragma section CODE

#elif defined(OSGHSPPC)

OSASM("    .section  \".vletext\", \"vax\"    ");
OSASM("    .vle ");

#else

#error Unknown compiler
#endif /* OSCWPPC */

#endif /* OSHOOK_START_SEC_CODE */

