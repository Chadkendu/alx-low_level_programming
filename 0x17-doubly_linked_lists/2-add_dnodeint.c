#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning of a list
 *
 * Description:
 * @head: pointer pointer to head node
 * @n: value of new node to be inserted
 *
 * Return: address of new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}

	return (new_node);
}
