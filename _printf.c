#include "main.h"

/*
 * this code is for the team project
 * the _printf function will handle the format specifiers c,s,%,d,i
 */

int _printf(const char *format, ...)
{
	/* Starts the count for each character printed and creats variable for iteration */
	int count = 0;
	int i = 0;

	/* Initalizes the variable arguments list */
	va_list args;
	va_start (args, format);

    while (format[i]) 
    {
        if (format[i] != '%') 
        {
            _putchar(format[i]);
            count++;
        } 
        else 
        {
            i++; /* new code inserted here */
            while (format[i] != '\0')
            {
                if (format[i] == '%')
                {
                    _putchar('%');
                    count++;
                }
                else if (format[i] == 'c') 
                {
                    count += printChar(args);
                } 
                else if (format[i] == 's') 
                {
                    count += printString(args);
                } 
                else if (format[i] == 'd' || format[i] == 'i') 
                {
                    count += printNum(args);
                } 
                else 
                {
                    _putchar('%');
                    _putchar(format[i]);
                    count += 2;
                }
                i++; /* new code test */
            }
        }
        i++;
    }

    va_end(args);
    return count;
}	