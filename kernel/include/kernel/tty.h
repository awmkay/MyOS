#ifndef _KERNEL_INCLUDE_KERNEL_TTY_H
#define _KERNEL_INCLUDE_KERNEL_TTY_H

#include <stddef.h>

void terminal_initialise(void);
void terminal_putchar(char c);
void terminal_write(const char *data, size_t size);
void terminal_writestring(const char *data);

#endif
