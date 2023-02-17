#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: a program that prints all single
 * digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n);
	putchar("\n");
	return (0);
}
