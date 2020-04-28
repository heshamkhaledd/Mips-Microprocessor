----------------------------------------------------------------------------------
--  EECE'22 - Team (12)
-- Engineer: Yahya Hamdy
--
-- Create Date:	 20:13:22 02/27/2020
-- Module Name:    Sign Extension
-- Project Name:   16-Bit Harvard Architecture CPU
-- Target Devices: Spartan 6 - TQG144
-- Description:    A VHDL File for CPU's wire mapping source code
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;


entity Sign_Extension is
	port (
			InsBits : in std_logic_vector (5 downto 0);
			SignExt:  out std_logic_vector (15 downto 0)
			);
end Sign_Extension;

architecture Behavioral of Sign_Extension is
begin

process (InsBits) is
begin

SignExt <= std_logic_vector(resize(unsigned(InsBits), 16));

end process;


end Behavioral;

