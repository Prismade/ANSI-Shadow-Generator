SHELL=/bin/sh

CC=clang
APP=asg
CFLAGS=-std=gnu23 -Wall
RCFLAGS=-O3
DCFLAGS=-g
SRCDIR=./src
BLDDIR=./build
SRC=$(SRCDIR)/main.c $(SRCDIR)/glyphs.c $(SRCDIR)/options.c

all:
	mkdir -p $(BLDDIR)/release
	$(CC) $(CFLAGS) $(RCFLAGS) $(SRC) -I ./include -o $(BLDDIR)/release/$(APP)

debug:
	mkdir -p $(BLDDIR)/debug
	$(CC) $(CFLAGS) $(DCFLAGS) $(SRC) -I ./include -o $(BLDDIR)/debug/$(APP)

clean:
	rm -rf $(BLDDIR)
