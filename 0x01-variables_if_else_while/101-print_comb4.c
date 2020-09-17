#include <stdio.h>

/**
 *
 */
int main(void)
{
int pri = '0';
int seg;
int ter;

while (pri <= '9')
{
seg = pri + 1;
while (seg <= '9')
{
ter = seg + 1;
while (ter <= '9')
{
putchar(pri);
putchar(seg);
putchar(ter);
if (pri == '7' && seg == '8' && ter == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
ter++;
}
seg++;
}
pri++;
}
return (0);
}
