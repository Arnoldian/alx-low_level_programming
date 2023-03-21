#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* assign random n and print it */
int main(void)
{
        int n;
	int last;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */

        last = n % 10; /* remainder */
        if (last == 0) {
                printf("Last digit of %d is %d\n", n, last);
	}
        else {
                if (last > 5) {
                        printf("Last digit of %d is %d and is greater than 5\n", n, last);
		}
                else if (last < 6) {
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
		}
	}

        return (0);
}
