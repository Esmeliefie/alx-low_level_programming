#include <stdio.h>

/**
*main - prints alphabet letter in lowercase followed by upercase letters
*followed by a new line
*return: 0 always
*/

int main(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        putchar(ch);
    }
    putchar('\n');
    return (0);
}
