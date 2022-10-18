#include "main.h"
/**
 * print_char - prints a character
 * @list: variadic list
 * Return: 1 success
 */

int print_char(va_list list)
{
	unsigned char s;

	s = va_arg(list, int);

	_putchar(s);

	return (1);
}
