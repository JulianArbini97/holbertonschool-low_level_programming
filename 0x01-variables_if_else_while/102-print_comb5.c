#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int pripri = '0';
int priseg = '0';
int segpri = '0';
int segseg = '0';

for (pripri = 48; pripri <= 57; pripri++)
{
for (priseg = 48; priseg <= 57; priseg++)
{
for (segpri = 48; segpri <= 57; segpri++)
{
for (segseg = 48; segseg <= 57; segseg++)
{
if (pripri < segpri || (pripri == segpri && priseg < segseg))
{
putchar (pripri);
putchar (priseg);
putchar (' ');
putchar (segpri);
putchar (segseg);
if (pripri != '9' || priseg != '8' || segpri != '9' || segseg != '9')
{
putchar (',');
putchar (' ');
}
}
}
}
}
}
putchar ('\n');
return (0);
}
