#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to the struct dog variable to print
 *
 * Description: This function prints the name, age,
 *              and owner of a struct dog. If any
 *              element is NULL, it prints "(nil)"
 *              instead.
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    if (d->name == NULL)
		d->name = "(nil)";

    if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
