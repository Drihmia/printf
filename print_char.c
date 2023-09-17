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
