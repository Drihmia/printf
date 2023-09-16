#include "main.h"

/**
 * _printf - it's like the function printf in the cases
 * @format: the format
 * Return: it always return 0
 */

int _printf(const char *format, ...);
{
va_list list;
va_start(list, format);
for (const char *i = format; *i != '\0'; i++)
{
if (*i == '%')
{
	if (*(i + 1) == 'c')
	{
		char c = va_arg(list, int);
	putchar(c);
		i++;
	}
	else if (*(i + 1) == 's')
	{
	char arg = va_arg(list, const char *);
		while (*arg)
		{
			putchar(c);
			arg++;
		}
		i++;
	}
	else if (*(i + 1) == '%')
	{
		putchar('%');
		i++;
	}

}
else
putchar(*i);
}
va_end(list);
return (0);
}
