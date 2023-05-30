#ifndef Printf_H
#define Printf_H
#include <stdarg.h>
#include <stdio.h>

/**
 *struct printHandler - Struct to choose the print function
 *@c: Format specifier
 *@f: Pointer to the print function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap);
} ph_t;

int _printf(const char *format, ...);
int (*get_print(char s))(va_list);
int print_string(va_list l);
int print_char(va_list l);
int _putchar(char c);
int _puts(char *str);
int print_percent(va_list l);
int print_int(va_list l);
void print_number(int n);
int count_digit(int i);
char *convert(unsigned long int num, int base, int lowercase);
int print_binary(va_list l);

#endif

