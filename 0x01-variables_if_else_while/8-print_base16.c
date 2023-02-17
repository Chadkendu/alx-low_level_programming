#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: a program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int low;

	for (low = '0'; low <= '9'; low++)
	{
		putchar(low);
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
