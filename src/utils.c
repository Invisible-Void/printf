#include <utils.h>

size_t strlen(const char* str) {
    size_t count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

// copies str to buffer with length-1
// length should be the size of the buffer or string to copy with null byte included
void strcpy(char* buffer, const char* str, size_t length) {
    size_t i;
    for (i = 0; i < length-1 && str[i] != '\0'; i++) {
        buffer[i] = str[i];
    }
    buffer[i] = '\0';
}


