#include "lists.h"

/**
 * listint_len - a fun that print intigeer
 *
 * @h: linked list /traverce
 *
 * Return: int
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != 0)
	{
		n++;
		h = h->next;
	}

	return (n);
}
