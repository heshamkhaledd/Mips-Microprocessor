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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_1242562249;
char *IEEE_P_3620187407;
char *IEEE_P_3499444699;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    ieee_p_1242562249_init();
    work_a_0832606739_3212880686_init();
    work_a_3853510154_3212880686_init();
    work_a_2615964831_3212880686_init();
    work_a_1632567566_3212880686_init();
    work_a_3219856015_3212880686_init();
    work_a_3430011751_3212880686_init();
    work_a_1903047403_3212880686_init();
    work_a_2742037743_3212880686_init();
    work_a_3875023161_3212880686_init();
    work_a_1162141691_3212880686_init();
    work_a_1379912632_3212880686_init();
    work_a_3528888050_3212880686_init();
    work_a_3957043767_3212880686_init();
    work_a_1975629768_3212880686_init();
    work_a_3020634284_3212880686_init();
    work_a_0111074436_3212880686_init();
    work_a_2105898880_3212880686_init();
    work_a_0556118578_3212880686_init();
    work_a_3415491719_3212880686_init();
    work_a_2578365841_2372691052_init();


    xsi_register_tops("work_a_2578365841_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");

    return xsi_run_simulation(argc, argv);

}
