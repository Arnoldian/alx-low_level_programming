#include <unistd.h>

/**
 * _putchar - func prints char to stdout
 * @c: input char parameter
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
