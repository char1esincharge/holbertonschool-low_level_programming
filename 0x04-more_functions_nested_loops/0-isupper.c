#include"holberton.h"
/**
 * checks for uppercase characters
 * @c takes in character
 * Return: 1 for uppercase and 0 for lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
