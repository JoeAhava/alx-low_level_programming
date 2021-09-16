#include "lists.h"

/**
 * dlistint_len - calculates length of a
 * doubly linked list
 * @h: pointer to the head of a dlist
 *
 * Return: the size of the list
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size += 1;
		h = h->next;
	}
	return (size);
}
