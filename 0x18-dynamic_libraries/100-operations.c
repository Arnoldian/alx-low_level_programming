#include<stdlib.h>
#include<stdio.h>

int _add(int a, int b)
{
	return (a + b);
}

int _sub(int a, int b)
{
	return (a - b);
}

int _mul(int a, int b)
{
	return (a * b);
}

int _div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	else
	{
		return (a / b);
	}
}

int _mod(int a, int b)
{
	return (a % b);
}
