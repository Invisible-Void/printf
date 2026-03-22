
CC=gcc
CFLAGS=-Wall -Wextra -nostdlib -ffreestanding -fno-stack-protector -I../include/ -L../build/
LIBS=-lprintf


out/print: out/print.o out/start.o | ../include/printf.h
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

out/%.o: src/%.c
	$(CC) $(CFLAGS) -c -o $@ $^

out/%.o: src/%.s
	as -o $@ $<



