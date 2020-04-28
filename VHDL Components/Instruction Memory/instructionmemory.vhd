----------------------------------------------------------------------------------
--	EECE'22 - Team (12)
-- Engineer: Aya Mohamed
-- 
-- Create Date:    19:09:18 02/18/2020 
-- Module Name:    Instruction Memory
-- Project Name:   16-Bit Harvard Architecture CPU
-- Target Devices: Spartan 6 - TQG144
-- Description:    A VHDL File for the Instruction Memory source code
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;


entity Instruction_Memory is
    Port (    
				 Read_Address : in  std_logic_vector (15 downto 0);  --Instruction Address Location
             Instruction :  out  STD_LOGIC_VECTOR (15 downto 0)   --The Current Instruction
				 );
end Instruction_Memory;

architecture Behavioral of Instruction_Memory is


		type Instruction_Memory is array (0 to 65535) of std_logic_vector(15 downto 0);   --An Array of 2^12 Locations 
		
		constant IM_Data: Instruction_Memory:=(			 			"1110000000000000",
"0000001001001001",
"0000010010010001",
"0000011011011001",
"0000100100100001",
"0000101101101001",
"0100011011000001",
"0100001001000101",
"0100010010000101",
"1110000000000000",
"0000101001101000",
"0000010011010001",
"1001010100000001",
"1011000000001001",
"0010101000000000",
"1111000000000000",



															others => "1110000000000000"
															);
begin

process(Read_Address) 
begin
			
			Instruction <= IM_Data(to_integer(unsigned(Read_Address)));
end process;
end Behavioral;