#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int num = '0';

while (num <= '9')
putchar(num++);
putchar('\n');
return (0);
}
