#include "lists.h"

/**
 * print_dlistint - prints a doubly
 * linked list
 * @h: pointer to the head of a dlist
 *
 * Return: the size of the list
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	while (h)
	{
		printf("%d\n", h->n);
		size += 1;
		h = h->next;
	}
	return (size);
	
}
