#include "main.h"

/**
 * find_function - finds the format
 * @format: format (char, string, int, dec)
 * Return: 0
 */

int (*find_function(const char *format))(va_list)
{
	int i = 0;

	print find_f[] = {
			{"c", print_char},
			{"s", print_str},
			{"i", print_int},
			{"d", print_int},
			{"u", print_unsigned},
			{"b", print_unsignedToBinary},
			{"o", print_oct},
			{"x", print_hex},
			{"X", print_HEX},
			{"S", print_STR},
			{NULL, NULL}};

	while (find_f[i].sc)
	{
		if (find_f[i].sc[0] == (*format))
			return (find_f[i].func);
		i++;
	}

	return (NULL);
}
