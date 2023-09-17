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
