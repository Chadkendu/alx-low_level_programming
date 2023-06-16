#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a list
 *
 * Description:
 * @head: pointer to head node of list
 * @index: position of node in the list
 *
 * Return: address of nth nth or NULL if it is not found
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (NULL);
}
