/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xb869381d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/hp/Desktop/report/final_project/final_project.vhd";



static void work_a_3838344542_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    int t15;
    int t16;

LAB0:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 844U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB9;

LAB10:    t3 = (unsigned char)0;

LAB11:    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t1 = (t0 + 2392);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = t9;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t1 = (t0 + 2428);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = t9;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t4 = (t9 == 0);
    if (t4 == 1)
        goto LAB21;

LAB22:    t3 = (unsigned char)0;

LAB23:    if (t3 != 0)
        goto LAB18;

LAB20:
LAB19:    t1 = (t0 + 2276);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2320);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2356);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1328U);
    t5 = *((char **)t1);
    t9 = *((int *)t5);
    t1 = (t0 + 2320);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t10 = *((char **)t8);
    *((int *)t10) = t9;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t1 = (t0 + 2356);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = t9;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB7:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1328U);
    t6 = *((char **)t2);
    t9 = *((int *)t6);
    t13 = (t9 == 0);
    if (t13 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t15 = (t9 - 1);
    t1 = (t0 + 2320);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = t15;
    xsi_driver_first_trans_fast(t1);

LAB13:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 == 0);
    if (t3 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t1 = (t0 + 2356);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((int *)t8) = t9;
    xsi_driver_first_trans_fast(t1);

LAB16:    goto LAB3;

LAB9:    t2 = (t0 + 868U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB11;

LAB12:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2320);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t10 = (t8 + 40U);
    t14 = *((char **)t10);
    *((int *)t14) = 59;
    xsi_driver_first_trans_fast(t2);
    goto LAB13;

LAB15:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1420U);
    t5 = *((char **)t1);
    t15 = *((int *)t5);
    t16 = (t15 - 1);
    t1 = (t0 + 2356);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t10 = *((char **)t8);
    *((int *)t10) = t16;
    xsi_driver_first_trans_fast(t1);
    goto LAB16;

LAB18:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2464);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 2320);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2356);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB21:    t1 = (t0 + 1420U);
    t5 = *((char **)t1);
    t15 = *((int *)t5);
    t11 = (t15 == 0);
    t3 = t11;
    goto LAB23;

}


extern void work_a_3838344542_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3838344542_3212880686_p_0};
	xsi_register_didat("work_a_3838344542_3212880686", "isim/final_project_isim_beh.exe.sim/work/a_3838344542_3212880686.didat");
	xsi_register_executes(pe);
}
