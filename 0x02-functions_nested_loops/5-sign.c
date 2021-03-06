include "holberton.h"

/**
 * print_sign - prints the sign of a number
 * @n: the integer to print
 *
 * Return: 1 if prints + if n>0. -1 if prints - and n<0. 0 if prints 0 and n=0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
