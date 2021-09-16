#include "lists.h"

/**
 * free_dlistint - free a dlist
 * @head: pointer to the head of a dlist
 *
 * Return: (void)
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	
	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
