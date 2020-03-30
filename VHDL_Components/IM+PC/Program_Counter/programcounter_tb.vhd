--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:17:31 02/17/2020
-- Design Name:   
-- Module Name:   C:/Users/Aya Ahmed/programcounter/programcounter_tb.vhd
-- Project Name:  programcounter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: programcounter
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
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
 
ENTITY programcounter_tb IS
END programcounter_tb;
 
ARCHITECTURE behavior OF programcounter_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT programcounter
    PORT(
         programcounterin : IN  std_logic_vector(15 downto 0);
         programcounterout : OUT  std_logic_vector(15 downto 0);
         clk : IN  std_logic;
         rst : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal programcounterin : std_logic_vector(15 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal programcounterout : std_logic_vector(15 downto 0);

   -- Clock period definitions 
   
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: programcounter PORT MAP (
          programcounterin => programcounterin,
          programcounterout => programcounterout,
          clk => clk,
          rst => rst
        );

   -- Clock process definitions
  
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
   	


      -- insert stimulus here 
      clk<='0';
		rst<='0';
  PROGRAMCOUNTERIN<= "1000000000000000";
	WAIT FOR 100 ns;
	clk<='1';
		rst<='0';
	 PROGRAMCOUNTERIN<= x"0004";
	WAIT FOR 100 ns;
	clk<='0';
		rst<='0';
 PROGRAMCOUNTERIN<= x"0008";
	WAIT FOR 100 ns;
	clk<='1';
		rst<='0';
 PROGRAMCOUNTERIN <=x"000c";
	WAIT FOR 100 ns;
	clk<='0';
		rst<='1';
 PROGRAMCOUNTERIN <= x"FFF0";
WAIT FOR 100 ns;
   end process;

END;
