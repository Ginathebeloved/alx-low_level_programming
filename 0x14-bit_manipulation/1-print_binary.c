#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * without using arrays
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, binary = 0;
	unsigned long int len;

	for (i = 63; i >= 0; i--)
	{
		len = n >> i;

		if (len & 1)
		{
			_putchar('1');
			binary++;
		}
		else if (binary)
			_putchar('0');
	}
	if (!binary)
		_putchar('0');
}
