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

  if (format == NULL)
   {
       return (0);
   }
   if (format == NULL)
 {
    return (0);
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
        {
            putchar('%');
            chara_print++;
            break;
        }
        else if (*format == '%')
        {
            putchar('%');
            chara_print++;
        }
        else
        {
            putchar('%');
            putchar(*format);
            chara_print += 2;
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
   if (str == NULL)
{
      char *null_str = "(null)";
      fwrite(null_str, 1, strlen(null_str), stdout);
      chara_print += strlen(null_str);
}
  else
{
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

