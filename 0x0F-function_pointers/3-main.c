#include "3-calc.h"

/**
 * main - built in function in stdio.h
 * @argc: no. of arguments
 * @argv: arguments array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, outcome;
	char m;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	m = *argv[2];

	if ((m == '/' || m == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	outcome = func(arg1, arg2);

	printf("%d\n", outcome);

	return (0);
}
