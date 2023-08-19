#include <stdio.h>
#include "dog.h"
/**
 * print_dog - functuin
 * @d: the dog struct
 * Return: void
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %S\n", d->name ? d->name : "(nil)");
		printf("Age: %d\n", d->age ? d->age : "(nil)");
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
