#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Discription: Get and print random number
 * and it it is posetive, negative, or zero
 * Retern: Always 0(Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		printf("%i is posetive\n", n);
	else if (n<0)
		printf("%i is  neative\n", n);
	else
	       	printf("%i is zero\n", n);
	return (0);
}	
