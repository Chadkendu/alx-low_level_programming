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
	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
    	printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
   	printf("Size of a long int: %ld byte(s)\n", sizeof(longintType));
    	printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongintType));
    	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));

   	return(0);
}
