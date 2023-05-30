#include "main.h"

/**
 * print_binary - Prints a number in base 2
 * @l: va_list arguments
 * Return: Number of printed characters
 */
int print_binary(va_list l)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	return (_puts(str));
}
