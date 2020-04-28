--------------------------------------------------------------------------------
-- Company: 
-- Engineer: Yahya
--
-- Create Date:   23:46:44 02/17/2020
-- Design Name:   Register file
-- Module Name:   D:/Programs/Projects/RegFile/TestBench.vhd
-- Project Name:  RegFile
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: RegFile
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
 
ENTITY TestBench IS
END TestBench;
 
ARCHITECTURE behavior OF TestBench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT RegFile
    PORT(
         clk : IN  std_logic;
         RReg1 : IN  std_logic_vector(2 downto 0);
         RReg2 : IN  std_logic_vector(2 downto 0);
         WR : IN  std_logic_vector(2 downto 0);
         WD : IN  std_logic_vector(15 downto 0);
         WE : IN  std_logic;
         RRead1 : OUT  std_logic_vector(15 downto 0);
         RRead2 : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal RReg1 : std_logic_vector(2 downto 0) := (others => '0');
   signal RReg2 : std_logic_vector(2 downto 0) := (others => '0');
   signal WR : std_logic_vector(2 downto 0) := (others => '0');
   signal WD : std_logic_vector(15 downto 0) := (others => '0');
   signal WE : std_logic := '0';

 	--Outputs
   signal RRead1 : std_logic_vector(15 downto 0);
   signal RRead2 : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: RegFile PORT MAP (
          clk => clk,
          RReg1 => RReg1,
          RReg2 => RReg2,
          WR => WR,
          WD => WD,
          WE => WE,
          RRead1 => RRead1,
          RRead2 => RRead2
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for 1 ns;
		clk <= '1';
		wait for 1 ns;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		--Write 2 Values 
		WD <= x"563F";     
		WR <= "000";
		WE <= '1';
		wait for 2 ns;
		WE <='0';
		wait for 1 ns;
		WD <= x"0002";
		WR <= "111";
		WE <= '1';
		wait for 2 ns;
		WE <='0';
		WD <= x"1555";  
		WR <= "010";
		wait for 1 ns;
		--Read the stored values
		RReg1 <= "000";
		RReg2 <= "111";
		wait for 10 ns;
		--Verify writing time
		WD <= x"5621";
		WR <= "111";
		WE <= '1';
		wait for 2 ns;
		WE <= '0';
		wait for 10 ns;

     
      wait;
   end process;

END;
