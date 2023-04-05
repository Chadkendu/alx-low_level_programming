#include "lists.h"

/**
  * delete_nodeint_at_index - deletes node at index
  *
  * @head: head of list
  * @index: index at which to delete
  * Return: 1 if success, -1 if fail
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *next;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	next = (*head)->next;
	prev = *head;
	if (index == 0)
	{
		free(prev);
		*head = next;
		return (1);
	}
	if (next)
		next = next->next;
	for (i = 1; i < index && next; i++)
	{
		prev = prev->next;
		next = next->next;
	}

	if (i == index)
	{
		free(prev->next);
		prev->next = next;
		return (1);
	}
	return (-1);
}
