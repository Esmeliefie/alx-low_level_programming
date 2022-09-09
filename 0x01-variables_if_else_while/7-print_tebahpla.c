#include <stdio.h>

/**
*main - prints alphabet letter in lowercase
*followed by a new line
*return: 0 always
*/

int main(void)
{
    char ch;

    for (ch = 'z'; ch <= 'a'; ch--)
    {
        putchar(ch);
    }
    putchar('\n');
    return (0);
}
