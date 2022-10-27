#include "lists.h"

/**
 * list_len - give the number of elements in a list.
 * @h: pointer to list.
 *
 * Return: number of elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
