#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int ch = 'a';

while (ch <= 'z')
putchar(ch++);
putchar('\n');
return (0);
}
