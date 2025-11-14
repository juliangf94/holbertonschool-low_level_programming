#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the contents of a struct dog.
 * @d: Pointer to the struct dog to print.
 *
 * Description: Prints the dog's name, age, and owner. If 'd' is NULL,
 * it prints nothing. If 'name' or 'owner' is NULL, it prints "(nil)".
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name ? d->name : "(nill)"));
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner ? d->owner : "(nill)"));
}
