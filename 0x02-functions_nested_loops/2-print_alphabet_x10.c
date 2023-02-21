#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: a function that prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (success)
 *
 */

void print_alphabet_x10(void)
{
	char p;
	int i = 0;

	while (i < 10)
	{
		p = 'a';

		while (p <= 'z')
		{
			_putchar(p);
			p++;
		}
		_putchar('\n');
		i++;
	}
}
