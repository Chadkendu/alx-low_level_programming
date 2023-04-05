#include "lists.h"

/**
  * pop_listint - deletes head of list and returns head's data
  *
  * @head: head of linked list
  * Return: int value of head
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !(*head))
		return (0);
	temp = *head;
	n = (*head)->n;
	if (temp->next)
		*head = temp->next;
	else
		*head = NULL;
	free(temp);
	return (n);
}
