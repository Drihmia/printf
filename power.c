#include "main.h"


/**
 * _pow - raised m to the power of n
 * @m: the base is an integer
 * @n: the exponent is an integer
 * Return: m raised to n
 */
unsigned int _upow(int m, int n)
{
	unsigned int r;
	int i;

	r = 1;
	for (i = 0; i < n; i++)
	{
		r *= (unsigned int)m;
	}
	return (r);
}


/**
 * _pow - raised m to the power of n
 * @m: the base is an integer
 * @n: the exponent is an integer
 * Return: m raised to n
 */
int _pow(int m, int n)
{
	int r, i;

	r = 1;
	for (i = 0; i < n; i++)
	{
		r *= m;
	}
	return (r);
}
