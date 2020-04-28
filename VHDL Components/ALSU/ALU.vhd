----------------------------------------------------------------------------------
--	EECE'22 - Team (12)
-- Engineer: Youssef Galal
-- 
-- Create Date:    19:09:18 02/18/2020 
-- Design Name: 	16-bit ALSU that has 8 operations
-- Module Name:    ALU - Behavioral 
-- Project Name:  
-- Target Devices: Spartan 6 - TQG144
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_unsigned.all; --To use (+,-,=) operators


--use IEEE.std_logic_arith.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ALU is
	port(
	ALUA : in std_logic_vector(15 downto 0);
	ALUB : in std_logic_vector(15 downto 0);
	ALUR : out std_logic_vector(15 downto 0);
	ZF   : out std_logic;
	operation : in std_logic_vector(2 downto 0)
	);
end ALU;
------------------------------------------------------
--Entity description: 
--	ALUA is our first 16-bit input
-- ALUB is our second 16-bit input
-- ALUR is our 16-bit output
-- Operation is a 3-bit input used to determine the operation
-- ZF is the Zero Flag: when ALUR = 0x0000, ZF=1 
------------------------------------------------------


architecture Behavioral of ALU is
	signal ALUR_signal : std_logic_vector(15 downto 0); -- signal that is associated with the result
	signal ZF_signal : std_logic;								 -- signal that is associated with the zero flag
begin
	
		process(operation,ALUA,ALUB,ALUR_signal,ZF_signal)
			 -- This process handles the operations and is triggered by:
			 -- 1-The 3-bit operation. 2-The inputs. 3-The result and the zero flag signals
			begin

				case operation is 
					when "000" => ALUR_signal <= (ALUA + ALUB); 		-- operation code 000 does the addition operation
					when "001" => ALUR_signal <= (ALUA - ALUB); 		-- operation code 001 does the subtraction operation
					when "010" => ALUR_signal <= (ALUA AND ALUB);	-- operation code 010 does the bitwise and operation
					when "011" => ALUR_signal <= (ALUA OR ALUB);		-- operation code 011 does the bitwise or operation
					when "100" => ALUR_signal <= (ALUA NOR ALUB);   -- operation code 100 does the bitwise NOR operation
					when "101" => ALUR_signal <= (ALUA XOR ALUB);	-- operation code 101 does the bitwise XOR operation
					when "110" => ALUR_signal <= (ALUA(14 downto 0) & '0') ;
						-- operation code 110 does the logical shift left operation
						-- ex: ALUA = [1(01010101010101]0) , 
						--this line takes what is inside the braces and concates 0 on the right
						-- output = (010101010101010)0
					when "111" => ALUR_signal <= ('0' & ALUA(15 downto 1)  );
						-- operation 111 does the logical shift right operation
						-- same example, this lane takes what is inside the [] and concates 0 on the left
						-- output = 0[101010101010101]
					
					when others=> ALUR <= "0000000000000001";
						-- std_logic type has more 6 values excluding 1 and 0,
						-- so "others statement" must be used to cover all conditions.
						-- I used ALUR = 0x0001 as a default value but it can be any value except 0.
					
				end case;	
					-- This is the block that controls the zero flag
				if ALUR_signal = 0 then
						ZF_signal <= '1'; -- the result is 0 so the zero flag must be 1 
				else 
						ZF_signal <= '0'; 
				end if;
				
	ALUR <= ALUR_signal; --assigning the signal to the output port
	ZF <= ZF_signal;
	end process;

end Behavioral;

