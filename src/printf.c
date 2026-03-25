#include <printf.h>

void printf(const char* message, ...) {
    char buffer[4096]; // i need some space and i can't use malloc :(
    size_t length = strlen(message);

    strcpy(buffer, message, 4096);

    sys_write(1, buffer, length);
}

