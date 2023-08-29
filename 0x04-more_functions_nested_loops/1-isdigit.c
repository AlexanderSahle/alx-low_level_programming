#include "main.h"

/**
 * _isdigit - function that checks for a digit b/n 0 to 9.
 *
 * @c: an intiger to be checked and print.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

