#include "main.h"

/**
 *  prints the alphabet in lowercase followed by newline.
 *  
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
