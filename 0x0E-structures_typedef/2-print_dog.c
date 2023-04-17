#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_dog - prints a struct dog
* @d: struct dog
*/
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
d->name = "(null)";
if (d->owner == NULL)
d->owner = "(null)";
if (d->age == NULL)
d->age == 0;
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
