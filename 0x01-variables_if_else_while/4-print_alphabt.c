#include <stdio.h>
/**
 *main - printa the alphabet in lowercase
 *followed by new line, except q and e
 *Return: always 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
