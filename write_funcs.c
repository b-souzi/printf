#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints a character
 * @c: Character
 * Return: 1 on success
 */
int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - Prints a string to stdout
 * @str: Pointer to the string
 * Return: Number of written characters
 */
int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
