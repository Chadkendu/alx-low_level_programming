#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of a list
 *
 * Description:
 * @head: pointer to pointer to head node
 * @n: value of the new node to be inserted
 *
 * Return: address of new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		temp->next = new_node;
		new_node->prev = temp;
	}

	return (new_node);
}
