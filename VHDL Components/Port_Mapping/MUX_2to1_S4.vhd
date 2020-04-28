----------------------------------------------------------------------------------
--	EECE'22 - Team (12)
-- Engineer: Hesham Khaled
-- 
-- Create Date:    20:13:22 02/27/2020  
-- Module Name:    Port_Mapping
-- Project Name:   16-Bit Harvard Architecture CPU
-- Target Devices: Spartan 6 - TQG144
-- Description:    A VHDL File for CPU's wire mapping source code
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity MUX_2to1_S4 is

		PORT(
			  Sel_4: in std_logic;
			  MUX_0: in std_logic_vector (2 downto 0);
			  MUX_1: in std_logic_vector (2 downto 0);
			  MUX_R: out std_logic_vector (2 downto 0)
			);
end MUX_2to1_S4;

architecture Behavioral of MUX_2to1_S4 is
begin

process (Sel_4) is
begin
		if (Sel_4 = '0') then
			MUX_R <= MUX_0;
			
		elsif (Sel_5 = '1') then
			MUX_R <= MUX_1;
		end if;
end process;


end Behavioral;

