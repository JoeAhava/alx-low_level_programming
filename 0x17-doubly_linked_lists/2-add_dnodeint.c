#include "lists.h"

/**
 * add_dnodeint - add node to the beggining
 * of a  doubly linked list
 * @head: pointer to the head of a dlist
 * @n: new value to insert
 *
 * Return: pointer to updated list
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;
	
	if (head == NULL)
	{
		return (NULL);
	}
	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	*head = new;
	new->next = temp;
	if (temp != NULL)
	{
		temp->prev = new;
	}
	return (*head);
}
