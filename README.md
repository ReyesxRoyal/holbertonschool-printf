## Project overview

### Compilation:

All files will be compiled with gcc 4.8.4 using the flags:  -Wall -Werror -Wextra -pedantic

    gcc -Wall -Werror -Wextra -pedantic *.c

### Betty coding style:

All files are written in C and follows the Betty coding style for Holberton School. For more detail, check this page:

[Betty style documentation](https://github.com/holbertonschool/Betty/wiki)

### Authorized functions and macros

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)

## Function prototypes

All function prototypes used to compile _printf() are included in the header file **main.h**:
* int _printf(const char *format, ...);
* int _putchar(char c);
* int printChar(va_list args);
* int printString(va_list args);
* int printNum(va_list args);

## Function description

**int _printf(const char \*format, ...)**

This function produces output under the control of a *format string* that specifies how subsequent arguments (or arguments accessed via the variable-length argument of stdarg(3)) are converted for output.

The **conversion specifier:**


The conversion specifier is a letter that specifies the type of conversion to be applied. Our program includes the following conversion   specifiers:

**d:**	   decimal number to be provided for printing.

**i:**	   integer to be provided for printing

**c:**	   character to be provided for printing

**s:**	...The const char * argument is expected to be a pointer to an array of character type (pointer to a string).

**%:**	    A per cent sign '%' is written. No argument is converted.
___

**int print_char(va_list args)**

This function gets a variadic argument and prints each character of char type.
___

**int print_str(va_list args)**

This function gets a variadic argument, traverse the string, and prints a character at a time. 
___

**int printNum(va_list args)**

This function handles the decimal numbers and intergers. 
___

**int _putchar(char c)**

writes the character c to standard output
___

## Author
##### Collin Ballard
##### Rasheed White

