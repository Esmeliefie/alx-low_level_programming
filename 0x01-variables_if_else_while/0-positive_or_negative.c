#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * assign a a randon number var n
 * execute and print it
 * return: 0 always (successful)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0) 
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else (n < 0) 
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
