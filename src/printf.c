#include <printf.h>

void printf(const char* message, ...) {
    size_t length = strlen(message);
    sys_write(1, message, length);
}

