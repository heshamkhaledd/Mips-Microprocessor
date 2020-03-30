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

entity BUS_MUX4to1 is

	PORT(
			Sel_6:       in std_logic;
			Sel_7:       in std_logic;
			MUX_0: 	    in std_logic_vector (15 downto 0);
			MUX_1:       in std_logic_vector (15 downto 0);
			MUX_2:       in std_logic_vector (15 downto 0);
			MUX_3:       in std_logic_vector (15 downto 0);
			MUX_R:       out std_logic_vector (15 downto 0) 
			);
end BUS_MUX4to1;

architecture Behavioral of BUS_MUX4to1 is

begin

process (Sel_6,Sel_7) is
begin

		if 	(Sel_6 = '0' AND Sel_7 = '0') then
					MUX_R <= MUX_0;
				
		elsif (Sel_6 = '0' AND Sel_7 = '1') then
					MUX_R <= MUX_1;
					
		elsif (Sel_6 = '1' AND Sel_7 = '0') then
					MUX_R <= MUX_2;
					
		elsif (Sel_6 = '1' AND Sel_7 = '1') then
					MUX_R <= MUX_3;
		end if;
					
end process;
end Behavioral;

