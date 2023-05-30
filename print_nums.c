#include "main.h"

/**
 * print_int - Prints an integer
 * @l: va_list of arguments
 * Return: Number of printed characters
 **/
int print_int(va_list l)
{
	int n = va_arg(l, int);
	int res = count_digit(n);

	if (n <= 0)
		res++;
	print_number(n);
	return (res);
}

/**
 * print_number - Function to print all digits
 * @n: Integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;
	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * count_digit - Nuumber of digits in an integer
 * @i: Integer
 * Return: Number of digits
 */
int count_digit(int i)
{
	unsigned int nb = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		nb++;
	}
	return (nb);
}

/**
 * print_unsigned - Prints an unsigned integer
 * @l: va_list of arguments
 * Return: Number of printed characters
 */
int print_unsigned(va_list l)
{
	unsigned int u = va_arg(l, unsigned int);
	char *str = convert(u, 10, 0);

	return (_puts(str));
}
