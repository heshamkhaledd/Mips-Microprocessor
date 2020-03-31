----------------------------------------------------------------------------------
--  EECE'22 - Team (12)
-- Engineer: Yahya Hamdy
--
-- Create Date:	 19:09:18 02/18/2020
-- Module Name:    PC_Plus1
-- Project Name:   16-Bit Harvard Architecture CPU
-- Target Devices: Spartan 6 - TQG144
-- Description:    A VHDL File for CPU's wire mapping source code
----------------------------------------------------------------------------------
 library ieee;
 use ieee.std_logic_1164.all;  
 use IEEE.STD_LOGIC_UNSIGNED.ALL;
 
 
entity PC_ADDER1 is
port (
       PC_current : in std_logic_vector (15 downto 0);
       PC_Plus1 : out std_logic_vector (15 downto 0)
		 );
end PC_ADDER1;
 
architecture Behavioral of PC_ADDER1 is
begin
 
Process (PC_current)
 
begin
 
			PC_Plus1 <= PC_current + 1;
 
end Process;
 
 
end Behavioral;