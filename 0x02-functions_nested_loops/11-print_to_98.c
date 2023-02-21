#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print to 98
 *
 * Description: function that prints all natural numbers from n to 98,
 *
 * @n : number to start from
 *
 * Return: Always 0 or 1 (success)
 *
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
