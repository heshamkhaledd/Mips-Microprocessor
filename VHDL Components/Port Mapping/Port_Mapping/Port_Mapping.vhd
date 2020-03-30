----------------------------------------------------------------------------------
--	EECE'22 - Team (12)
-- Engineer: Hesham Khaled
-- 
-- Create Date:    20:13:22 02/27/2020  
-- Module Name:    Port_Mapping
-- Project Name:   16-Bit Harvard Architecture CPU
-- Target Devices: Spartan 6 - TQG144
-- Description:    A VHDL File for CPU's wire mapping source code
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity Port_Mapping is
	PORT(
			CPU_clk:    	 	in std_logic;
			CPU_Reset: 		 	in std_logic;
			Input_Register: 	in std_logic_vector (15 downto 0);
			Output_Register:	out std_logic_vector (15 downto 0)
		   );

end Port_Mapping;

architecture Behavioral of Port_Mapping is


--                          Including CPU's components                              --
--------------------------------------------------------------------------------------

component ALU is
	PORT(
			ALUA :	   in std_logic_vector(15 downto 0);
			ALUB :	   in std_logic_vector(15 downto 0);
			ALUR : 		out std_logic_vector(15 downto 0);
			ZF   : 		out std_logic;
			operation : in std_logic_vector(2 downto 0)
			);
end component;

component Control_Unit is
	PORT(
		
			OP_CODE: in std_logic_vector (3 downto 0);
			FUNC:    in std_logic_vector (2 downto 0);
			OUTLD:   out std_logic;
			MWE:     out std_logic;
			ALU: 		out std_logic_vector (2 downto 0);
			S8: 		out std_logic;
			S7: 		out std_logic;
			S6: 		out std_logic;
			WE:		out std_logic;
			S9: 		out std_logic;
			S1: 		out std_logic;
			S2: 		out std_logic;
			S3: 		out std_logic;
			S5: 		out std_logic;
			S4: 		out std_logic
			);
end component;

component Register_File is
	PORT(
			clk :    in std_logic;
			RReg1 :  in std_logic_vector (2 downto 0);
			RReg2 :  in std_logic_vector (2 downto 0);
			WR : 	   in std_logic_vector (2 downto 0);
			WD :     in std_logic_vector (15 downto 0);
			WE:      in std_logic;
			RRead1 : out std_logic_vector (15 downto 0);
			RRead2 : out std_logic_vector (15 downto 0)
			);
end component;

component Data_Memory is
	PORT(
			MAR:      in  STD_LOGIC_vector (15 downto 0); 
         MDR:      in  STD_LOGIC_vector (15 downto 0);  
         MWE:      in std_logic;                   
         clk: 	    in std_logic;                                  
         Readdata: out  STD_LOGIC_vector (15 downto 0)
			); 
end component;

component Instruction_Memory is
	PORT(
			clk: 				in std_logic; 
	      Read_Address:  in  std_logic_vector (15 downto 0);
         Instruction:   out  STD_LOGIC_VECTOR (15 downto 0)
			);
end component;

component Program_Counter is
	PORT(
			Program_Counter_IN:   in   std_logic_vector (15 downto 0);
         Program_Counter_OUT:  out  std_logic_vector (15 downto 0);
         clk:  					 in   std_logic;
         Reset: 					 in   std_logic
			);
end component;

component BUS_MUX4to1 is
	PORT(
			Sel_6:       in std_logic;
			Sel_7:       in std_logic;
			MUX_0: 	    in std_logic_vector (15 downto 0);
			MUX_1:       in std_logic_vector (15 downto 0);
			MUX_2:       in std_logic_vector (15 downto 0);
			MUX_3:       in std_logic_vector (15 downto 0);
			MUX_R:       out std_logic_vector (15 downto 0)
			);
end component;


component MUX2to1_S8 is
	PORT(
			Sel_8: in std_logic;
			MUX_0: in std_logic_vector (15 downto 0);
			MUX_1: in std_logic_vector (15 downto 0);
			MUX_R: out std_logic_vector (15 downto 0)
			);
end component;


component Sign_Extension is
	PORT(
			InsBits : in std_logic_vector (5 downto 0);
			SignExt:  out std_logic_vector (15 downto 0)
		   );
end component;


component MUX2to1_S4 is
	PORT(
			Sel_4: in std_logic;
			MUX_0: in std_logic_vector (2 downto 0);
			MUX_1: in std_logic_vector (2 downto 0);
			MUX_R: out std_logic_vector (2 downto 0)
			);
end component;


component MUX2to1_S5 is
	PORT(
			Sel_5: in std_logic;
			MUX_0: in std_logic_vector (2 downto 0);
			MUX_R: out std_logic_vector (2 downto 0)
			);
end component;


component PC_ADDER1 is
	PORT(
			PC_current : in std_logic_vector (15 downto 0);
			PC_Plus1 :   out std_logic_vector (15 downto 0)
			);
end component;


