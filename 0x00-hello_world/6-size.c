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
	long longType;
	double doubleType;
	float floatType;

    // Sizeof operator is used to evaluate the size of a variable
    printf("Size of char: %ld bytes\n",sizeof(charType));
    printf("Size of int: %ld bytes\n",sizeof(integerType));
    printf("Size of long: %ld bytes\n",sizeof(longType));
    printf("Size of double: %ld bytes\n",sizeof(doubleType));
    printf("Size of float: %ld byte\n",sizeof(floatType));

    return 0;
}
