#include "lists.h"

/**
 * get_dnodeint_at_index - get a node at index
 * @head: pointer to the head of a dlist
 * @index: index to find
 *
 * Return: (void)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	return (temp);
}
