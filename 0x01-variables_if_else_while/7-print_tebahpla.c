#include <stdio.h>

#include <ctype.h>
/**
 * prints the lowercase alphabet in reverse, followed by newline
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return 0;
}
