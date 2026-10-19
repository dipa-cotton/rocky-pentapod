# rocky-pentapod
i'm building rocky from project hail mary but movable because i love moving things! it's a 5 legged "pentapod" with joints controlled by servos, and coded in c++.

# pictures
<img width="591" height="621" alt="Screenshot 2026-10-18 at 6 00 10 PM" src="https://github.com/user-attachments/assets/13f2d91d-054a-4eaf-9b4b-7c50d11f543e" />
<img width="1090" height="1016" alt="image" src="https://github.com/user-attachments/assets/686cdab0-d157-4122-adc2-7b3622d7ef0c" />
<img width="1090" height="1016" alt="image" src="https://github.com/user-attachments/assets/66fec1a3-6544-4956-8d45-ebca148ebb63" />
<img width="1090" height="1016" alt="image" src="https://github.com/user-attachments/assets/048974dd-d771-4195-9139-23e1f2eadb00" />

# how this works
This works by using 10 servos (i know 😫) to move 10 legs in this little guy! each leg has 2 joints, one right by the body and one halfway through the leg. There are holes in the upper part of each leg (as seen in the section analysis) so the wires are neatly threaded through everything. there are platforms for the first servo and interior platforms as well, so they don't stick out too much. My goal was to make this as clean as possible, and I think I achieved it! obviously, not everything is hidden, but i can add other things to cover the servos at the top in v2, as that is not a priority for me right now.
as for electronics, i am going to be using:
- 10 MG90S
- dupont wires (some are m-m, m-f, f-f)
- Mini Quick Wire Conductor Connector Universal Compact 2/3 Pin Splicing Push-inTerminal Block 1 in multiple out with fixing Hole D1 - 40
- PCA9685PW 16 Channel 12-Bit PWM Servo Shield Driver I2C Interface PCA9685 Module
- 10A DC-DC Buck Converter Step Down Module Power Supply Output Constant Current LED Driver Voltage Regulator Module
- ESP32-DevKitC Development Board with 2.4G Extend Antenna Port USB Micro Type-C 38PIN ESP32 CP2102 ESP32-32U Wifi Module
- 1Pcs Dual Row Barrier Screw Terminal Block Strip Wire Connector 600V 15A - B1503
- 2S rechargeable Li-ion pack + regulator
as the parts for everything. the wiring diagram can be found in my journal!
firmware can be found in the firmware, and the cad files can be found in the cad section as well.

# bom
| Item | Qty | Supplier | Cost/Item | Total Cost | Link |
|---|---:|---|---:|---:|---|
| Servos | 1 | AliExpress | $26.00 | $26.00 | [Link](https://www.aliexpress.us/item/3256812001593728.html) |
| PCA9685PW | 1 | AliExpress | $6.00 | $6.00 | [Link](https://www.aliexpress.us/item/3256809800763149.html) |
| Velcro | 1 | AliExpress | $4.00 | $4.00 | [Link](https://www.aliexpress.us/item/3256811676100778.html) |
| Dupont Cables | 1 | AliExpress | $4.00 | $4.00 | [Link](https://www.aliexpress.us/item/3256806768578908.html) |
| Wire Terminal | 1 | AliExpress | $3.00 | $3.00 | [Link](https://aliexpress.us/item/3256803684080411.html) |
| Buck Converter | 1 | AliExpress | $5.00 | $5.00 | [Link](https://www.aliexpress.us/item/3256801524933400.html) |
| ESP32 | 1 | AliExpress | $5.33 | $5.33 | [Link](https://aliexpress.us/item/3256806752173225.html) |
| Screw Terminal | 1 | AliExpress | $1.00 | $1.00 | [Link](https://www.aliexpress.us/item/3256805457212562.html) |
| **Subtotal** | **8** | | | **$54.33** | |
| Estimated Shipping | 1 | | | $10.67 | |
| **Grand Total** | | | | **$65.00** | |

# final notes
thank you guys!
