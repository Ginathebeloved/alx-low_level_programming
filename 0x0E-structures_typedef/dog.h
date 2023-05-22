#ifndef _HEADER_
#define _HEADER_

#include <stdio.h>

/**
 * struct dog - dog attirbutes
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: The attributes of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};
typedef struct dog my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
