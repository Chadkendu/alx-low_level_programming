#include "lists.h"

/**
  * add_nodeint - adds a node to beginning of list
  *
  * @head: the first element of list
  * @n: int to make content of new node
  * Return: address of new element of NULL if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!head)
		return (NULL);

	if (head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
