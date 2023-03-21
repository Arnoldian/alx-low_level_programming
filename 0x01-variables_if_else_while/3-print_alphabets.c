#include <stdio.h>

#include <ctype.h>
/**
 * print alphabet in lowercase and then in uppercase.
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		alphabet = tolower(alphabet);
		putchar(alphabet);

		if (alphabet == 'z')
		{
			alphabet = 'A';
			for (; alphabet <= 'Z'; alphabet++)
			{
				putchar(alphabet);
			}
			break;
		}
	}
	putchar('\n');

	return (0);
}
