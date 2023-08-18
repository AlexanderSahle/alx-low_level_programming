#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 *
 * @n: number of times the charachter printed
 *
 */

void print_line(int n)
{
	char j;

	for (j = 1; j <= n; j++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else if (n <= 0)
			_putchar('\n');
	}
	_putchar('\n');
}
