
#include <stdio.h>

#include <ctype.h>
/**
 * prints alphabe except q and e t in lowercase followed by newline.
 */
int main(void)
{
	int letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters  == 'q' || letters == 'e')
			continue;
		putchar(letters);
	}
	putchar('\n');
	return 0;
}
