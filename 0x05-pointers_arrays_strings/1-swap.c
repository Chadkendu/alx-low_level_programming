#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * Description: a function that swaps the values of two integers.
 *@a: first integer to swap
 *@b: seconf integer to swap
 *
 * Return: nothing
 *
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
