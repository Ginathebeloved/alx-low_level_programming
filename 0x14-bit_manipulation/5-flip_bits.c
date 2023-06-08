#include "main.h"

/**
 * flip_bits - funcyion that counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counts = 0;
	unsigned long int binary;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		binary = exclusive >> i;
		if (binary & 1)
			counts++;
	}

	return (counts);
}

