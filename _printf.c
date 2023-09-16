#include "main.h"

/**
 * _printf - it's like the function printf in the cases
 * @format: the format
 * Return: it always return 0
 */

int _printf(const char *format, ...)
{
	va_list list;
	const char *i = format;
	char *arg;

	va_start(list, format);
	for (; *i != '\0'; i++)
	{
		if (*i == '%')
		{
			if (*(i + 1) == 'c')
				_putchar(va_arg(list, int)), i++;
			else if (*(i + 1) == 's')
				arg = va_arg(list, char *), write(1, arg, strlen(arg)), i++;
			else if (*(i + 1) == '%')
				_putchar('%'), i++;
			else if (*(i + 1) == 'd' || *(i + 1) == 'i')
				print_number(va_arg(list, int)), i++;
			else if (*(i + 1) == 'u')
				print_unumber(va_arg(list, int)), i++;
			else
				exit(EXIT_FAILURE);

		}
		else
			_putchar(*i);
	}
	va_end(list);
	return (strlen(format));
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_unumber - print unsigned integers
 * @n: integer
 * Return: None
 */
void print_unumber(unsigned int n)
{
	int i;
	int a = _ulen(n);
	char hold;

	if (n > 9)
	{
		hold = (n / (int)pow(10, a - 1)) + '0';
		write(1, &hold, 1);
		for (i = 2; i < a; i++)
		{
			hold = (n / (int)pow(10, (a - i))) % 10 + '0';
			write(1, &hold, 1);
		}
	}
	hold = (n % 10) + '0';
	write(1, &hold, 1);
}

/**
 * _ulen - give a length of unsigned integer.
 * @n: integer
 * Return: number of digit in n
 */
int _ulen(unsigned int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		while (n <= -1)
		{
			n /= 10;
			i++;
		}
		return (i);
	}
	else
	{
		if (n == 0)
			return (1);
		while (n >= 1)
		{
			n /= 10;
			i++;
		}
		return (i);
	}
}

/**
 * print_number - print integers
 * @n: integer
 * Return: None
 */

void print_number(int n)
{
	int a, i;
	char hold;

	a = _len(n);
	if (n >= 0)
	{
		if (n > 9)
		{
			hold = (n / (int)pow(10, a - 1)) + '0';
			write(1, &hold, 1);
			for (i = 2; i < a; i++)
			{
				hold = (n / (int)pow(10, (a - i))) % 10 + '0';
				write(1, &hold, 1);
			}
		}
		hold = (n % 10) + '0';
		write(1, &hold, 1);
	}
	else
	{
		hold = '-';
		write(1, &hold, 1);
		if (n < -9)
		{
			hold = -(n / (int)pow(10, a - 1)) + '0';
			write(1, &hold, 1);
			for (i = 2; i < a; i++)
			{
				hold = -(n / (int)pow(10, a - i)) % 10 + '0';
				write(1, &hold, 1);
			}
		}
		hold = -(n % 10) + '0';
		write(1, &hold, 1);
	}
}

/**
 * _len - give a length of un integer.
 * @n: integer
 * Return: number of digit in n
 */
int _len(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		while (n <= -1)
		{
			n /= 10;
			i++;
		}
		return (i);
	}
	else
	{
		if (n == 0)
			return (1);
		while (n >= 1)
		{
			n /= 10;
			i++;
		}
		return (i);
	}
}
