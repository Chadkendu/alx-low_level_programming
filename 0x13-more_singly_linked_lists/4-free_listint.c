#include "lists.h"

/**
  * free_listint - frees a list
  *
  * @head: head of list to free
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
		return;
	while (head->next)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
