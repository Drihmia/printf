#include "main.h"

/**
 * dec_to_bina - this function convert decimal to binary
 * @n: the decimal number
 * Return: it return the binary number
 */

int dec_to_bina(unsigned int n)
{
	unsigned s, i = 0, j = 1;
	while (n > 0)
	{
		s = n % 2;
		i += s * j;
		n /= 2;
		j *= 10;
	}
	return (i);
}
