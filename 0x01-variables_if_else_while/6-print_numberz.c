#include <stdio.h>

/**
 * main - prints all single digits of base 10 starting from 0
 * followed by a new line
 * Return: Always 0
*/

int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
