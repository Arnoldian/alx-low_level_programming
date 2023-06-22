#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * for task 3 specifically
 */

void print_char(va_list arg);
void print_string(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
// void print_all(const char * const format, ...);

/**
 * struct printer - new struct type to define a printer
 * @symbol: symbol standing for data type
 * @print: function pointer to function that prints DT alligning with symbol
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_a;

void print_all(const char * const format, ...);

#endif
