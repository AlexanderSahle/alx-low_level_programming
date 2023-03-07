#include <stdio.h>
/**
 * main - main block
 * Discription: print the  alphabet in lower case  
 * and the  in  uppercase, follow by a new  line
 * Retern: Always 0(Success)
*/

int main(void)
{
        char c = 'a';

        while (c <= 'z')
        {
		putchar(c);
                c++;
        }

	c = 'A';

	while (c <= 'z')
	{
		putchar(c);
                c++;
	}

        putchar('\n');
        return (0);
}
