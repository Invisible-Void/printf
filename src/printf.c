#include <printf.h>

void printf(const char* message, ...) {
    va_list args;
    char buffer[4096]; // i need some space and i can't use malloc :(

    size_t buffer_offset = 0;
    size_t msg_offset = 0;

    char* msg = (char*) message;


    va_start(args, message);


    while (*(msg+msg_offset) != '\0') {
        char token = *(msg+msg_offset);

        if (token == '%') {
            strcpy(buffer+buffer_offset, msg, msg_offset+1);
            buffer_offset += msg_offset;
            msg = (char*) (msg + msg_offset);
            msg_offset = 0;
        } else if (*(msg) == '%' && token == 's') {
            // string insert
            char* string = va_arg(args, char*);
            strcpy(buffer+buffer_offset, string, strlen(string) + 1);
            buffer_offset += strlen(string);
            msg += 2;
            msg_offset = 0;
        }

        msg_offset++;
    }
    strcpy(buffer+buffer_offset, msg, msg_offset+1);


    va_end(args);

    sys_write(1, buffer, strlen(buffer));
}

