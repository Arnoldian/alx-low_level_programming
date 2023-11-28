#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates file with specified permissions and writes text to it
 * @filename: name of file to create
 * @text_content: text to write to file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, bytes_wr, i;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;

		bytes_wr = write(file_d, text_content, i);
		if (bytes_wr == -1)
			return (-1);
	}

	close(file_d);
	return (1);
}
