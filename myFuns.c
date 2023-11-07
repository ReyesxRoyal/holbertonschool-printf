#include "main.h"

/**
 * printChar - handles the %c
 * @args: character that is being counted
 * 
 * Description: this will conatin a detailed description.
 * Return: number of chars counted
*/
int printChar(va_list args) 
{
	int c = va_arg(args, int);
	return _putchar(c);
}
/**
 * printString - handles the %s
 * @args: string that is being counted
 * 
 * Description: this will conatin a detailed description.
 * Return: number of chars counted
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
	return i;
}
/**
 * printNum - handles the %d & %i
 * @args: number that is being counted
 * 
 * Description: this will conatin a detailed description.
 * Return: number of chars counted
*/
int printNum(va_list args) 
{
	int num = va_arg(args, int);
	int count = 0;
	int digits;
	int temp;
	int divisor;
	int dig;
	int i;

	if(num < 0) /* this handles negative numbers */
	{
		_putchar('-');
		count++;
		num = -num;
	}

	if(num == 0) /* this handles 0 */
	{
		_putchar('0');
		return count++;
	}
	else
	{
		digits = 0;
		temp = num;
		while(temp != 0)
		{
			temp /= 10;
			digits++;
		}

		divisor = 1;
		for(i = 1; i < digits; i++)
		{
			divisor *= 10;
		}
		while(divisor > 0)
		{
			dig = num / divisor;
			_putchar(dig + '0');
			count++;
			num %= divisor;
			divisor /= 10;
		}
	}
	return count;
}