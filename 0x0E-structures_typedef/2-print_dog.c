#include "dog.h"

/**
 * print_dog - prints the structure
 *
 * @d: the struct dog
 */

void print_dog(struct dog *d)
{
if (d != 0)
{
printf("Name: %s\n", (d->name ? d->name : "(nil)"));
printf("Age: %0.6f\n", d->age);
printf("Owner: %s\n", (d->owner ? d->owner : "(nil)"));
}
}
