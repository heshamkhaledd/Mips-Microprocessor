LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY DataMEMORYTB IS
END DataMEMORYTB;
 
ARCHITECTURE behavior OF DataMEMORYTB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT DataMEMORY
    PORT(
         MAR : IN  std_logic_vector(15 downto 0);
         MDR : IN  std_logic_vector(15 downto 0);
         WE : IN  std_logic ;
         clk: IN std_logic;
         Readdata : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal MAR : std_logic_vector(15 downto 0) := (others => '0');
   signal MDR : std_logic_vector(15 downto 0) := (others => '0');
   signal WE : std_logic := '0';
   signal clk : std_logic ;
 	--Outputs
   signal Readdata : std_logic_vector(15 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: DataMEMORY PORT MAP (
          MAR => MAR,
          MDR => MDR,
          WE => WE,
          Readdata => Readdata,
          clk => clk
        );


 

   -- Stimulus process
   stim_proc: process
   begin	
	
    
 
    -- insert stimulus here
WE<='0';
clk<='0';
MAR<="1100000000000000";
wait for 100 ns;
clk<='1';              
MAR<="1100000000000000";   
WE<='1';
MDR<="1010101010101010";
wait for 100 ns;
clk<='0';
MAR<="0000000000000000";
WE<='0';
wait for 100 ns;
clk<='1';
MAR<="1110000000000000";
WE<='1';
MDR<="1000000000000000";
wait for 100 ns;
clk<='0';
MAR<="1100000000000000";
WE<='0';
wait for 100 ns;

      wait;
   end process;

END;



