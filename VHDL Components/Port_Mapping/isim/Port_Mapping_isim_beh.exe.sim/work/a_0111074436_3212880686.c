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
static const char *ng0 = "D:/College Projects/Microprocessors/Mips-Microprocessor/VHDL Components/Port_Mapping/PC_MUX4to1.vhd";



static void work_a_0111074436_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB10;

LAB11:    t1 = (unsigned char)0;

LAB12:    if (t1 != 0)
        goto LAB8;

LAB9:    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB15;

LAB16:    t1 = (unsigned char)0;

LAB17:    if (t1 != 0)
        goto LAB13;

LAB14:    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB20;

LAB21:    t1 = (unsigned char)0;

LAB22:    if (t1 != 0)
        goto LAB18;

LAB19:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t2 = (t0 + 2044);
    t6 = (t2 + 32U);
    t9 = *((char **)t6);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);

LAB3:    t2 = (t0 + 2000);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 776U);
    t9 = *((char **)t2);
    t2 = (t0 + 2044);
    t10 = (t2 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB5:    t2 = (t0 + 684U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB7;

LAB8:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 868U);
    t9 = *((char **)t2);
    t2 = (t0 + 2044);
    t10 = (t2 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB10:    t2 = (t0 + 684U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB12;

LAB13:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 960U);
    t9 = *((char **)t2);
    t2 = (t0 + 2044);
    t10 = (t2 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB15:    t2 = (t0 + 684U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB17;

LAB18:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1052U);
    t9 = *((char **)t2);
    t2 = (t0 + 2044);
    t10 = (t2 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB20:    t2 = (t0 + 684U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB22;

}


extern void work_a_0111074436_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0111074436_3212880686_p_0};
	xsi_register_didat("work_a_0111074436_3212880686", "isim/Port_Mapping_isim_beh.exe.sim/work/a_0111074436_3212880686.didat");
	xsi_register_executes(pe);
}
