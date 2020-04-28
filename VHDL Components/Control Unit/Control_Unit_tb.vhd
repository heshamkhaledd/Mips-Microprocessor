----------------------------------------------------------------------------------
-- Engineer: Hesham Khaled & Youssef Taha
-- 
-- Create Date:    21:30:44 02/24/2020 
-- Module Name:    Control_Unit - Behavioral 
-- Project Name:   16-Bit Harvard CPU
-- Description: 	 A VHDL Test Bench for the CPU control unit
----------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Control_Unit_tb IS
END Control_Unit_tb;
 
ARCHITECTURE behavior OF Control_Unit_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Control_Unit
    PORT(
         OP_CODE : IN  std_logic_vector(3 downto 0);
         FUNC : IN  std_logic_vector(2 downto 0);
         OUTLD : OUT  std_logic;
         MWE : OUT  std_logic;
         ALU : OUT  std_logic_vector(2 downto 0);
         S8 : OUT  std_logic;
         S7 : OUT  std_logic;
         S6 : OUT  std_logic;
         WE : OUT  std_logic;
         S9 : OUT  std_logic;
         S1 : OUT  std_logic;
         S2 : OUT  std_logic;
         S3 : OUT  std_logic;
         S5 : OUT  std_logic;
         S4 : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal OP_CODE : std_logic_vector(3 downto 0) := (others => '0');
   signal FUNC : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal OUTLD : std_logic;
   signal MWE : std_logic;
   signal ALU : std_logic_vector(2 downto 0);
   signal S8 : std_logic;
   signal S7 : std_logic;
   signal S6 : std_logic;
   signal WE : std_logic;
   signal S9 : std_logic;
   signal S1 : std_logic;
   signal S2 : std_logic;
   signal S3 : std_logic;
   signal S5 : std_logic;
   signal S4 : std_logic;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Control_Unit PORT MAP (
          OP_CODE => OP_CODE,
          FUNC => FUNC,
          OUTLD => OUTLD,
          MWE => MWE,
          ALU => ALU,
          S8 => S8,
          S7 => S7,
          S6 => S6,
          WE => WE,
          S9 => S9,
          S1 => S1,
          S2 => S2,
          S3 => S3,
          S5 => S5,
          S4 => S4
        );


   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;
		OP_CODE <= "0000";
		FUNC <= "000";
		wait for 10 ns;
		FUNC <= "101";
		wait for 10 ns;
		OP_CODE <= "0111";
		FUNC <= "101";
		wait for 10 ns;
		OP_CODE <= "0110";
		FUNC <= "010";
		wait for 10 ns;
		OP_CODE <= "1110";
		wait for 10 ns;
      wait;
   end process;

END;
