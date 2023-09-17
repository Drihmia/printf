#include "main.h"

/**
 * print_unumber - print unsigned integers
 * @n: integer
 * Return: None
 */
int print_unumber(unsigned int n)
{
	int i;
	int a = _ulen(n);
	char hold;

	if (n > 9)
	{
		hold = (n / (int)_pow(10, a - 1)) + '0';
		putchar(hold);
		for (i = 2; i < a; i++)
		{
			hold = (n / (int)_pow(10, (a - i))) % 10 + '0';
			putchar(hold);
		}
	}
	hold = (n % 10) + '0';
	putchar(hold);
	return (_len(n));
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
		if (n == 0)
			return (1);
		while (n >= 1)
		{
			n /= 10;
			i++;
		}
		return (i);
}

/**
 * print_number - print integers
 * @n: integer
 * Return: the lenght of the number printed.
 */

int print_number(int n)
{
	int a, i;
	char hold;

	a = _len(n);
	if (n >= 0)
	{
		if (n > 9)
		{
			hold = (n / (int)_pow(10, a - 1)) + '0';
			putchar(hold);
			for (i = 2; i < a; i++)
			{
				hold = (n / (int)_pow(10, (a - i))) % 10 + '0';
				putchar(hold);
			}
		}
		hold = (n % 10) + '0';
		putchar(hold);
	}
	else
	{
		hold = '-';
		putchar(hold);
		if (n < -9)
		{
			hold = -(n / (int)_pow(10, a - 1)) + '0';
			putchar(hold);
			for (i = 2; i < a; i++)
			{
				hold = -(n / (int)_pow(10, a - i)) % 10 + '0';
				putchar(hold);
			}
		}
		hold = -(n % 10) + '0';
		putchar(hold);
	}
	return (_len(n));
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
