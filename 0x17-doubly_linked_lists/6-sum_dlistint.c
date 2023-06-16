#include "lists.h"

/**
 * sum_dlistint - computes the sum of data in a list
 *
 * Description:
 * @head: pointer to head node of list
 *
 * Return: sum of data in the list or 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (!head)
		return (0);

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
