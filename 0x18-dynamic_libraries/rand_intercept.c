#define _GNU_SOURCE
#include<dlfcn.h>
#include<stdio.h>

int rand(void)
{
	static int i = 0;
	int nums[] = {9, 8, 10, 24, 75, 9};

	return (nums[i++]);
}

int rand_r(unsigned int *input)
{
	static int (*rand_r_original)(unsigned int *input) = NULL;
	static int i = 0;
	int nums[] = {9, 8, 10, 24, 75, 9};

	if (!rand_r_original)
	{
		rand_r_original = dlsym(RTLD_NEXT, "rand_r");
	}

	return (nums[i++]);
}
