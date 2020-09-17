#include <stdio.h>
/**
 * main - Print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int pri;
int seg;

pri = 0;
while (pri <= 9)
{
seg = 0;
while (seg <= 9)
{
putchar('0' + pri);
putchar('0' + seg);
if (pri != 9 || seg != 9)
{
putchar(',');
putchar(' ');
}
seg++;
}
pri++;
}
putchar('\n');
return (0);
}
