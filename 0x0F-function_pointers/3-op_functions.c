#include "3-calc.h"

/**
*op_add - returnssum of two numbers
*@a: 1st number
*@b: 2nd number
*
*Return: sum of a + b
*/

int op_add(int a, int b)
{
	return (a + b);
}


/**
*op_sub - returns result of substracting two numbers
*@a: 1st number
*@b: 2nd number
*
*Return: diff between a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - returns result of multiplying two numbers
*@a: 1st number
*@b: 2nd number
*
*Return: result of multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - returns result of dividing of two numbers.
*@a: 1st number.
*@b: 2nd number.
*
*Return: result of div
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
*op_mod - returns remainder of the division of two numbers.
*@a: 1st number.
*@b: 2nd num
*
*Return: remainder
*/
int op_mod(int a, int b)
{
	return (a % b);
}
