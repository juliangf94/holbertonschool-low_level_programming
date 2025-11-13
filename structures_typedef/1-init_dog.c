#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to the struct dog variable to initialize.
 * @name: The dog's name (char *).
 * @age: The dog's age (float).
 * @owner: The dog's owner (char *).
 *
 * Description: Fills the structure members with the provided values.
 * Checks if the pointer d is valid before initialization.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
