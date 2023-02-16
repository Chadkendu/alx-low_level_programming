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
	char charType;
	int integerType;
	long int longintType;
	long long longlongType;
	float floatType;

    // Sizeof operator is used to evaluate the size of a variable
    printf("Size of a char: %ld bytes\n",sizeof(charType));
    printf("Size of an int: %ld bytes\n",sizeof(integerType));
    printf("Size of a long int: %ld bytes\n",sizeof(longintType));
    printf("Size of a long long: %ld bytes\n",sizeof(longlongType));
    printf("Size of a float: %ld byte\n",sizeof(floatType));

    return 0;
}
