#include "main.h"

/**
 * create_file - creates file
 * @filename: name of file
 * @text_content: content writen in file
 * Return: -1 or 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int n_letters;
	int r_wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n_letters = 0; text_content[n_letters]; )
		n_letters++;

	r_wr = write(fd, text_content, n_letters);

	if (r_wr == -1)
		return (-1);

	close(fd);

	return (1);
}
