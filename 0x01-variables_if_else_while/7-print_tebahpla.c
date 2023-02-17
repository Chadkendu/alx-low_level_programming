#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description:  a program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char box;

	for (box = 'a'; box >= 'z'; box--);
			putchar(box);
			putchar("\n");
	return (0);
}
