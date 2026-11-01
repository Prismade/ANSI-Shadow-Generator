SHELL=/bin/sh
CC=clang
CFLAGS=-Wall -O3

all:
	$(CC) $(CFLAGS) main.c glyphs.c -I . -o asg

clean:
	rm -rf asg
