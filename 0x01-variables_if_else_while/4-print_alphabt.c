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
	char low, e, q;
		e = 'e';
		q = 'q';
	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
			putchar(low);
	}
	printf("\n");
	return (0);
}
