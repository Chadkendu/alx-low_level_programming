#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: srand generate random seed numbers
 * in the c program for the project
 * main is the entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int n;
	char str[] = "Last digit of";
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("%s %d is %d and is greater than 5\n", str, n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%s %d is %d and is 0\n", str, n, lastDigit);
	}
	else if (lastDigit < 6)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, lastDigit);
	}
	return (0);
}

