#include <stdio.h>

#include <ctype.h>
/**
 * prints all possible combinations of single-digit numbers
 */
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return 0;
}
