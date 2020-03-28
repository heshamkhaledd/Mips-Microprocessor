----------------------------------------------------------------------------------
-- EECE'22 - Team (12)
-- Engineer: Hesham Khaled & Youssef Taha
-- 
-- Create Date:    14:03:27 02/24/2020 
-- Module Name:    Control_Unit
-- Project Name:   16-Bit Harvard Architecture CPU
-- Description: 	 A VHDL File for the Control Unit Source Code
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;



entity Control_Unit is
Port( 
		--Inputs
		OP_CODE: in std_logic_vector (3 downto 0);
		FUNC: in std_logic_vector (2 downto 0);
		----------------------------------------
		--Outputs
		OUTLD: out std_logic;
		MWE: out std_logic;
		ALU: out std_logic_vector (2 downto 0);
		S8: out std_logic;
		S7: out std_logic;
		S6: out std_logic;
		WE: out std_logic;
		S9: out std_logic;
		S1: out std_logic;
		S2: out std_logic;
		S3: out std_logic;
		S5: out std_logic;
		S4: out std_logic
		);
end Control_Unit;

architecture Behavioral of Control_Unit is
begin

-- CPU Instructions:
-- ADD >>> Add
-- SUB >>> Subtract
-- AND >>> Bitwise AND
-- OR >>> Bitwise OR
-- NOR >>> Bitwise NOR
-- XOR >>> Bitwise XOR
-- SLL >>> Logical Shift Left
-- SRL >>> Logical Shift Right
-- ADDI >>> Add Immediate
-- ANDI >>> Bitwise AND Immediate
-- ORI >>> Bitwise OR Immediate
-- LW >>> Load Word
-- SW >>> Store Word
-- J >>> Jump to Address
-- JAL >>> Jump and Link
-- JR >>> Jump to Address in Register
-- BEQ >>> Branch if Equal
-- BNE >>> Branch if not Equal
-- IN >>> Store the Input Value
-- OUT >>> Output a Register Value
-- NOP >>> No Operation
-- HLT >>> Terminate

--Process that generates the appropriate control signals for different instructions.
process (OP_CODE, FUNC)
begin
		
		case OP_CODE is
		when "0000"  => 
		
							case FUNC is
							
							-- ADD --
							when "000" =>
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "000";
							S8 <= '0';
							S7 <= '1';
							S6 <= '0';
							WE <= '1';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '1';
							
							--SUB--
							when "001" =>
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "001";
							S8 <= '0';
							S7 <= '1';
							S6 <= '0';
							WE <= '1';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '1';
							
							--AND--
							when "010" =>
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "010";
							S8 <= '0';
							S7 <= '1';
							S6 <= '0';
							WE <= '1';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '1';
							
							--OR--
							when "011" =>
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "011";
							S8 <= '0';
							S7 <= '1';
							S6 <= '0';
							WE <= '1';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '1';
							
							--NOR--
							when "100" =>
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "100";
							S8 <= '0';
							S7 <= '1';
							S6 <= '0';
							WE <= '1';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '1';
							
							--XOR--
							when "101" =>
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "101";
							S8 <= '0';
							S7 <= '1';
							S6 <= '0';
							WE <= '1';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '1';
							
							--SLL--
							when "110" =>
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "110";
							S8 <= '0';
							S7 <= '1';
							S6 <= '0';
							WE <= '1';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '1';
							
							--SRL--
							when "111" =>
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "111";
							S8 <= '0';
							S7 <= '1';
							S6 <= '0';
							WE <= '1';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '1';
							
							
							when others =>
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "000";
							S8 <= '0';
							S7 <= '0';
							S6 <= '0';
							WE <= '0';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '0';
							end case;
							when "0100" =>
				
							--ADDI--
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "000";
							S8 <= '1';
							S7 <= '1';
							S6 <= '0';
							WE <= '1';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '0';
				when "0101" =>
							
							--ANDI--
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "010";
							S8 <= '1';
							S7 <= '1';
							S6 <= '0';
							WE <= '1';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '0';
				when "0110" =>
				
							--ORI--
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "011";
							S8 <= '1';
							S7 <= '1';
							S6 <= '0';
							WE <= '1';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '0';
				when "0111" =>
				
							--LW--
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "000";
							S8 <= '0';
							S7 <= '0';
							S6 <= '0';
							WE <= '1';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '0';
				when "1000" =>
				
							--SW--
							OUTLD <= '0';
							MWE <= '1';
							ALU <= "000";
							S8 <= '0';
							S7 <= '0';
							S6 <= '0';
							WE <= '0';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '0';
				when "1011" =>
				
							--J--
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "000";
							S8 <= '0';
							S7 <= '0';
							S6 <= '0';
							WE <= '0';
							S9 <= '0';
							S1 <= '0';
							S2 <= '1';
							S3 <= '0';
							S5 <= '0';
							S4 <= '0';
				when "1100" =>
				
							--JAL--
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "000";
							S8 <= '0';
							S7 <= '0';
							S6 <= '0';
							WE <= '1';
							S9 <= '0';
							S1 <= '0';
							S2 <= '1';
							S3 <= '0';
							S5 <= '1';
							S4 <= '0';
				when "0011" =>
				
							--JR--
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "000";
							S8 <= '0';
							S7 <= '0';
							S6 <= '0';
							WE <= '0';
							S9 <= '0';
							S1 <= '1';
							S2 <= '1';
							S3 <= '0';
							S5 <= '0';
							S4 <= '0';
				when "1001" =>
				
							--BEQ--
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "001";
							S8 <= '0';
							S7 <= '0';
							S6 <= '0';
							WE <= '0';
							S9 <= '1';
							S1 <= '1';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '0';
				when "1010" =>
				
							--BNE--
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "001";
							S8 <= '0';
							S7 <= '0';
							S6 <= '0';
							WE <= '0';
							S9 <= '0';
							S1 <= '1';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '0';
				when "0001" =>
				
							--IN--
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "000";
							S8 <= '0';
							S7 <= '1';
							S6 <= '1';
							WE <= '1';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '1';
				when "0010" =>
				
							--OUT--
							OUTLD <= '1';
							MWE <= '0';
							ALU <= "000";
							S8 <= '0';
							S7 <= '0';
							S6 <= '0';
							WE <= '0';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '0';
				when "1110" =>
				
							--NOP--
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "000";
							S8 <= '0';
							S7 <= '0';
							S6 <= '0';
							WE <= '0';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '0';
				when "1111" =>
				
							--HLT--
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "000";
							S8 <= '0';
							S7 <= '0';
							S6 <= '0';
							WE <= '0';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '1';
							S5 <= '0';
							S4 <= '0';
				when others =>
							OUTLD <= '0';
							MWE <= '0';
							ALU <= "000";
							S8 <= '0';
							S7 <= '0';
							S6 <= '0';
							WE <= '0';
							S9 <= '0';
							S1 <= '0';
							S2 <= '0';
							S3 <= '0';
							S5 <= '0';
							S4 <= '0';
			end case;
			end process;
end Behavioral;