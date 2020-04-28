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
static const char *ng0 = "D:/College Projects/Microprocessors/Mips-Microprocessor/VHDL Components/Port_Mapping/PC_ADDER1.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_3528888050_3212880686_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t2 = (t0 + 2928U);
    t4 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t1, t3, t2, 1);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t7 = (1U * t6);
    t8 = (16U != t7);
    if (t8 == 1)
        goto LAB2;

LAB3:    t9 = (t0 + 1584);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 16U);
    xsi_driver_first_trans_fast_port(t9);
    t2 = (t0 + 1540);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(16U, t7, 0);
    goto LAB3;

}


extern void work_a_3528888050_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3528888050_3212880686_p_0};
	xsi_register_didat("work_a_3528888050_3212880686", "isim/Port_Mapping_isim_beh.exe.sim/work/a_3528888050_3212880686.didat");
	xsi_register_executes(pe);
}
