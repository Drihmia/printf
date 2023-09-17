#include "main.h"

/**
 * oct_to_dec - this function convert octal to decimal number
 * @n: the number that we want to convert
 * Return: it return decimal number
 */

int oct_to_dec(int n)
{
int s, i = 0;
int sum = 0;
while (n > 0)
	{
	s = n % 10;
	n = n / 10;
	sum += _pow(8, i) * s;
	i++;
	}
return (sum);
}
