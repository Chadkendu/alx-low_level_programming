#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a specific position
 *
 * Description;
 * @h: double pointer to head node of list
 * @idx: index position of new node, starting at 0
 * @n: new node data
 *
 * Return: address of new node after insertion or NULL is insertion failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *lead;
	unsigned int count = 0;

	if (!*h && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!*h && idx == 0)
	{
		new_node->prev = *h;
		*h = new_node;
		return (new_node);
	}
	if (idx == 0) /* insert at the beginning of list */
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	lead = *h;
	while (count < idx - 1)
	{
		count++;
		lead = lead->next;
		if (!lead) /* when index is out range */
			return (NULL);
	}
	if (lead->next) /* when operation is still within list */
		lead->next->prev = new_node;
	new_node->next = lead->next;
	new_node->prev = lead;
	lead->next = new_node;
	return (new_node);
}
