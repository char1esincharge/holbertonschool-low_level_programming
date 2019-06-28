#include"holberton.h"
/**
 * checks for numbers between 0-9
 * @c takes on a digit
 * returns 1 for digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
