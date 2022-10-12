#include "3-calc.h"

/**
 * op_add - calculate the sum of two inputs
 * @a: first input
 * @b: second input
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate the difference of two input
 * @a: first input
 * @b: second input
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate the product of two input
 * @a: first input
 * @b: second input
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of two input
 * @a: first input
 * @b: second input
 *
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculate the remainder of the division of two input
 * @a: first input
 * @b: second input
 *
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
