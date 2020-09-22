#include "holberton.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char ch = 'a';
int num = '0';

while (num <= '9')
{
num++;
while (ch <= 'z')
_putchar(ch++);
_putchar('\n');
ch = 'a';
}
}
