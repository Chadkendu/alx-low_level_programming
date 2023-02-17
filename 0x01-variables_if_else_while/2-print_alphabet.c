#include <stdio.h>

/**
 * main - entry point
 *
 * Description: main is the entry point for all c program
 * we are printing all the alphabet in lowercase
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			putchar(alphabet);
			printf("\n");
	return (0);
}	
