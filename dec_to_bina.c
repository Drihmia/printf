#include "main.h"

/**
 * DEC_TO_HEXA - this function convert a decimal num to an hexa with uppercase
 * @decimal_number: the decimal number
 */

char * DEC_TO_HEXA(int decimal_number)
{
	int i = 0, j, tmp = decimal_number, start, end;
	char *hexa_number, temp;

	if (decimal_number == 0)
	{
		hexa_number = malloc(sizeof(char) * 2);
		if (hexa_number == NULL)
			return (NULL);
		hexa_number[0] = '0';
		hexa_number[1] = '\0';
		return (hexa_number);
	}

	while (tmp != 0)
	{
		tmp = tmp / 16;
		i++;
	}

	hexa_number = malloc(sizeof(char)*(i + 1));
	if (hexa_number == NULL)
		return (NULL);
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
	return (hexa_number);
}

/**
 * dec_to_hexa - this function convert a decimal num to an hexa with lowercase
 * @decimal_number: the decimal number
 */

char * dec_to_hexa(int decimal_number)
{
int i = 0, j, tmp = decimal_number, start, end;
char *hexa_number, temp;

	if (decimal_number == 0)
	{
	hexa_number = malloc(sizeof(char) * 2);
	if (hexa_number == NULL)
		return (NULL);
	hexa_number[0] = '0';
	hexa_number[1] = '\0';
	return (hexa_number);
	}

	while (tmp != 0)
	{
		tmp = tmp / 16;
		i++;
	}

	hexa_number = malloc(sizeof(char)*(i + 1));
		if (hexa_number == NULL)
			return (NULL);
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
return (hexa_number);
}
