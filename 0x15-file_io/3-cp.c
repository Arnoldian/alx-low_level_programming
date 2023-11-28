#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * main - main func
 * @ac: arg count
 * @av: arg vec
 * Return: 0
 */

int main(int ac, char **av)
{
	int file_d_from, file_d_to, rd, wr;
	char buf[BUFFER_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_d_from = open(av[1], O_RDONLY);
	if (file_d_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	file_d_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_d_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while ((rd = read(file_d_from, buf, BUFFER_SIZE)) > 0)
	{
		wr = write(file_d_to, buf, rd);
		if (wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	if (close(file_d_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d_from);
		exit(100);
	}

	if (close(file_d_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d_to);
		exit(100);
	}

	return 0;
}
