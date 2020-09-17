#include <stdio.h>

/**
 * main - loop through variables a and b, printing digits
 *
 * Return: print to stdout all possible different combinations of two digits
 */
int main(void)
{
int pri = '0';
int seg;

while (pri <= '9')
{
seg = pri + 1;
while (seg <= '9')
{
putchar(pri);
putchar(seg);
if (pri == '8' && seg == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
seg++;
}
pri++;
}
return (0);
}
