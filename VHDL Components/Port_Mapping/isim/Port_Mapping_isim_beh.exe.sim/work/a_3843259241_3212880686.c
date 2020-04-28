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
static const char *ng0 = "D:/College Projects/Microprocessors/Mips-Microprocessor/VHDL Components/Port_Mapping/Port_Mapping.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3843259241_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(279, ng0);
    t2 = (t0 + 568U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 568U);
    t1 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t1 != 0)
        goto LAB8;

LAB9:
LAB3:    t2 = (t0 + 4760);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(280, ng0);
    t4 = (t0 + 2340U);
    t8 = *((char **)t4);
    t4 = (t0 + 4804);
    t9 = (t4 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t8, 16U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 1144U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(282, ng0);
    t4 = (t0 + 776U);
    t5 = *((char **)t4);
    t4 = (t0 + 4840);
    t8 = (t4 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t5, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

}


extern void work_a_3843259241_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3843259241_3212880686_p_0};
	xsi_register_didat("work_a_3843259241_3212880686", "isim/Port_Mapping_isim_beh.exe.sim/work/a_3843259241_3212880686.didat");
	xsi_register_executes(pe);
}
