#include "main.h"

/**
 * print_numbers - displays numbers to the output
 *
 * Description: Write a function that prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 * Return: Always 0 (success)
 *
 */

void print_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
		a++;
	}
	_putchar('\n');
	return (0);
}
