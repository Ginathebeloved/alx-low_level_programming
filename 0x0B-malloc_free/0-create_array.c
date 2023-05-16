#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - creates an array of chars
* @size: The size of the array
* @c: The char to fill in the array
*
* Return: The array
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *g;
if (size == 0)
return (NULL);
g = malloc(size * sizeof(char));
if (g == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
g[i] = c;
}
return (g);
}
