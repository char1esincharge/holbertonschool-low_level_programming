#include"holberton.h"
/**
 * swap_int - swap values between two int
 * @a: takes in int
 * @b: takes in int
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
