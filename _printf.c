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
	int c;
	char *arg;

	va_start(list, format);
	for (; *i != '\0'; i++)
	{
		if (*i == '%')
		{
			if (*(i + 1) == 'c')
			{
				c = va_arg(list, int);
				_putchar(c);
				i++;
			}
			else if (*(i + 1) == 's')
			{
				arg = va_arg(list, char *);
				while (*arg)
				{
					_putchar(*arg);
					arg++;
				}
				i++;
			}
			else if (*(i + 1) == '%')
			{
				_putchar('%');
				i++;
			}
			else
				exit(EXIT_FAILURE);

		}
		else
			_putchar(*i);
	}
	_putchar('\n');
	va_end(list);
	return (0);
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
