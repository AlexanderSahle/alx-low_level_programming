#include <limits.h>
#include <stdlib.h>

/**
 * main - introduction to malloc and free
 *
 * Return: 0
 */

int main(void)
{
	char *s;

	while (1)
	{
		s = malloc(INT_MAX);
		s[0] = 'H';
	}
	return (0);
}
