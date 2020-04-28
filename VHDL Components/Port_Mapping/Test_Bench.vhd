----------------------------------------------------------------------------------
--	EECE'22 - Team (12)
-- Engineer: Youssef Galal
-- 
-- Create Date:    20:13:22 02/27/2020  
-- Module Name:    Port_Mapping
-- Project Name:   16-Bit Harvard Architecture CPU
-- Target Devices: Spartan 6 - TQG144
-- Description:    A VHDL Test Bench file for CPU's wire mapping source code
----------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY Test_Bench IS
END Test_Bench;
 
ARCHITECTURE behavior OF Test_Bench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Port_Mapping
    PORT(
         CPU_clk : IN  std_logic;
         CPU_Reset : IN  std_logic;
         Input_Register : IN  std_logic_vector(15 downto 0);
         Output_Register : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CPU_clk : std_logic := '0';
   signal CPU_Reset : std_logic := '0';
   signal Input_Register : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal Output_Register : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant CPU_clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Port_Mapping PORT MAP (
          CPU_clk => CPU_clk,
          CPU_Reset => CPU_Reset,
          Input_Register => Input_Register,
          Output_Register => Output_Register
        );

   -- Clock process definitions
   CPU_clk_process :process
   begin
		CPU_clk <= '0';
		wait for CPU_clk_period/2;
		CPU_clk <= '1';
		wait for CPU_clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CPU_clk_period*10;
      
		
      wait;
   end process;

END;
