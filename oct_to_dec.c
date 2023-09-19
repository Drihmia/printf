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
		return (0);
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
