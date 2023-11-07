#include "main.h"

/* this handles %c */
int printChar(va_list args)
{
	int c = va_arg(args, int);
	return _putchar(c);
}

/* this handles %s */
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

/* this will handle %d and %i */
int printNum(va_list args)
{
	long long num = va_arg(args, long long);
	int count = 0;
	int digits;
	long long temp;
	long long divisor;
	int dig;
	int i;

	/* this handles negative numbers */
	if(num < 0) 
	{
		_putchar('-');
		num = -num;
		count++;
	}

	/* this handles 0 */
	if(num == 0)
	{
		_putchar('0');
		return 1;
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