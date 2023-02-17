#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	char low = 'a';
	for (low = 'a'; low <= 'z'; low++)
			putchar(low);
			printf("\n");
	return (0);
}	
