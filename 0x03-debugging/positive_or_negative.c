#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 *
 * Discription: print if the number is positive, negative or 0
 *
 * Return: Always 0(Success)
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
        {
                printf("%i is positive\n", n);
        }
        else if (n == 0)
        {
                printf("%i is zero\n", n);
        }
        else
        {
                printf("%i is negative\n", n);
        }
	return (0);
}

