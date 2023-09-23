#include "list.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*
 * print - all the list_t
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

       while (h)
       {
	       if (!h -> str)
		       ptintf("%s [0] (nil)\n");
	       else
		      printf("[%u] %s\n" h->len, h->str);
	       h = h->next;
	       s++;
       }
       return (s)
}
