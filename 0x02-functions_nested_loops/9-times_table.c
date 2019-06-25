#include "holberton.h"

/**
 * times_table - function that prints the 9 times table
 * @void: n/a
 */
void times_table(void)
{
	int j, f, a;

	for (j = 0; j <= 9; j++)
	{
		for (f = 0; f <= 9; f++)
		{
			a = j * f;
			if (f == 0)
			{
				_putchar(a + '0');
			}
			else if (a <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(a + '0');
			}
			else if (a >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
