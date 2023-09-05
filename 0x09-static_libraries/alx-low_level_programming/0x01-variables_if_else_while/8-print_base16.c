#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Discription: prints all single digit number of base 10
 * starting from 0; followed by new line.   
 * Retern: Always 0 (Success)
*/

int main(void)
{
        char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{ 
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
                putchar(ch);
        }
        putchar('\n');
        return (0);
}
