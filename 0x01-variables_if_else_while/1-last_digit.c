#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * int en will give a different output everytime
 * exucute the statements and print
 * return: 0 to be successful
*/

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d", n);
	if (n > 5) {
		printf("and is greater than 5\n");
	}
	else if (n == 0){
		printf("and is 0\n");
	}
	else if (n < 6 && n > 0) {
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
