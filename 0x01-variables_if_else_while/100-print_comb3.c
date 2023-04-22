#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Determines if a number is positive, negative or zero.
 *Description: 'get the last difit of a number'
 * Return: Always 0
 */

int main(void)
{
	int d, p;
	
	for (d = '0'; d < '9'; d++)
	{
	
	for (p = d + 1; p <= '9'; p++)
	{
	if (p != d)
	{
	putchar(d);
	putchar(p);
	if (d == '8' && p == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
