#include <stdio.h>

/**
 * append_text_to_file - appends text to end of file
 * @filename: name of file
 * @text_content: text to append to file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return -1;

	FILE *file = fopen(filename, "a");
	if (file == NULL)
	{
		return -1;
	}

	if (text_content != NULL)
	{
		int result = fputs(text_content, file);
		if (result == EOF)
		{
			fclose(file);
			return -1;
		}
	}

	fclose(file);
	return 1;
}
