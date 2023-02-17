#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: Print all alphabet in lowercase except q and e
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'd'; low++)
		putchar(low);
	for (low = 'f'; low <= 'p'; low++)
		putchar(low);
	for (low = 'r'; low <= 'z'; low++)
		putchar(low);
	printf("\n");
	return (0);
}
