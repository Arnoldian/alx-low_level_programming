#include "variadic_functions.h"
#include <stdio.h>

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

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * print_char - prints char
 * @arg: list of arguments directing to char to print
 */

void print_char(va_list arg)
{
	char glyph;

	glyph = va_arg(arg, int);
	printf("%c", glyph);
}

/**
 * print_string - prints str
 * @arg: list of arguments pointing to str to print
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_int - prints int
 * @arg: list of arguments directing to int to print
 */

void print_int(va_list arg)
{
	int number;

	number = va_arg(arg, int);
	printf("%d", number);
}

/**
 * print_float - prints float
 * @arg: list of arguments directing to float to print
 */

void print_float(va_list arg)
{
	float number;

	number = va_arg(arg, double);
	printf("%f", number);
}

/**
 * print_all - arg not char, str (char *), int or float ignored; NULL str arg printed as (nil)
 * @format: string of chars, stands for argument types
 * @...: A variable number of arguments (to print), ellipses
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_a functs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(functs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			functs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
