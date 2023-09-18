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

/**
 * DEC_TO_HEXA - this function convert a decimal number to an hexa with uppercase
 * @decimal_number: the decimal number
 */

void DEC_TO_HEXA(int decimal_Number)
{
	int i = 1, j, temp;
	char hexa_Number[100];

	while (decimal_Number != 0) {
		temp = decimal_Number % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 55;
		hexa_Number[i++] = temp;
		decimal_Number = decimal_Number / 16;
	}
	for (j = i - 1; j > 0; j--)
		putchar(hexa_Number[j]);
}