component PC_ADDER2 is
	PORT(
			PC_plus_1,offset : in std_logic_vector (15 downto 0);
			PC_plus_offset : out std_logic_vector (15 downto 0)
			);
end component;


component XOR_S9 is
	PORT(
			Zero_F: in std_logic;
			Sel_9:  in std_logic;
			S9_M:   out std_logic
			);
end component;


component PC_MUX4to1 is
	PORT(
			Sel_1:    in std_logic;
			Sel_2:    in std_logic;
			MUX_0:    in std_logic_vector (15 downto 0);
			MUX_1:  	 in std_logic_vector (15 downto 0);
			MUX_2:    in std_logic_vector (15 downto 0);
			MUX_3:    in std_logic_vector (15 downto 0);
			MUX_R:    out std_logic_vector (15 downto 0) 
			);
end component;


component Sign_Extension_2 is
	PORT(
			InsBits_2 : in std_logic_vector (11 downto 0);
			SignExt_2:  out std_logic_vector (15 downto 0)
			);
end component;

component MUX2to1_S3 is
	PORT(
			Sel_3: in std_logic;
			MUX_0: in std_logic_vector (15 downto 0);
			MUX_1: in std_logic_vector (15 downto 0);
			MUX_R: out std_logic_vector (15 downto 0)
			);
end component;


component MUX2to1_S9 is
	PORT(
			Sel_9_M: in std_logic;
			MUX_0: 	in std_logic_vector (15 downto 0);
			MUX_1: 	in std_logic_vector (15 downto 0);
			MUX_R: 	out std_logic_vector (15 downto 0)
			);
end component;

--                                          CPU's signals                                            --
---------------------------------------------------------------------------------------------------------------


---       ALU Signals      ---

signal ALU_ALUR: 		 std_logic_vector (15 downto 0);
signal ALU_ZF:     	 std_logic;

---       Control Unit Signals     ---

signal CU_OUTLD:      std_logic;
signal CU_MWE:        std_logic;
signal CU_ALU:        std_logic_vector (2 downto 0);
signal CU_S8:         std_logic;
signal CU_S7:         std_logic;
signal CU_S6:         std_logic;
signal CU_WE:         std_logic;
signal CU_S9:         std_logic;
signal CU_S1:         std_logic;
signal CU_S2:         std_logic;
signal CU_S3:         std_logic;
signal CU_S5:         std_logic;
signal CU_S4:         std_logic;

---       Register File Signals     ---

signal RF_RRead1:     std_logic_vector (15 downto 0);
signal RF_RRead2:     std_logic_vector (15 downto 0);

---       Instruction Memory Signals     ---

signal IM_Instruction:  std_logic_vector (15 downto 0);

---       Program Counter Signals     ---

signal PC_Program_Counter_IN:  std_logic_vector (15 downto 0);
signal PC_Program_Counter_OUT: std_logic_vector (15 downto 0);
signal PC_ADDER1_OUT:			 std_logic_vector (15 downto 0);
signal PC_ADDER2_OUT:			 std_logic_vector (15 downto 0);

---       General CPU Signals     ---

signal BUS_MUX_0:   	std_logic_vector (15 downto 0);
signal BUS_MUX_R:  	std_logic_vector (15 downto 0);
-------
signal PC_MUX_R:     std_logic_vector (15 downto 0);
-------
signal MUX2to1_S8_R: std_logic_vector (15 downto 0);
signal MUX2to1_S4_R: std_logic_vector (2 downto 0);
signal MUX2to1_S5_R: std_logic_vector (2 downto 0);
-------
signal SE_Instruction_5to0: std_logic_vector (15 downto 0);
-------
signal XOR_SELECT:			 std_logic;
signal PC_MUX01:				 std_logic_vector (15 downto 0);
signal PC_MUX10:				 std_logic_vector (15 downto 0);
-------
signal Data_In:				 std_logic_vector (15 downto 0);
signal Data_Out:				 std_logic_vector (15 downto 0);
begin

process (CPU_clk,CPU_Reset)
begin

			if (rising_edge (CPU_clk) AND CU_OUTLD = '1') then
				Output_Register <= Data_Out;
			elsif (rising_edge (CPU_clk)) then
				Data_In <= Input_Register;
			end if;
end process;


---       Port Mapping ALU      ---

X1: ALU
		port map(
					ALUA 			=> RF_RRead1,
					ALUB 			=> MUX2to1_S8_R,
					ALUR 			=> ALU_ALUR,
					ZF   			=> ALU_ZF,
					operation   => CU_ALU
					);
					
					
---       Port Mapping Control Unit   ---

X2: Control_Unit
		port map(
					OP_CODE     => IM_Instruction (15 downto 12),
					FUNC		   => IM_Instruction (2 downto 0),
					OUTLD       => CU_OUTLD,
					MWE			=> CU_MWE,
					ALU         => CU_ALU,
					S8				=> CU_S8,
					S7				=> CU_S7,
					S6				=> CU_S6,
					WE				=> CU_WE,
					S9				=> CU_S9,
					S1				=> CU_S1,
					S2				=> CU_S2,
					S3				=> CU_S3,
					S5				=> CU_S5,
					S4				=> CU_S4
					);
					
