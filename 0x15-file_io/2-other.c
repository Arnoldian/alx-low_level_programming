#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text to end of file
 * @filename: name of file
 * @text_content: text to append to file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, len, bytes_wr;

	if (filename == NULL)
		return -1;

	// FILE *file = open(filename, O_WRONLY | O_APPEND);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return -1;
	}

	if (text_content != NULL)
	{
		len = 0;

		while (text_content[len] != '\0')
			len++;

		bytes_wr = write(file, text_content, len);

		if (bytes_wr == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
