#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Discription: Write a prog that prints all possible dif combn of two digits.
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function, no (printf, puts, etc…)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: Always 0(Success)
*/
int main(void)
{
        int n, m;

        for (n = 48; n <= 56; n++)
        {
                for (m = 49; m <= 57; m++)
                {
                        if (m > n)
                        {
                                putchar(n);
                                putchar(m);
                                if (n != 56 || m != 57)
				{
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
                }
        }
        putchar('\n');
        return (0);
}
