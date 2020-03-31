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
use ieee.numeric_std.all;


entity Sign_Extension_2 is
	port (
			InsBits_2 : in std_logic_vector (11 downto 0);
			SignExt_2:  out std_logic_vector (15 downto 0)
			);
end Sign_Extension_2;

architecture Behavioral of Sign_Extension_2 is
begin

process (InsBits_2) is
begin

SignExt_2 <= std_logic_vector(resize(unsigned(InsBits_2), 16));

end process;


end Behavioral;