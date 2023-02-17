#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: a program that prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int ldw;

	for (ldw = '0'; ldw <= '9'; ldw++)
	{
		putchar(ldw);
		if (d != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
