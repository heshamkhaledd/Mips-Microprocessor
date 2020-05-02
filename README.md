# Mips-Microprocessor
A 16-bit Harvard Architecture Microprocessor ready to run on Spartan-6 FPGA mounted on a PCB board. Our designed PCB layout was manufactured in China. It consists of three main layers.

## Hardware Layer
1. The first stage of the design is implementing the Microprocessor's all circuital components on a schematic sheet starting from the power supply and voltage regulation components, the FPGA, headers specified for our targeted project, and I/O port headers, VCC and GND headers and JTAG headers, also the FPGA'S essential-combined components such as the oscillator, and the caps, reset button and status LEDs, last thing is an SPI memory to store the data
the schematic consists of 7 blocks for the FPGA each block has number of pins for specific purposes, first 4 blocks represent the 4 banks of FPGA, Power Block, GND block and the JTAG interfacing pins block, each connected through nets to the other components/headers.
2. The second stage is the PCB layout design, the PCB mainly contains of 4 layers, top and bottom layers are signal layers, second layer is GND and basically it helps with noise immunity in the microprocessor other that just connecting the ground nets together, the third layer is the power layer and it is divided into 3 sections, each one supplies a specific voltage required by the components , starting from left, 5v, 3.3v, 1.2v
the USB port entry supplies power to the whole circuit, the voltage regulators on the top layer supplies the other 2 sections of the power layer
all the main components and headers are on the top layer and the bottom layer contains the capacitors and resistors needed by the main components
the voltage regulators and the FPGA require capacitors for filtering the input power as the FPGA is so sensitive to changes in voltages and any small change may damage it, the caps are located right under the FPGA in the bottom layer to achieve minimum track lengths and better functionality
there are 2 status LEDs used in the PCB, the first one is for successively programing the FPGA, and the second LED is for successively resetting the Microprocessor

## VHDL Layer

Includes all the main components of the microprocessor
> Instruction Memory
> Program Counter
> ALU
> Register File
> RAM
> Control Unit

and all are finally Portmapped in one file.
Each component is implemented separately and reached the expectations in the test benches as indvidual component and also as integrated in the project.

## Assembly Layer

An Application layer written in assembly for the system which involves interfacing with LCD and Keypad. All the LCD and Keypad drivers are
self-implemented by our instruction set.
The application was a prototype about helping people to write texts or even messages for the unsighted people by entering the letters throughout the
Keypad module and the LCD just displays the text in Braille's language. You can enter alphabets through 4*3 Keypad with Alphabetical notations on numbers.

## Building and Synthesizing

You are required to download and install Xise ISE or any simulating tool that allows you to build VHDL codes to be able to build, synthesize and implement the microprocessor.

> You might encounter an ERROR
> Xise ISE might show errors about some files that aren't in the expected directory. All you have to do is redirect each '.vhd' file to your own
> directory.