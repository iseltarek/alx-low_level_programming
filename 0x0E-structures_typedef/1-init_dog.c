#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes 
 * @d: init
 * @name: dogs name
 * @age: age
 * @owner:
 * @dogs: owner name
 * Return: void
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
