/*
 *----------------------------------------------------------------------
 *    micro T-Kernel 3.00.03.B0
 *
 *    Copyright (C) 2006-2021 by Ken Sakamura.
 *    This software is distributed under the T-License 2.2.
 *----------------------------------------------------------------------
 *
 *    Released by TRON Forum(http://www.tron.org) at 2021/01.
 *
 *----------------------------------------------------------------------
 */

#include <tk/tkernel.h>
#include <kernel.h>

#ifdef NUCLEO_L476

/*
 *	power_save.c (Nucleo-64 STM32L476)
 *	Power-Saving Function
 */

#include "sysdepend.h"

/*
 * Switch to power-saving mode
 */
EXPORT void low_pow( void )
{
}

/*
 * Move to suspend mode
 */
EXPORT void off_pow( void )
{
}


#endif /* NUCLEO_L476 */
