----------------------------------------------------------------------------------
--	EECE'22 - Team (12)
-- Engineer: Aya Mohamed
-- 
-- Create Date:    19:09:18 02/18/2020 
-- Module Name:    Program Counter
-- Project Name:   16-Bit Harvard Architecture CPU
-- Target Devices: Spartan 6 - TQG144
-- Description:    A VHDL File for the Program Counter source code
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity Program_Counter is
    Port ( 
			  Program_Counter_IN:  in   std_logic_vector (15 downto 0);
           Program_Counter_OUT: out  std_logic_vector (15 downto 0);
           clk: 						in   std_logic;
           Reset: 					in   std_logic
			  );
end Program_Counter;

architecture Behavioral of Program_Counter is

begin
		process(clk , Reset)
		begin
		
		if (Reset = '1') then
		Program_Counter_OUT<= "0000000000000000";
		
		elsif rising_edge(clk) then	
		Program_Counter_OUT <= Program_Counter_IN;
		
		else 
		Program_Counter_OUT<="UUUUUUUUUUUUUUUU";
end if;
end process;
end Behavioral;



