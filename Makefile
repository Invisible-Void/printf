
AS=as
CC=gcc
CFLAGS=-Wall -Wextra -Werror -Iinclude/ -nostdlib -nolibc -ffreestanding -fno-stack-protector

SRCDIR=src/
OBJDIR=obj/
TARGETDIR=build/

TARGET=$(TARGETDIR)libprintf.a


$(TARGET): $(OBJDIR)printf.o $(OBJDIR)syscalls.o | $(TARGETDIR)
	ar rcs $@ $^


$(OBJDIR)%.o: $(SRCDIR)%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c -o $@ $^

$(OBJDIR)%.o: $(SRCDIR)%.s | $(OBJDIR)
	$(AS) -o $@ $^

$(OBJDIR):
	mkdir $(OBJDIR)

$(TARGETDIR):
	mkdir $(TARGETDIR)

.PHONY: clean

clean:
	rm -r $(OBJDIR)*
	rm $(TARGET)

