#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Return the difference of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - returns the module of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the module of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

/**
 * op_div - returns the division of two numbers
 * @a: the first number
 * @b: the second numer
 * Return: the quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}
