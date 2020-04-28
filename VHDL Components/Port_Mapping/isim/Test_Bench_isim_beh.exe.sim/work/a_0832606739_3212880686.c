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
static const char *ng0 = "D:/College Projects/Microprocessors/Mips-Microprocessor/VHDL Components/ALSU/ALU.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1306069469_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_2546418145_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t26[16];
    char t42[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t43;

LAB0:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4072);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB12:    t5 = (t0 + 4075);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB13:    t8 = (t0 + 4078);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB14:    t11 = (t0 + 4081);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB15:    t14 = (t0 + 4084);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB16:    t17 = (t0 + 4087);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB8;

LAB17:    t20 = (t0 + 4090);
    t22 = xsi_mem_cmp(t20, t2, 3U);
    if (t22 == 1)
        goto LAB9;

LAB18:    t23 = (t0 + 4093);
    t25 = xsi_mem_cmp(t23, t2, 3U);
    if (t25 == 1)
        goto LAB10;

LAB19:
LAB11:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 4096);
    t3 = (t0 + 2080);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t1 = (t0 + 3996U);
    t35 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t2, t1, 0);
    if (t35 != 0)
        goto LAB37;

LAB39:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 2116);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t5 = (t3 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB38:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t1 = (t0 + 2080);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t35 = *((unsigned char *)t2);
    t1 = (t0 + 2152);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t35;
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 2000);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(65, ng0);
    t27 = (t0 + 592U);
    t28 = *((char **)t27);
    t27 = (t0 + 3932U);
    t29 = (t0 + 684U);
    t30 = *((char **)t29);
    t29 = (t0 + 3948U);
    t31 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t26, t28, t27, t30, t29);
    t32 = (t26 + 12U);
    t33 = *((unsigned int *)t32);
    t34 = (1U * t33);
    t35 = (16U != t34);
    if (t35 == 1)
        goto LAB21;

LAB22:    t36 = (t0 + 2044);
    t37 = (t36 + 32U);
    t38 = *((char **)t37);
    t39 = (t38 + 40U);
    t40 = *((char **)t39);
    memcpy(t40, t31, 16U);
    xsi_driver_first_trans_fast(t36);
    goto LAB2;

LAB4:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3932U);
    t3 = (t0 + 684U);
    t5 = *((char **)t3);
    t3 = (t0 + 3948U);
    t6 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t26, t2, t1, t5, t3);
    t8 = (t26 + 12U);
    t33 = *((unsigned int *)t8);
    t34 = (1U * t33);
    t35 = (16U != t34);
    if (t35 == 1)
        goto LAB23;

LAB24:    t9 = (t0 + 2044);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 16U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB5:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3932U);
    t3 = (t0 + 684U);
    t5 = *((char **)t3);
    t3 = (t0 + 3948U);
    t6 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t8 = (t26 + 12U);
    t33 = *((unsigned int *)t8);
    t34 = (1U * t33);
    t35 = (16U != t34);
    if (t35 == 1)
        goto LAB25;

LAB26:    t9 = (t0 + 2044);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 16U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3932U);
    t3 = (t0 + 684U);
    t5 = *((char **)t3);
    t3 = (t0 + 3948U);
    t6 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t8 = (t26 + 12U);
    t33 = *((unsigned int *)t8);
    t34 = (1U * t33);
    t35 = (16U != t34);
    if (t35 == 1)
        goto LAB27;

LAB28:    t9 = (t0 + 2044);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 16U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB7:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3932U);
    t3 = (t0 + 684U);
    t5 = *((char **)t3);
    t3 = (t0 + 3948U);
    t6 = ieee_p_2592010699_sub_1306069469_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t8 = (t26 + 12U);
    t33 = *((unsigned int *)t8);
    t34 = (1U * t33);
    t35 = (16U != t34);
    if (t35 == 1)
        goto LAB29;

LAB30:    t9 = (t0 + 2044);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 16U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB8:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3932U);
    t3 = (t0 + 684U);
    t5 = *((char **)t3);
    t3 = (t0 + 3948U);
    t6 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t8 = (t26 + 12U);
    t33 = *((unsigned int *)t8);
    t34 = (1U * t33);
    t35 = (16U != t34);
    if (t35 == 1)
        goto LAB31;

LAB32:    t9 = (t0 + 2044);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 16U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB9:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t33 = (15 - 14);
    t34 = (t33 * 1U);
    t41 = (0 + t34);
    t1 = (t2 + t41);
    t5 = ((IEEE_P_2592010699) + 2332);
    t6 = (t42 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 14;
    t8 = (t6 + 4U);
    *((int *)t8) = 0;
    t8 = (t6 + 8U);
    *((int *)t8) = -1;
    t4 = (0 - 14);
    t43 = (t4 * -1);
    t43 = (t43 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t43;
    t3 = xsi_base_array_concat(t3, t26, t5, (char)97, t1, t42, (char)99, (unsigned char)2, (char)101);
    t43 = (15U + 1U);
    t35 = (16U != t43);
    if (t35 == 1)
        goto LAB33;

LAB34:    t8 = (t0 + 2044);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t3, 16U);
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB10:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t33 = (15 - 15);
    t34 = (t33 * 1U);
    t41 = (0 + t34);
    t1 = (t2 + t41);
    t5 = ((IEEE_P_2592010699) + 2332);
    t6 = (t42 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 15;
    t8 = (t6 + 4U);
    *((int *)t8) = 1;
    t8 = (t6 + 8U);
    *((int *)t8) = -1;
    t4 = (1 - 15);
    t43 = (t4 * -1);
    t43 = (t43 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t43;
    t3 = xsi_base_array_concat(t3, t26, t5, (char)99, (unsigned char)2, (char)97, t1, t42, (char)101);
    t43 = (1U + 15U);
    t35 = (16U != t43);
    if (t35 == 1)
        goto LAB35;

LAB36:    t8 = (t0 + 2044);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    memcpy(t14, t3, 16U);
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB20:;
LAB21:    xsi_size_not_matching(16U, t34, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(16U, t34, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(16U, t34, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(16U, t34, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(16U, t34, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(16U, t34, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(16U, t43, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(16U, t43, 0);
    goto LAB36;

LAB37:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 2116);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB38;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/Test_Bench_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
