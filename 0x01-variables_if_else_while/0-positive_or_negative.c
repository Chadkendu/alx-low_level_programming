#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - 0-positive_or_negative.c
 *
 * Description: This is the code for random numbers generating using the seed rand keyword(srand) and rand
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0) {
		printf("%d is positive\n", n);
	}
	else if(n = 0){
		printf("%d is zero\n", n);
	}
	else(n < 0){
		printf("%d is negative\n", n);
	}
	return (0);
}
