#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: a function that prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (success)
 *
 */

void print_alphabet(void)
{
	char parv = 'a';

	while (parv <= 'z')
	{
		_putchar(parv);
		parv++;

	}
	_putchar('\n');

}
