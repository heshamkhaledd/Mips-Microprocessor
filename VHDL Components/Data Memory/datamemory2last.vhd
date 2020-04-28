----------------------------------------------------------------------------------
--	EECE'22 - Team (12)
-- Engineer: Aya Mohamed , May Sherif
-- 
-- Create Date:    19:09:18 02/18/2020 
-- Module Name:    Data Memory
-- Project Name:   16-Bit Harvard Architecture CPU
-- Target Devices: Spartan 6 - TQG144
-- Description:    A VHDL File for the Data Memory source code
----------------------------------------------------------------------------------

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
 
entity Data_Memory is
    Port ( 
			  MAR : 		 in  std_logic_vector (11 downto 0);       --MAR:      	The Address of The Memory Location to Read or Write
           MDR : 		 in  std_logic_vector (15 downto 0);       --MDR:      	The Data to be Written in Memory
           MWE : 		 in  std_logic;                            --WE:      	Write Enable Signal to Write in Memory
           clk : 		 in  std_logic;                            --clk:     	Clock signal to only work when clock is high            
           Readdata : out std_logic_vector (15 downto 0)        --Readdata: 	The data read from memory
			  ); 
			  
end Data_Memory;
architecture Behavioral of Data_Memory is

		type dataMemory is array (0 to 4095) of std_logic_vector(15 downto 0);
		
		signal DM : dataMemory:=((others=> (others=>'0')));      --Initializing the Data Memory Data with zeros
		
begin
	
--To Write the Data given in MDR at the Memory Address on MAR bus, Only at clk Rising Edge and WE=1

process (clk,MWE)
begin 
	if (rising_edge(clk)and MWE='1') then					--If clk is at Rising Edge and the WE signal is active, data is written in memory
	DM(to_integer(unsigned(MAR)))<=MDR;
	end if;

end process;

	Readdata<=DM(to_integer(unsigned(MAR))); --To have the Data Written as an output on ReadData
	
end Behavioral;