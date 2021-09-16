#include "lists.h"

/**
 * insert_dnodeint_at_index - insert at given index
 * @h: pointer to the head of a dlist
 * @idx: index | integer
 * @n: integer
 *
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new;
	unsigned int i;

	if (*h == NULL)
	{
		return (NULL);
	}
	temp = *h;
	for (i = 0; i < idx; i++)
	{
		if (temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (temp->prev == NULL)
	{
		new->prev = NULL;
		new->next = temp;
		temp->prev = new;
		*h = new;
	}
	else if (temp->next == NULL)
	{
		new->next = NULL;
		new->prev = temp;
		temp->next = new;
	}
	else
	{
		new->prev = temp->prev;
		new->next = temp;
		temp->prev->next = new;
		temp->prev = new;
	}

	return (new);
}
