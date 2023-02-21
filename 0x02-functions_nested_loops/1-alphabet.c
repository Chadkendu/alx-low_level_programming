#include "main.h"

/**
 * main - Entry point
 *
 * Description: Write a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (success)
 *
 */

void print_alphabet(void)
{
	char an = 'a';
	while (an <= 'z')
	{
		_putchar (an);
		an++;
	}
	_putchar ('\n');
}
