#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at specific position
 *
 * Description:
 * @head: double pointer to head node
 * @index: position of node to be deleted
 *
 * Return: 1 if successful, otherwise fail
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (!*head)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	while (count < index)
	{
		count++;
		temp = temp->next;

		if (!temp) /* when idx is out of range */
			return (-1);
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
