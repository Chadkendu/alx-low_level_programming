#include "lists.h"

/**
  * reverse_listint - reverses a linked list
  *
  * @head: head of the list
  * Return: new first node of list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	if (!head || !(*head))
		return (NULL);

	prev = NULL;
	next = *head;

	while (next)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}
