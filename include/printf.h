#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stddef.h>

#include <syscalls.h>
#include <utils.h>

void printf(const char* message, ...);

#endif // PRINTF_H
