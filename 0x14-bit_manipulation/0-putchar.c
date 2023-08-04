#include "main.h"
#include <unistd.h>
/**
 * _putchar - Function that writes the character g to stdout
 * @g: Is the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char g)
{
	return (write(1, &g, 1));
}
