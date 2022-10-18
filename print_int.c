#include "main.h"
/**
 * print_int - prints an integer.
 * @arg: argument
 * Return: 0
 */

int print_int(va_list arg)
{

unsigned int divisor = 1, i, resp, cprint = 0;
int n = va_arg(arg, int);

if (n < 0)
{
	_putchar('-');
	cprint++;
	n *= -1;
}

for (i = 0; n / divisor > 9; i++, divisor *= 10)
;

for (; divisor >= 1; n %= divisor, divisor /= 10, cprint++)
{
	resp = n / divisor;
	_putchar('0' + resp);
}
return (cprint);
}

/**
 * print_unsigned - prints an unsigned int.
 * @arg: argument
 * Return: 0
 */
int print_unsigned(va_list arg)
{
int divisor = 1, i, resp;
unsigned int n = va_arg(arg, unsigned int);

for (i = 0; n / divisor > 9; i++, divisor *= 10)
;

for (; divisor >= 1; n %= divisor, divisor /= 10)
{
	resp = n / divisor;
	_putchar('0' + resp);
}
return (i + 1);
}
