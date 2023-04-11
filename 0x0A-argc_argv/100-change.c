#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints min num to make change for amount of money
 * @argc: cmd line args num parameter
 * @argv: cmd line args array parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents = 0;
	int num_coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");

		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents = cents - 25;
		if (cents >= 10)
			cents = cents - 10;
		if (cents >= 5)
			cents = cents - 5;
		if (cents >= 2)
			cents = cents - 2;
		if (cents >= 1)
			cents = cents - 1;
		
		num_coins++;
	}

	printf("%d\n", num_coins);
	
	return (0);
}
