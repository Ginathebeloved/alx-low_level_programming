#include <stdlib.h>
#include "dog.h"

/**
  * print_dog - Initializes a dog structure
  * @d: A dog structure.
  * @name: The name of the dog.
  * @age: The age of the dog.
  * @owner: The owner of the dog.
  *
  * Return: Nothing
  */
void print_dog(struct dog *d);
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
