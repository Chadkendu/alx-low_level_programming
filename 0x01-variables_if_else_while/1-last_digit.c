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
	char str[] = "Last digit of";	
	lastDigit = n % 10;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (lastDigit > 5)
	{
		printf("%s %d is %d and is greater than 5\n", str,n,lastDigit);
	else if (lastDigit == 0)
	{
		printf("%s %d is %d and is 0\n", str,n,lastDigit);
	else if (lastDigit < 6)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", str,n,lastDigit);
	return (0);
}

