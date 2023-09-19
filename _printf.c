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
	int len_pr = 0, f_l = _strlen_printed(format);

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (; *i != '\0'; i++)
	{
		if (*i == '%')
		{
			if (*(i + 1) == 'c')
				len_pr += print_char(va_arg(list, int)), i++;
			else if (*(i + 1) == 's')
				len_pr += print_str(va_arg(list, char *)), i++;
			else if (*(i + 1) == '%')
				putchar('%'), i++;
			else if (*(i + 1) == 'd' || *(i + 1) == 'i' || *(i + 1) == 'u')
				len_pr += print_numbers(list, *(i + 1)), i++;
			else if (*(i + 1) == 'O')
				len_pr += print_number(oct(va_arg(list, int))), i++;
			else if (*(i + 1) == 'b')
				len_pr += dec_to_bin(va_arg(list, int)), i++;
			else if (*(i + 1) == 'X')
				len_pr += DEC_TO_HEXA(va_arg(list, int)), i++;
			else if (*(i + 1) == 'x')
				len_pr += dec_to_hexa(va_arg(list, int)), i++;
			else if (*(i + 1) == 'p')
				i++;
			else
				return (-1);
		}
		else
			putchar(*i);
	}
	va_end(list);
	return (f_l + len_pr);
}
