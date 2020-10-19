#include "dog.h"

/**
 * _strlen - check the code for Holberton School students.
 * @str: Pointer
 * Return: Always 0.
 */

int _strlen(char *str)
{
int b = 0;
while (*(str + b) != 0)
{
b++;
}
return (b);
}

/**
 * _strdup - check the code for Holberton School students.
 * @str: punt
 * Return: Pointer.
 */

char *_strdup(char *str)
{
int a = 0, b = 0;
char *s;
if (str == 0)
{
return (NULL);
}
while (str[a] != 0)
{
a++;
}
s = (char *)malloc(sizeof(char) * a + 1);
if (s == NULL)
{
return (NULL);
}
for (b = 0; b < a; b++)
{
s[b] = str[b];
}
return (s);
}

/**
 * new_dog - creates a new dog
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: the newly created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}
dog->name = _strdup(name);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = _strdup(owner);
if (dog->owner == NULL)
{
free(dog);
return (NULL);
}
dog->age = age;
return (dog);
}
