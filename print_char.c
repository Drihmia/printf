#include "main.h"

/**
 * print_char - print a character using putchar.
 * @ch: charachter.
 * Return: 1 on sccess.
 */
int print_char(char ch)
{
	if (ch == '\0')
		return (-1);
	putchar(ch);
	return (1);
}

/**
 * print_numbers - print d,i and unsigned i od numbers.
 * @str: pointer to chars.
 * @list: it is variable of type va_list.
 * Return: integer that reflect the nember of printed characters (digits).
 */

int print_numbers(va_list list, char str)
{
	int len_pr = 0;

	if (str == 'd' || str == 'i')
		len_pr += print_number(va_arg(list, int));
	else if (str == 'u')
		len_pr += print_unumber(va_arg(list, unsigned int));
	return (len_pr);
}

/**
 * dec_to_bin - this function convert decimal to binary
 * @n: the decimal number
 * Return: it return the length of the binary number
 */

int dec_to_bin(unsigned int n)
{
	int i = 0, j;
	unsigned int tmp = n;
	char *binary;

	if (n == 0)
	{
		putchar('0');
		return (0);
	}
	while (tmp > 0)
	{
		i++;
		tmp /= 2;
	}
	binary = malloc(sizeof(char) * (i + 1));
	if (binary == NULL)
		return (-1);
	for (j = i - 1; j >= 0; j--)
	{
		*(binary + j) = (n % 2) + '0';
		n /= 2;
	}
	binary[i] = '\0';
	for (j = 0; j < i; j++)
		putchar(binary[j]);
	free(binary);
	return (i);
}


/**
 * it_spec - check if a char entred is a one of specifiers that came after %.
 * @s: char.
 * Return: return the lenght of the given string s.
 */
int it_spec(char s)
{
	int i = 0;

	if (s == 'c' || s == 'd' || s == 'e')
		i++;
	else if (s == 'f' || s == 'g' || s == 'i')
		i++;
	else if (s == 'o' || s == 's' || s == 'u')
		i++;
	else if (s == 'x')
		i++;
	else
		i = 0;
	return (i);
}