---       Port Mapping Register File   ---

X3: Register_File
		port map(
					RReg1       => IM_Instruction (11 downto 9),
					RReg2       => IM_Instruction (8 downto 6),
					WR				=> MUX2to1_S5_R,
					WE				=> CU_WE,
					WD          => BUS_MUX_R,
					RRead1      => RF_RRead1,
					RRead2      => RF_RRead2,
					clk			=> CPU_clk
					);
					
---       Port Mapping Data Memory   ---

X4: Data_Memory
		port map(
					MAR			=> ALU_ALUR,
					MDR			=> RF_RRead2,
					MWE			=> CU_MWE,
					Readdata		=> BUS_MUX_0,
					clk			=> CPU_clk
					);
					


---       Port Mapping Instruction Memory   ---

X5: Instruction_Memory
		port map(
					Instruction 	=> IM_Instruction,
					Read_Address 	=> PC_Program_Counter_OUT,
					clk				=> CPU_clk
					);

---       Port Mapping Program Counter   ---

X6: Program_Counter
		port map(
					Program_Counter_IN    => PC_Program_Counter_IN,
					Program_Counter_OUT   => PC_Program_Counter_OUT,
					Reset						 => CPU_Reset,
					clk						 => CPU_clk
					);
					
---       Port Mapping BUS 4-to-1 MUX   ---

X7: BUS_MUX4to1
		port map(
					 MUX_0  					 => BUS_MUX_0,
					 MUX_1					 => ALU_ALUR,
					 MUX_2				 	 => PC_ADDER1_OUT,
					 MUX_3		   		 => Data_In,
					 MUX_R				 	 => BUS_MUX_R,
					 Sel_6				 	 => CU_S6,
					 Sel_7				 	 => CU_S7
					 );
					 
---       Port Mapping MUX2to1_S8   ---

X8: MUX2to1_S8
		port map(
					Sel_8						 => CU_S8,
					MUX_0						 => RF_RRead2,
					MUX_1						 => SE_Instruction_5to0,
					MUX_R						 => MUX2to1_S8_R
					);

---       Port Mapping Sign Extension   ---

X9: Sign_Extension
		port map(
					InsBits					 => IM_Instruction (5 downto 0),
					SignExt					 => SE_Instruction_5to0
					);
					
---       Port Mapping MUX2to1_S4   ---

X10: MUX2to1_S4
		port map(
					Sel_4						=> CU_S4,
					MUX_0						=> IM_Instruction (8 downto 6),
					MUX_1						=> IM_Instruction (5 downto 3),
					MUX_R						=> MUX2to1_S4_R
					);
					
---       Port Mapping MUX2to1_S4   ---

X11: MUX2to1_S5
		port map(
					Sel_5						=> CU_S5,
					MUX_0						=> MUX2to1_S4_R,
					MUX_R						=> MUX2to1_S5_R
					);


---       Port Mapping PC_ADDER1   ---

X12: PC_ADDER1
		port map(
					PC_current				=> PC_Program_Counter_OUT,
					PC_Plus1					=> PC_ADDER1_OUT
					);

---       Port Mapping PC_ADDER2   ---

X13: PC_ADDER2
		port map(
					PC_plus_1				=> PC_ADDER1_OUT,
					offset					=> SE_Instruction_5to0,
					PC_plus_offset			=> PC_ADDER2_OUT
					);

---       Port Mapping XOR_S9   ---

X14: XOR_S9
		port map(
					Zero_F					=> ALU_ZF,
					Sel_9						=> CU_S9,
					S9_M						=> XOR_SELECT
					);
					
---       Port Mapping MUX2to1_S9   ---

X15: MUX2to1_S9
		port map(
					Sel_9_M					=> XOR_SELECT,
					MUX_0						=> PC_ADDER2_OUT,
					MUX_1						=> PC_ADDER1_OUT,
					MUX_R						=> PC_MUX01
					);
					
---       Port Mapping MUX2to1_S9   ---

X16: PC_MUX4to1
		port map(
					Sel_1						=> CU_S1,
					Sel_2						=> CU_S2,
					MUX_0						=> PC_ADDER1_OUT,
					MUX_1						=> PC_MUX01,
					MUX_2						=> PC_MUX10,
					MUX_3						=> RF_RRead1,
					MUX_R						=> PC_MUX_R
					);
					
---       Port Mapping MUX2to1_S9   ---

X17: Sign_Extension_2
		port map(
					InsBits_2				=> IM_Instruction (11 downto 0),
					SignExt_2				=> PC_MUX10
					);
					
					
---       Port Mapping MUX2to1_S3   ---

X18: MUX2to1_S3
		port map(
					Sel_3						=> CU_S3,
					MUX_0						=> PC_MUX_R,
					MUX_1						=> PC_Program_Counter_OUT,
					MUX_R						=> PC_Program_Counter_IN
					);
					
----------------------------------------------------------------------------
end Behavioral;