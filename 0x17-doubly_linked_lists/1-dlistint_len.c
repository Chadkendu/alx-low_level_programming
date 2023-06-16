#include "lists.h"

/**
 * dlistint_len - computes the number of nodes in a list
 *
 * Description:
 * @h: pointer  head node of the list
 * Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	if (!h)
		return (count);

	temp = h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
