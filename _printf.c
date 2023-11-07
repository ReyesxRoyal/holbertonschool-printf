#include "main.h"
/**
 * _printf - created to function in the same way as the printf() function
 * @format: this is the format string where specifiers will be formated
 * @...: this is how the variable arguments are able to be included
 * 
 * Description: the _printf function will handle the format specifiers c,s,%,d,i
 * Return: prints the total amount of chars counted.
*/
int _printf(const char *format, ...)
{
	/* Starts the count for each character printed and creats variable for iteration */
	int count = 0;
	int i = 0;

	/* Initalizes the variable arguments list */
	va_list args;
	va_start (args, format);
    if (format == NULL)
    {
        return -1;
    }
    while (format[i]) 
    {
        if (format[i] != '%') 
        {
            _putchar(format[i]);
            count++;
        } 
        else 
        {
            i++;
            if (format[i] == '\0')
            {
                return -1;
            }
            else if (format[i] == '%')
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
        }
        i++;
    }

    va_end(args);
    return count;
}