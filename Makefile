SHELL=/bin/sh
CC=clang
CFLAGS=-std=gnu23 -Wall
RCFLAGS=-O3
DCFLAGS=-g
SRC=main.c glyphs.c options.c

all:
	$(CC) $(CFLAGS) $(RCFLAGS) $(SRC) -I . -o asg

debug:
	$(CC) $(CFLAGS) $(DCFLAGS) $(SRC) -I . -o asg

clean:
	rm -rf asg
