#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads text file and prints to POSIX standard output
 * @filename: the name of file to read
 * @letters: num of letters to read and print
 * Return: actual num of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d, bytes_rd, bytes_wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}

	bytes_rd = read(file_d, buffer, letters);
	if (bytes_rd == -1)
	{
		free(buffer);
		close(file_d);
		return (0);
	}

	bytes_wr = write(STDOUT_FILENO, buffer, bytes_rd);

	if (bytes_wr == -1 || (size_t)bytes_wr != letters)
	{
		free(buffer);
		close(file_d);
		return (0);
	}

	free(buffer);
	close(file_d);
	return (bytes_wr);
}
