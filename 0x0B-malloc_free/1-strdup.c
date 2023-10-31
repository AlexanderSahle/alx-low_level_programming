#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 *
 * @str: char
 *
 * Description: The _strdup() function returns pointer to new duplicate string
 *
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *c;
	int i, y = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	c = malloc(sizeof(char) * (i + 1));

	if (c == NULL)
		return (NULL);
	for (y = 0; str[y]; y++)
		c[y] = str[y];
	return (c);
}
