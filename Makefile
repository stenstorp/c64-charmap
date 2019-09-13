CC = cl65 -O -t c64

all: clean
	${CC} charmap.c

clean:
	rm -f charmap charmap.o
