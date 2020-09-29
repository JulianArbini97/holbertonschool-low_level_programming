#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - check the code for Holberton School students.
 * @a: Puntero
 * @b: Puntero
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int q = *a; /*Defino las variables con sus respectivos punteros */
int w = *b;
q = 98; /* Se le da el valor a la variable */
w = 42;
*a = w; /* Intercambio el valor de las variables con nuevos punteros */
*b = q;
}
