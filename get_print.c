#include "main.h"

/**
 * get_print - Print function selection
 * @s: Character
 * Return: Pointer to the printing function
 */

int (*get_print(char s))(va_list)
{
	ph_t f_array[] = {
		{'s', print_string},
		{'c', print_char},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_hex_big}
		};
	int flags = 10;
	int i;

	for (i = 0; i < flags; i++)
		if (f_array[i].c == s)
			return (f_array[i].f);
	return (NULL);
}
