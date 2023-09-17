#include "main.h"


/**
 * _upow - raised m to the power of n
 * @m: the base is an integer
 * @n: the exponent is an integer
 * Return: m raised to n
 */
unsigned int _upow(int m, int n)
{
	unsigned int r;
	int i;

	r = 1;
	for (i = 0; i < n; i++)
	{
		r *= (unsigned int)m;
	}
	return (r);
}


/**
 * _pow - raised m to the power of n
 * @m: the base is an integer
 * @n: the exponent is an integer
 * Return: m raised to n
 */
int _pow(int m, int n)
{
	int r, i;

	r = 1;
	for (i = 0; i < n; i++)
	{
		r *= m;
	}
	return (r);
}

/**
 * print_str - print a string.
 * @str: pointer to char.
 * Return: the lenght of printed chars.
 */
int print_str(char *str)
{
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		putchar(*str);
		str++;
	}
	return (_strlen_printed(str));
}

/**
 * _strlen_printed - determine the number of printed char in a string.
 * @s: string.
 * Return: return the lenght of the given string s.
 */
int _strlen_printed(const char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		if ( *s == '%')
		{
			s++;
			if (*s == '%')
				i++;
			else if (*s == 'c' || *s == 'd' || *s == 'e')
				s++;
			else if (*s == 'f' || *s == 'g' || *s == 'i')
				s++;
			else if (*s == 'o' || *s == 's' || *s == 'u')
				s++;
			else if (*s == 'x')
				s++;
		}
		else if ((*s >= 32 && *s < 127) || (*s <= 13 && *s >= 7))
			i++;
	}
	return (i);
}
