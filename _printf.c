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

	if (format != NULL && format[0] != '\0')
	{
		va_start(list, format);
		for (; *i != '\0'; i++)
		{
			if (*i == '%')
			{
				if (*(i + 1) == 'c')
					putchar(va_arg(list, int)), i++;
				else if (*(i + 1) == 's')
					print_str(va_arg(list, char *)), i++;
				else if (*(i + 1) == '%')
					putchar('%'), i++;
				else if (*(i + 1) == 'd' || *(i + 1) == 'i')
					print_number(va_arg(list, int)), i++;
				else if (*(i + 1) == 'u')
					print_unumber(va_arg(list, unsigned int)), i++;
				else
					return (-1);
			}
			else
				putchar(*i);
		}
		va_end(list);
	}
	return (_strlen_printed(format));
}
