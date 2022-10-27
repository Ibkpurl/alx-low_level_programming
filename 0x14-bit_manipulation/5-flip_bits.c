#include "main.h"

/**
 * flip_bits - function that return the number of bits you would need to
 * flip to get from one number to another
 * @n: first integer
 * @m: second integer
 * Return: the number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt = 0;
	unsigned long int bit;

	bit = n ^ m;
	while (bit > 0)
	{
		cnt++;
		bit &= (bit - 1);
	}
	return (cnt);
}
