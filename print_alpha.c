#include "main.h"

/**
 * print_string - Prints a string
 * @l: va_list arguments
 * Return: Number of printed characters
 */
int print_string(va_list l)
{
	char *s = va_arg(l, char *);

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - Prints a character
 * @l: va_list arguments
 * Return: Number of printed characters
 */
int print_char(va_list l)
{
	_putchar(va_arg(l, int));
	return (1);
}
