#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* va_list */
#include <unistd.h> /* write */
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*find_function(const char *format))(va_list);
int print_str(va_list list);
int print_char(va_list list);
int print_cent(void);
int print_int(va_list list);
int print_unsigned(va_list arg);
void print_binary(unsigned int n, unsigned int *printed);
int print_unsignedToBinary(va_list arg);
int print_oct(va_list arg);
int print_hex_base(va_list arg, char _case);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int print_unsignedIntToHex(unsigned int num, char _case);
int print_unsignedIntToHex(unsigned int num, char _case);
int print_STR(va_list arg);

/**
 * struct types - contains different types of format
 * @sc: The specifiers
 * @func: The associated function
 */
typedef struct types
{
	char *sc;
	int (*func)(va_list);
} print;

#endif
