/*
 *----------------------------------------------------------------------
 *    micro T-Kernel 3.0 BSP
 *
 *    Copyright (C) 2022 by Ken Sakamura.
 *    This software is distributed under the T-License 2.2.
 *----------------------------------------------------------------------
 *
 *    Released by TRON Forum(http://www.tron.org) at 2022/04.
 *
 *----------------------------------------------------------------------
 */

/*
 *	app_main.c (Renesas Target board for RX65N)
 *	Application main program
 */

#include <tk/tkernel.h>
#include <tm/tmonitor.h>

LOCAL void task_1(INT stacd, void *exinf);
LOCAL ID	tskid_1;
LOCAL T_CTSK	ctsk_1 = {
	.itskpri	= 10,
	.stksz		= 1024,
	.task		= task_1,
	.tskatr		= TA_HLNG | TA_RNG3,
};

LOCAL void task_1(INT stacd, void *exinf)
{
	while(1) {
		out_b(PORTD_PODR, in_b(PORTD_PODR) ^ ((1<<6)|(1<<7)));
		tk_dly_tsk(500);
	}
}

/* usermain関数 */
EXPORT INT usermain(void)
{
,	tm_printf((UB*)"User program started\n");

	tskid_1 = tk_cre_tsk(&ctsk_1);
	tk_sta_tsk(tskid_1, 0);

	tk_slp_tsk(TMO_FEVR);
	return 0;
}
