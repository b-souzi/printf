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

/**
 * print_octal - Prints a number in base 8
 * @l: va_list arguments
 * Return: Number of printed characters
 */
int print_octal(va_list l)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	count += _puts(str);
	return (count);
}

/**
 * print_hex - Prints a number in hexadecimal lowercase
 * @l: va_list arguments
 * Return: Number of printed characters
 */
int print_hex(va_list l)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	count += _puts(str);
	return (count);
}

/**
 * print_hex_big - Prints a number in hexadecimal uppercase
 * @l: va_list arguments
 * Return: Number of printed characters
 */
int print_hex_big(va_list l)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	count += _puts(str);
	return (count);
}
