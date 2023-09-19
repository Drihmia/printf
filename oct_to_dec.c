#include "main.h"

/**
 * oct - this function convert decimaloctal to octal number
 * @n: the number that we want to convert
 * Return: it return decimal number
 */

int oct(unsigned int n)
{
	int len = 0, lem, i;
	char *oct;
	unsigned int m = n;

	if (n == 0)
	{
		putchar('0');
		return (1);
	}

	while (n > 0)
	{
		n = n / 8;
		len++;
	}
	oct = malloc(sizeof(char) * (len + 1));
	if (oct == NULL)
		return (0);

	for (lem = len - 1; lem >= 0; --lem)
	{
		*(oct + lem) = (m % 8) + '0';
		m /= 8;
	}
	oct[len] = '\0';
	for (i = 0; oct[i]; i++)
		putchar(oct[i]);
	free(oct);
	return (len);
}

/**
 * dec_to - printf decimal to another format.
 * @str: char.
 * @list: va_list type.
 * Return: number of printed chars.
 */
int dec_to(va_list list, char str)
{
	int len_pr = 0;

	if (str == 'o')
		len_pr += oct(va_arg(list, int)), va_end(list);
	else if (str == 'b')
		len_pr += dec_to_bin(va_arg(list, int)), va_end(list);
	else if (str == 'X')
		len_pr += DEC_TO_HEXA(va_arg(list, int)), va_end(list);
	else if (str == 'x')
		len_pr += dec_to_hexa(va_arg(list, int)), va_end(list);
	return (len_pr);
}

/**
 * is_dec_to - check if there is a o, b, x, X after %.
 * @s: char.
 * return: 1 is there one of those, and 0 if not.
 */
int is_dec_to(char s)
{
	int i = 0;

	if (s == 'o' || s == 'b')
		i = 1;
	else if (s == 'X' || s == 'x')
		i = 1;
	return (i);
}
