#include "main.h"
/**
 * print_str - prints string with a `s`
 * @list: variadic parameter
 * Return: 1
 */

int print_str(va_list list)
{
	char *str;
	int i = 0;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}

/**
 * print_STR - prints a string with a `S` (upper case) specificer
 * @arg: argument
 * Return: number of character printed
 */

int print_STR(va_list arg)
{
int i;
char *str = va_arg(arg, char*);

if (str == NULL)
	str = "(null)";
else if (*str == '\0')
	return (-1);

for (i = 0; str[i]; i++)
{
	if ((str[i] < 32 && str[i] > 0) || str[i] >= 127)
	{
		_putchar('\\');
		_putchar('x');
		if (i < 16)
			_putchar('0');

		print_unsignedIntToHex(str[i], 'A');
	}
	else
		_putchar(str[i]);
}

return (i);
}
