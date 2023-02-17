#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: code that print object in lowercase and uppercase
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char low;
	char high;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (high = 'A'; high <= 'Z'; high++)
		putchar(high);
	printf("\n");
	return (0);
}
