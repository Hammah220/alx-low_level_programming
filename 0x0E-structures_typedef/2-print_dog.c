#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - Function that prints a dog from struct dog
* @d: struct holding various variables
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: ");
if (d->name == NULL)
printf("(nil)\n");
else
printf("%s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: ");
if (d->owner == NULL)
printf("(nil)\n");
else
printf("%s\n", d->owner);
}
}
