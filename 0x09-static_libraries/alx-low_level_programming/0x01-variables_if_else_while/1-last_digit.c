#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 *
 * Discription: Get random number numberand chack its last digit, compare it with 5
 *
 * Retern: Always 0(Success)
*/

int main(void)
{
	int n;
	int last;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
	last = n % 10;
        if (last > 5)
                printf("Last digit of %i is %i is greater than 5\n", n, last);
        else if (last == 0)
                printf("Last digit of %i is %i is 0\n", n, last);
        else if (last < 6)
                printf("Last digit of %i is %i is less than 6 and not 0\n", n, last);
        return (0);
}
