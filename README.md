# C64 Character Map
Just a simple program for the Commodore 64 to display the character map.  

### Usage
The vertical guide shows the upper byte and the horizontal guide shows the lower byte.  
E.g. the character at `0x5A` (Z) is at `5` on the vertical axis and `A` on the horizontal axis.

### Building
- Install [cc65](https://github.com/cc65/wiki/wiki), [VICE](http://vice-emu.sourceforge.net/) and `make`
- Just run: `make`
- Run the VICE C64 emulator and open: file -> Smart attach disk/tape  
  Navigate to the folder you downloaded this to and open `charmap`
- In the emulator, type: `RUN` and press enter
