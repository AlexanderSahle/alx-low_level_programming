#include"main.h"
#include <stdio.h>

/**
 * main -  prints the numbers from 1 to 100.
 *
 * Discription: print fizz for multiple of 3, cuz for multiple of 5 and,
 * print Fizz Buzz if the No is meltiple both by 3 & 5.
 *
 * Return: 0 successes.
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0 && n % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (n == 1)
		{
			printf("1");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}
