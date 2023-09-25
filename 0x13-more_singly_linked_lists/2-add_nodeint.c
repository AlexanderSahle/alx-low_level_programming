#include "lists.h"

/**
 * *add_nodeint - function that adds a new node at the beginning of a listint_t
 *
 * @n: data on the node
 * @head: pointer to the first node in the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == 0)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
