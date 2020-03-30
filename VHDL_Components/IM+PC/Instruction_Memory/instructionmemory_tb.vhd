
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 

ENTITY instructionmemory_tb IS
END instructionmemory_tb;
 
ARCHITECTURE behavior OF instructionmemory_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT instructionmemory
    PORT(
         clk : IN  std_logic;
         readaddress : IN  std_logic_vector(15 downto 0);
         instruction : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal readaddress : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal instruction : std_logic_vector(15 downto 0);

   -- Clock period definitions
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: instructionmemory PORT MAP (
          clk => clk,
          readaddress => readaddress,
          instruction => instruction
        );

   -- Clock process definitions
   

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      clk<='0';
		readaddress<="1000000000000000";
		wait for 100 ns;
		clk<='1';
		readaddress<="1000000000000000";
		wait for 100 ns;	
		 clk<='0';
		readaddress<="1100000000000000";
		wait for 100 ns;
		clk<='1';
		readaddress<="1100000000000000";
		wait for 100 ns;	

     

      -- insert stimulus here 

      wait;
   end process;

END;
