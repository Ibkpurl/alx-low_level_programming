#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @pq: integer input
 * Return: absolute value of pq
 */
int _abs(int pq)
{
	return (pq * ((pq > 0) - (pq < 0)));
}
