----------------------------------------------------------------------------------
-- EECE'22 - Team (12)
-- Engineer:       Yahya Hamdy
-- 
-- Create Date:    21:24:25 02/17/2020
-- Module Name:    Register File
-- Project Name:   16-Bit Harvard Architecture CPU
-- Description: 	 A VHDL File for the Register File Source Code
----------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;


entity Register_File is
port ( 
      clk: 		in std_logic;                           --Input clock
      RReg1: 	in std_logic_vector (2 downto 0);     --Output port 1 Address
		RReg2:	in std_logic_vector (2 downto 0);     --Output port 2 Address
		WR: 		in std_logic_vector (2 downto 0);        --Write Register Address
		WD:		in std_logic_vector (15 downto 0);       --Input Data
		WE: 		in std_logic;                             --Write Enable
		RRead1:	out std_logic_vector (15 downto 0);  --Output port 1
		RRead2:  out std_logic_vector (15 downto 0)); --Output port 2
end Register_File;

architecture Behavioral of Register_File is

type Reg_arr is array(0 to 7) of std_logic_vector (15 downto 0); --8*16 Register file
signal RF : Reg_arr;                                             --Register file contents signal

begin

--Reading Process

RRead1 <= RF(to_integer(unsigned(RReg1)));       --Convert std_logic_vector to unsigned integer                 
RRead2 <= RF(to_integer(unsigned(RReg2)));     

--Writing Process
WProcess: process (clk) is 

          begin
			 if rising_edge(clk) then             	 --Check Rising Edge & Write Enable
			 if (WE='1') then 
			 RF(to_integer(unsigned(WR)))<=WD;      --Writing at Register with address "WR"
			 end if;
			 end if;
			 
			 end process;
			 

end Behavioral;

