#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print the dogs data
 * @d: dog
 *
 * Return: Nthing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("NAME: %s\n", (d->name) ? d->name : "(nil)");
		printf("AGE: %f\n", (d->age) ? d->age :0);
		printf("OWNER: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
