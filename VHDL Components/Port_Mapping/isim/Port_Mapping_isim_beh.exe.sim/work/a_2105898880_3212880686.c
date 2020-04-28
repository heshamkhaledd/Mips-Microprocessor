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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/College Projects/Microprocessors/Mips-Microprocessor/VHDL Components/Port_Mapping/Sign_Extension2.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_2045698577_1035706684(char *, char *, char *, char *, int );


static void work_a_2105898880_3212880686_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t2 = (t0 + 2948U);
    t4 = ieee_p_1242562249_sub_2045698577_1035706684(IEEE_P_1242562249, t1, t3, t2, 16);
    t5 = (t0 + 1584);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 16U);
    xsi_driver_first_trans_fast_port(t5);
    t2 = (t0 + 1540);
    *((int *)t2) = 1;

LAB1:    return;
}


extern void work_a_2105898880_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2105898880_3212880686_p_0};
	xsi_register_didat("work_a_2105898880_3212880686", "isim/Port_Mapping_isim_beh.exe.sim/work/a_2105898880_3212880686.didat");
	xsi_register_executes(pe);
}
