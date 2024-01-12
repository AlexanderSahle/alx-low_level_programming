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
	unsigned int i, num;

	va_list argv;

	va_start(argv, n);

	while (*separator)
	{
		for (i = 0; i < n; i++)
		{
			num = va_arg(argv, unsigned int);
			printf("%u", num);
		}
		char * s = va_arg(argv, int);
		printf("%s\n", s);
	}
	va_end(argv);
}
