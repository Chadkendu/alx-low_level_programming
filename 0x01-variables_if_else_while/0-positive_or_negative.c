#include <stdlib.h>
#include <time.h>

/* main - entry point
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
	if(n > 0)
		printf("is positive\n");
	if(n = 0)
		printf("is zero\n");
	if(n < 0)
		printf("is negative");
	return (0);
}
