# Plutopad
This is a Case, Schematic, PCB, and Firmware for my Plutopad. It is a macropad with 9 switch keys, a Rotary Encoder Switch, and an OLED screen.
<img width="1918" height="1078" alt="Screenshot 2026-06-12 003459" src="https://github.com/user-attachments/assets/7944c847-d0e2-4761-a271-b58afcf65f45" />
This is the finished product of the assembled pad.
<img width="1918" height="1078" alt="Screenshot 2026-06-12 004000" src="https://github.com/user-attachments/assets/57101530-770e-4ac4-8e6e-f39f4327743c" />
Above is the schematic used to create the PCB.
<img width="1082" height="850" alt="Screenshot 2026-06-11 220309" src="https://github.com/user-attachments/assets/3c6ba277-d21d-4416-8af2-eb5539425d92" />
This is the PCB.
<img width="1918" height="1078" alt="Screenshot 2026-06-12 003817" src="https://github.com/user-attachments/assets/f49cf6c0-ee4f-4bfd-9627-469d8da22760" />
This is the final case by itself.
[PlutoPad.csv](https://github.com/user-attachments/files/28865083/PlutoPad.csv)



"Reference","Qty","Value","DNP","Exclude from BOM","Exclude from Board","Footprint","Datasheet"
"D1,D2,D3,D4,D5,D6,D7,D8,D9","9","1N4148","","","","Diode_THT:D_DO-35_SOD27_P7.62mm_Horizontal","https://assets.nexperia.com/documents/data-sheet/1N4148_1N4448.pdf"
"J1","1","Conn_01x04","","","","Display:ER_OLEDM0.91_1x-I2C",""
"SW1,SW2,SW3,SW4,SW5,SW6,SW7,SW8,SW9","9","SW_Push","","","","MINE:MINE",""
"SW17","1","RotaryEncoder_Switch","","","","Rotary_Encoder:RotaryEncoder_Alps_EC11E-Switch_Vertical_H20mm",""
"U1","1","MOUDLE-SEEEDUINO-XIAO","","","","footprintsV1:XIAO-Generic-Hybrid-14P-2.54-21X17.8MM_fixedV2",""
Bill of materials is stated above.



