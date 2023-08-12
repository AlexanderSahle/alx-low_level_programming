#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Discription: prints all single digit number of base 10
 * starting from 0; followed by new line.
 * Return: Always 0(Success)
*/

int main(void)
{
        char c = 'z';

        while (c >= 'a')
        {
                putchar(c);
                c--;
        }
        putchar('\n');
        return (0);
}
