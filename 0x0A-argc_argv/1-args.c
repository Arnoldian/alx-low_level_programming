#include <stdio.h>

/**
 * main - prints number of args passed to it
 * @argc: cmd line args number parameter
 * @argv: cmd line args array parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	
	return (0);
}
