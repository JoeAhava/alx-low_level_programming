#include "lists.h"

/**
 * sum_dlistint - get sum of all node value
 * @head: pointer to the head of a dlist
 *
 * Return: (void)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;
	return (sum);
}
