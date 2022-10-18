#include "main.h"
/**
 * _printf - prints to the stdout
 *
 * @format:  format(char, string, int, dec)
 * Return: size of output
 */

int _printf(const char *format, ...)
{
	va_list list;
	int (*f)(va_list);
	unsigned int i = 0, cprint = 0;

	if (format == NULL)
		return (-1);

	va_start(list, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			cprint++;
			i++;
		}
		if (format[i] == '\0')
			return (cprint);

		f = find_function(&format[i + 1]);
		if (f != NULL)
		{
			cprint += f(list);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		cprint++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(list);
	return (cprint);

	}
