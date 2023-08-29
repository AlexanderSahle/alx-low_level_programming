#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 *
 * @n: the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int x, y = 0;

	while (n > 0)
	{
		x = y;
		while (x > 0)
		{
			_putchar(' ');
			x--;
		}
		_putchar('\\');
		_putchar('\n');
		y++;
		n--;
	}
	if (y < 1)
		_putchar('\n');
}
