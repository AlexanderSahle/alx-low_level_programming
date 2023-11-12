#include "variadic_functions.h"

/**
 * print_numbers - a variadic fun to print numbers
 *
 * @n: intigeers
 * @separator: strings that sepatet the num
 *
 * Return: 0 in success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argv;

	va_start(argv, i);

	while (*separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			va_start(argv, i);
			n = va_arg(argv, unsigned int);
			printf("%ud%s\n", n, (*separetor));
		}
	}
	va_end(argv);
}
