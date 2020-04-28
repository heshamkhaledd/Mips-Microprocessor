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
use IEEE.std_logic_unsigned.all;

entity Program_Counter is
    Port ( 
			  Program_Counter_IN:   in   std_logic_vector (15 downto 0);
           Program_Counter_OUT:  out  std_logic_vector (15 downto 0);
           clk: 						in   std_logic;
           Reset: 					in   std_logic
			  );
end Program_Counter;

architecture Behavioral of Program_Counter is
signal PC_OUT : std_logic_vector(15 downto 0) := "0000000000000000";
		

begin
	Program_Counter_OUT<=PC_OUT;
		process(clk , Reset, PC_OUT)
		begin
		
		if (Reset = '1') then
		PC_OUT<= "0000000000000000";
		
		elsif rising_edge(clk) then	
		PC_OUT <= Program_Counter_IN;
		
		else 
	
end if;
end process;
end Behavioral;



