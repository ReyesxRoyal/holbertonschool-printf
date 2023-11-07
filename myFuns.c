#include "main.h"

/**
 * printChar - handles the %c
 * @args: character that is being counted
 *
 * Description: Prints a character specified by the %c format.
 * Return: The number of characters printed.
 */
int printChar(va_list args)
{
	int c = va_arg(args, int);
	return (_putchar(c));
}

/**
 * printString - handles the %s
 * @args: string that is being counted
 * 
 * Description: Prints a string specified by the %s format.
 * Return: The number of characters printed.
 */
int printString(va_list args) 
{
	int i = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
