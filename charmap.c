// start of screen memory is 0x0400
#define SCREEN ((unsigned char*)0x0400)

void main() {

	unsigned char CHAR = 0;
	unsigned short MEMLOC = 0;
	unsigned short OFFSET = 0;

	// blank the screen by filling it with spaces
	for (MEMLOC = 0; MEMLOC < 0x03E8; MEMLOC++) {
		SCREEN[MEMLOC] = 0x20;
	}

	// write vertical guide
	MEMLOC = 40;
	SCREEN[MEMLOC+=40] = 48;
	SCREEN[MEMLOC+=40] = 49;
	SCREEN[MEMLOC+=40] = 50;
	SCREEN[MEMLOC+=40] = 51;
	SCREEN[MEMLOC+=40] = 52;
	SCREEN[MEMLOC+=40] = 53;
	SCREEN[MEMLOC+=40] = 54;
	SCREEN[MEMLOC+=40] = 55;
	SCREEN[MEMLOC+=40] = 56;
	SCREEN[MEMLOC+=40] = 57;
	SCREEN[MEMLOC+=40] = 65;
	SCREEN[MEMLOC+=40] = 66;
	SCREEN[MEMLOC+=40] = 67;
	SCREEN[MEMLOC+=40] = 68;
	SCREEN[MEMLOC+=40] = 69;
	SCREEN[MEMLOC+=40] = 70;

	// write horizontal guide
	MEMLOC = 2;
	SCREEN[MEMLOC++] = 48;
	SCREEN[MEMLOC++] = 49;
	SCREEN[MEMLOC++] = 50;
	SCREEN[MEMLOC++] = 51;
	SCREEN[MEMLOC++] = 52;
	SCREEN[MEMLOC++] = 53;
	SCREEN[MEMLOC++] = 54;
	SCREEN[MEMLOC++] = 55;
	SCREEN[MEMLOC++] = 56;
	SCREEN[MEMLOC++] = 57;
	SCREEN[MEMLOC++] = 65;
	SCREEN[MEMLOC++] = 66;
	SCREEN[MEMLOC++] = 67;
	SCREEN[MEMLOC++] = 68;
	SCREEN[MEMLOC++] = 69;
	SCREEN[MEMLOC++] = 70;

	// print all possible characters
	for (MEMLOC = 82; MEMLOC <= 0x2CE; MEMLOC += 40) {
		for ( OFFSET = 0; OFFSET < 16; OFFSET++ ) {
			SCREEN[MEMLOC+OFFSET] = CHAR++;
		}
	}

	// loop forever to stop "READY" prompt
	while (1) {
		continue;
	}
}
