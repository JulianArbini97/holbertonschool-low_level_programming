#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int num = '0';
int ch = 'a';
while (num <= '9')
putchar(num++);
while (ch <= 'f')
putchar(ch++);
putchar('\n');
return (0);
}
