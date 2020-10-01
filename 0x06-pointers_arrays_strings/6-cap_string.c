#include "holberton.h"
#include <stdio.h>
/**
 * *cap_string - make lowercase to upercase on a string
 * @s: string to make uppercase
 * Return: variable s
 */
char *cap_string(char *s)
{
int a;
int b;
char no[] = " \t\n,;.!?\"(){}";
if (s[0] >= 'a' && s[0] <= 'z')
*s -= 32;
for (a = 0; s[a] ; a++)
{
for (b = 0; no[b] ; b++)
{
if (s[a] == no[b])
{
if (s[a + 1] >= 97 && s[a + 1] <= 122)
{
*(s + a + 1) -= 32;
break;
}
}
}
}
return (s);
}
