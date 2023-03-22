#include "main.h"

/**
 *  prints the alphabet in lowercase followed by newline.
 *  returns 0
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');

	return 0;

}
