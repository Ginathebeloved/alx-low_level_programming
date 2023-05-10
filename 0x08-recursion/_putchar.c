#include <unistd.h>

/**
 * main - my _putchar
 *
 * Return: Always 0.
 */

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
