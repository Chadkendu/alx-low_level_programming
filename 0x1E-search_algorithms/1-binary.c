#include "search_algos.h"

/**
  * binary_search - function that searches for a value in sorted array
  *                 of integers with binary search.
  *
  * Description: Prints [sub]array being searched after each change.
  * @array: Pointer to first element of array to search.
  * @size: Number of elements in the array.
  * @value: Value to search
  *
  * Return: If value is not present or array is NULL, -1.
  *         Otherwise, index where value is located.
  *
  */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

