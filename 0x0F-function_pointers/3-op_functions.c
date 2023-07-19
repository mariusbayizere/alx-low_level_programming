#include "3-calc.h"
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *op_add - return the of two number
 *@a: the first number.
 *@b: the second number.
 *Return: the sum of two number
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - return the of two number
 *@a: the first number.
 *@b: the second number.
 *Return: the difference of two number
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - return the of two number
 *@a: the first number.
 *@b: the second number.
 *Return: the product of two number
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - return the of two number
 *@a: the first number.
 *@b: the second number.
 *Return: the division of two number
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod - return the of two number
 *@a: the first number.
 *@b: the second number.
 *Return: the modulus of two number
 */
int op_mod(int a, int b)
{
	return (a % b);
}
