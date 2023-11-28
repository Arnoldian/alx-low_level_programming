#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - appends text at end of file
 * @filename: name of file
 * @text_content: NULL terminated str to add at end of file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, wr_status, close_status;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		wr_status = write(file_d, text_content, len);

		if (wr_status == -1)
		{
			close(file_d);
			return (-1);
		}
	}

	close_status = close(file_d);

	if (close_status == -1)
		return (-1);

	return (1);
}
