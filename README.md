# Pump-Controller
This is the next version of the previously featured AC Switch. This is an IOT device that can turn normal water pumps smart. This device is meant to detect plumbing issues and automatically or allow the user to act. 
![pump controller 2](https://github.com/citrineio/Pump-Controller/assets/71399691/d706a8df-9d00-4625-a965-b05dbc918611)

## Features

 1. A wireless microcontroller (ESP32-C3-WROOM-02-N4) for remote monitoring and control of the pump.
 2.  40A SPDT relay with Quick Connect contacts (AZ2100-1CE-5DEF).
 3. 20A current transformer (ZMCT102) to detect when the pump is on by measuring motor current.
 4. A JST connector (B4B-PH-K) for a [pressure sensor](https://www.digikey.com/en/products/detail/seeed-technology-co-ltd/114991178/7387419)  to identify if the pump is pumping air.
 5. An AC/DC converter (PBO-5C-5 or equivalent) to supply power from an outlet.

## Block Diagram

![image](https://github.com/citrineio/Pump-Controller/assets/71399691/bc506c60-6d8e-498c-943c-5a957d4b092c)

## Future improvements

 1. Replace spring clamp terminal blocks with pluggable or screw terminals.
 2. Replace the JST connector with a pluggable terminal block.
 3. Replace TC2050 footprint and UART JST connector with 2.54mm footprints for use with a pogo pin probe clip (e.g. [This](https://www.adafruit.com/product/5434)).
 4. The board was designed with a specific enclosure in mind. Future revisions will have their own custom designed enclosure.
 5. Tagconnect cables without clamps are very inconvenient. 


Please let me know if you have any suggestions or improvements



