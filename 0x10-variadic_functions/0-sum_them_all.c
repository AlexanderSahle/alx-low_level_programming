#include "variadic_functions.h"

/**
 * sum_them - a vardiac fun to accept many arguments.
 * @n: an input intiger 
 *
 * Return: (0), wheen n equal to 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int summition, i;
	va_list addg;
	va_start(addg, n);

	for (i = 0; i < n; i++)
	{
		summition += va_arg(addg, unsigned int);
	}
	va_end(addg);

	return (summition);

}
