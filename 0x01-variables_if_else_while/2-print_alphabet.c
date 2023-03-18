#include <stdio.h>

#include <ctype.h>
/**
 * print alhabet in lowercase.
 * return 0
 */
int main(void)
{
	int alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		alphabet = tolower(alphabet);
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
