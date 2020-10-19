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
char *new_str;
int i = 0;
if (str == NULL)
return (NULL);
new_str = malloc(sizeof(char) * _strlen(str) + 1);
if (!new_str)
return (NULL);
while (str[i])
{
new_str[i] = str[i];
i++;
}
new_str[i] = '\0';
return (new_str);
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
free(dog->name);
free(dog);
return (NULL);
}
dog->age = age;
return (dog);
}
