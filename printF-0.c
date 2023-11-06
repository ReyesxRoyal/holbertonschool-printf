#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - prints a string with a variable number of arguments.
 * @format: the string to be printed.
 *
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
   int chara_print = 0;
   va_list Gaming_Consoles;

   if (format == 0)
   {
       return (1);
   }
   va_start(Gaming_Consoles, format);

   while (*format)
   {
       if (*format != '%')
       {
           putchar(*format);
           chara_print++;
       }
       else
       {
           format++;
           if (*format == '\0')
               break;
           if (*format == '%')
           {
               putchar(*format);
               chara_print++;
           }
           else if (*format == 'c')
           {
               char c = va_arg(Gaming_Consoles, int);
               putchar(c);
               chara_print++;
           }
    else if (*format == 's')
{
   char *str = va_arg(Gaming_Consoles, char*);
   int str_len = 0;
   while (str[str_len] != '\0')
   {
       str_len++;
   }
   fwrite(str, 1, str_len, stdout);
   chara_print += str_len;
}
}
       format++;
   }
   va_end(Gaming_Consoles);

   return (chara_print);
}

