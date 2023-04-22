#include <stdio.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *Description: 'get the last difit of a number'
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
