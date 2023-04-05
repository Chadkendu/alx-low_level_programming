#include "lists.h"

/**
  * listint_len - returns number of elements in linked list
  *
  * @h: list to traverse
  * Return: size_t number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
