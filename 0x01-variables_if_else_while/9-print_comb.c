#include <stdio.h>

/**
 *main - assign a random number to the variable n for each time it is executed
 *and print the last digit is stored in the variable n
 *Return: Always 0 (Success)
 */

int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
if (ch != 57)
{
putchar(44);
putchar(32);
}
}
putchar(10); /* this is new line ascii*/
return (0);
}
