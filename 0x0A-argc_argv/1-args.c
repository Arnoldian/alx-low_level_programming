#include <stdio.h>

/**
 * main - prints number of args passed to it
 * @argc: cmd line args number parameter
 * @argv: cmd line args array parameter
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
