#include <stdio.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *Description: 'get the last difit of a number'
 * Return: Always 0
 */

int main(void)
{
	int n = 99;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
