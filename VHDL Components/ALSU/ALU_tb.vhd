--------------------------------------------------------------------------------
-- Company: 
-- Engineer: Youssef Galal
--
-- Create Date:   20:53:44 02/18/2020
-- Design Name:   
-- Module Name:   
-- Project Name:  ALU
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ALU
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments: (((((((((((((((GO TO LINE 84 )))))))))))))))))))
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY ALU_tb IS
END ALU_tb;
 
ARCHITECTURE behavior OF ALU_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ALU
    PORT(
         ALUA : IN  std_logic_vector(15 downto 0);
         ALUB : IN  std_logic_vector(15 downto 0);
         ALUR : OUT  std_logic_vector(15 downto 0);
         ZF : OUT  std_logic;
         operation : IN  std_logic_vector(2 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal ALUA : std_logic_vector(15 downto 0) := (others => '0');
   signal ALUB : std_logic_vector(15 downto 0) := (others => '0');
   signal operation : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal ALUR : std_logic_vector(15 downto 0);
   signal ZF : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ALU PORT MAP (
          ALUA => ALUA,
          ALUB => ALUB,
          ALUR => ALUR,
          ZF => ZF,
          operation => operation
        );

 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

     operation <= "000"; 				-- ALUA=1 , ALUB=1 
	  ALUA <= "0000000000000001";		--  ALUA + ALUB 
	  ALUB <= "0000000000000001";		-- Expected output = 2
	  wait for 100 ns;
	  operation <= "001";				--	ALUA= 1 , ALUB =1 
	  ALUA <= "0000000000000001";		--	ALUA - ALUB, expected output = 0
	  ALUB <= "0000000000000001";		--	Note: Zero flag must be set to '1' 
	  wait for 100 ns;
     operation <= "010";				--  ALUA and ALUB
	  ALUA <= "1000000010000011";		-- expected output = "1000000000000001"
	  ALUB <= "1000000000000001";		--
	  wait for 100 ns;
	  operation <= "011";
	  ALUA <= "0001000001010101";    -- ALUA or ALUB
	  ALUB <= "0100010100000101";		-- expected output = "1010101010101010"
	  wait for 100 ns;
	  operation <= "100";
	  ALUA <= "0000000011111101";    -- ALUA nor ALUB  
	  ALUB <= "0000000011000011";		-- expected output = "1111111100000000"
	  wait for 100 ns;
	  operation <= "101";				-- ALUA xor ALUN
	  ALUA <= "1111111111111111";		-- expected output = "0101010101010101" 
	  ALUB <= "1010101010101010";
	  wait for 100 ns;
     operation <= "110";				-- ALUA << 1 
	  ALUA <= "1000000000000101";		-- expected output = "0000000000001010"
	  ALUB <= "0000000000000001";		-- we don't care about ALUB here
	  wait for 100 ns;
     operation <= "111";				-- ALUA >> 1
	  ALUA <= "0000000001010101";		-- expected output = "0000000000101010"
	  ALUB <= "0000000000000001";		-- we don't care about ALUB here
	  wait for 100 ns;	  
												

      wait;
   end process;

END;
