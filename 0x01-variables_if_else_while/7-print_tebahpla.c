#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int ch = 'z';

while (ch >= 'a')
putchar(ch--);
putchar('\n');
return (0);
}
