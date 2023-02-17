#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - 1-last_digit.c
 *
 * Description: srand for random numbers
 *
 * return: Always 0 (success)
 *
 */

int main(void)
{
	int n;
	
	lastDigit = n % 10;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (lastDigit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n,lastDigit);
	else if (lastDigit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n,lastDigit);
	else (lastDigit < 6 ! 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n,lastDigit);
	return (0);
}

