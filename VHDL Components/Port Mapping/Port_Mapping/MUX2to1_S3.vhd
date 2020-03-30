----------------------------------------------------------------------------------
--	EECE'22 - Team (12)
-- Engineer: Hesham Khaled
-- 
-- Create Date:    12:05:28 03/02/2020  
-- Module Name:    Port_Mapping
-- Project Name:   16-Bit Harvard Architecture CPU
-- Target Devices: Spartan 6 - TQG144
-- Description:    A VHDL File for CPU's wire mapping source code
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity MUX2to1_S3 is
	PORT(
			  Sel_3: in std_logic;
			  MUX_0: in std_logic_vector (15 downto 0);
			  MUX_1: in std_logic_vector (15 downto 0);
			  MUX_R: out std_logic_vector (15 downto 0)
			);
end MUX2to1_S3;

architecture Behavioral of MUX2to1_S3 is
begin

process (Sel_3) is
begin
		if (Sel_3 = '0') then
			MUX_R <= MUX_0;
			
		elsif (Sel_3 = '1') then
			MUX_R <= MUX_1;
		end if;
end process;
end Behavioral;

