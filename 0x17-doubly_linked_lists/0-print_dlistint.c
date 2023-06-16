#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * Description:
 * @h: pointe head of list
 * Return: number nodes in the list
 *
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	if (!h)
		return (count);

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
