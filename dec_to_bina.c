#include "main.h"

/**
 * DEC_TO_HEXA - this function convert a decimal num to an hexa with uppercase
 * @decimal_number: the decimal number
 * Return:it return the length of the hexa number
 */

int DEC_TO_HEXA(unsigned int decimal_number)
{
	int i = 0, j, start, end;
	unsigned int tmp = decimal_number;
	char *hexa_number, temp;

	if (decimal_number == 0)
	{
		putchar('0');
		return (1);
	}

	while (tmp != 0)
	{
		tmp = tmp / 16;
		i++;
	}

	hexa_number = malloc(sizeof(char) * (i + 1));
	if (hexa_number == NULL)
		return (-1);
	for (j = 0; j < i; j++)
	{
		tmp = decimal_number % 16;
		hexa_number[j] = (tmp < 10) ? tmp + '0' : tmp + 'A' - 10;
		decimal_number = decimal_number / 16;
	}
	hexa_number[j] = '\0';
	for (start = 0, end = j - 1; start < end; start++, end--)
	{
		temp = hexa_number[start];
		hexa_number[start] = hexa_number[end];
		hexa_number[end] = temp;
	}
	for (j = 0; j < i; j++)
		putchar(hexa_number[j]);
	free(hexa_number);
	return (i);
}

/**
 * dec_to_hexa - this function convert a decimal num to an hexa with lowercase
 * @decimal_number: the decimal number
 * Return: it return the length of the hexa number
 */

int dec_to_hexa(unsigned int decimal_number)
{
	int i = 0, j, start, end;
	unsigned int tmp = decimal_number;
	char *hexa_number, temp;

	if (decimal_number == 0)
	{
		putchar('0');
		return (1);
	}

	while (tmp != 0)
	{
		tmp = tmp / 16;
		i++;
	}

	hexa_number = malloc(sizeof(char) * (i + 1));
	if (hexa_number == NULL)
		return (-1);
	for (j = 0; j < i; j++)
	{
		tmp = decimal_number % 16;
		hexa_number[j] = (tmp < 10) ? tmp + '0' : tmp + 'a' - 10;
		decimal_number = decimal_number / 16;
	}
	hexa_number[j] = '\0';
	for (start = 0, end = j - 1; start < end; start++, end--)
	{
		temp = hexa_number[start];
		hexa_number[start] = hexa_number[end];
		hexa_number[end] = temp;
	}
	for (j = 0; j < i; j++)
		putchar(hexa_number[j]);
	free(hexa_number);
	return (i);
}

/**
 * convertS - this function is used in the case %S
 * @string: the input text
 * Return: it return the length of output text
 */

int convertS(char *string)
{
	int i, j = 0;

	if (string == NULL)
		return (0);
	for (i = 0; string[i] != '\0'; i++)
	{
		if ((*(string + i) < 32) || (*(string + i) >= 127))
		{
			putchar('\\'), j++;
			putchar('x'), j++;
			if (*(string + i) < 16)
			{
				putchar('0'), j++;
				DEC_TO_HEXA(string[i]), j++, i++;
			}
			else
				DEC_TO_HEXA(string[i]), j += 1;
		}
			putchar(string[i]), j++;

	}
	return (j - 1);
}
