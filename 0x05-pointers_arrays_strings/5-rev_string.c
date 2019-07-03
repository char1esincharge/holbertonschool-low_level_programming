#include"holberton.h"
/**
 * rev_string - prints "g-n-i-r-t-s"
 *
 * @s: takes in a character
 */
void rev_string(char *s)
{
	int i, n = 0;
	char ten;

	while (s[n] != '\0')
		n++;
	n--;

	for (i = 0; i < n; n--,	i++)
	{
		ten = s[i];
		s[i] = s[n];
		s[n] = ten;
	}
}
