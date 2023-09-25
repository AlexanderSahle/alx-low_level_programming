#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function that returns the number of elements in listint_t
 *
 * @h: linked list of type listint_t to print
 *
 * Return: the counted number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		 h = h->next;
	}
	return (count);
}


