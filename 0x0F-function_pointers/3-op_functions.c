#include "3-calc.h"

/**
 * op_add - calculates sum of two integers
 * @a: first int arg
 * @b: second int arg
 *
 * Return: sum of int a and int b.
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - calculates difference of two integers
 * @a: first int arg
 * @b: second int arg
 *
 * Return: difference of int a and int b.
 */
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}

/**
 * op_mul - calculates product of two integers
 * @a: first int arg
 * @b: second int arg
 *
 * Return: product of int a and int b.
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}

/**
 * op_div - calculates division of two integers
 * @a: first int arg
 * @b: second int arg
 *
 * Return: division of int a and int b.
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
 * op_mod - calculates remainder of division of two integers
 * @a: first int arg
 * @b: second int arg
 *
 * Return: remainder of the division int a and int b.
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
