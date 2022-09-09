#include <stdio.h>

/**
 * main - prints all single digits of base 10 starting from 0
 * followed by a new line
 * Return: Always 0 
 */

int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
