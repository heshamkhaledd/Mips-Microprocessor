----------------------------------------------------------------------------------
--	EECE'22 - Team (12)
-- Engineer: Hesham Khaled
-- 
-- Create Date:    11:54:13 03/02/2020  
-- Module Name:    Port_Mapping
-- Project Name:   16-Bit Harvard Architecture CPU
-- Target Devices: Spartan 6 - TQG144
-- Description:    A VHDL File for CPU's wire mapping source code
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity XOR_S9 is
	PORT(
			Zero_F: in std_logic;
			Sel_9:  in std_logic;
			S9_M:   out std_logic
			);
end XOR_S9;

architecture Behavioral of XOR_S9 is
begin

process(Zero_F,Sel_9)
begin

		S9_M <= (Zero_F XOR Sel_9);
		
end process;

end Behavioral;

