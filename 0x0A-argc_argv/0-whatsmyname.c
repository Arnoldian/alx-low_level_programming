#include <stdio.h>

/**
 * main - func prints its name followed by newline
 * @argc: cmd line args parameter (integer)
 * @argv: cmd line args array parameter (char)
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n",argv[0]);

	return (0);
}
