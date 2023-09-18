#include "main.h"

/**
 * dec_to_bina - this function convert decimal to binary
 * @n: the decimal number
 * Return: it return the binary number
 */

int dec_to_bina(unsigned int n)
{
unsigned int s, i = 0, j = 1;
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
 * DEC_TO_HEXA - this function convert a decimal num to an hexa with uppercase
 * @decimal_number: the decimal number
 */

void DEC_TO_HEXA(int decimal_number)
{
int i = 0, j, temp;
char hexa_number[100];
	while (decimal_number != 0)
	{
		temp = decimal_number % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 55;
		hexa_number[i] = temp, i++;
		decimal_number = decimal_number / 16;
	}
	for (j = i - 1; j >= 0; j--)
		putchar(hexa_number[j]);
}

/**
 * dec_to_hexa - this function convert a decimal num to an hexa with lowercase
 * @decimal_number: the decimal number
 */

void dec_to_hexa(int decimal_number)
{
	int i = 0, j, temp;
	char hexa_number[100];

	while (decimal_number != 0)
	{
		temp = decimal_number % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 87;
		hexa_number[i] = temp, i++;
		decimal_number = decimal_number / 16;
	}
	for (j = i - 1; j >= 0; j--)
		putchar(hexa_number[j]);
}
