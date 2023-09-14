#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - prints sum of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - prints differences of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - prints product of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - print division of twonumbers
 * @a: first number
 * @b: second number
 *
 * Return: result of a/b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - print the remainder of the division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
