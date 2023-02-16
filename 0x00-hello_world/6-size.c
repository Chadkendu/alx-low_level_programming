#include <stdio.h>

/*
 * main - Entry point
 *
 * Description: 'main is the entry point for all c program'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
    	printf("Size of an int: %zu byte(s)\n", sizeof(integerType));
   	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
    	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
    	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

   	return(0);
}
