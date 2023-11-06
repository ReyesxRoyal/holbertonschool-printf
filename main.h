#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printChar(va_list args);
int printString(va_list args);
int printNum(va_list args);

#endif /*MAIN_H*/
