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
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
	       putchar(numbers);
	printf("\n");
	return (0);
}
