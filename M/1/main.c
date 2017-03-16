#include <stdio.h>

int foo (int val)
{
	if (val % 2 == 0)
	{
		printf ("#");
		return 1;
	}
	printf ("*");
	return 0;
}

int bar (int val)
{
	return !foo(val);
}

int main(int argc, char *argv[])
{
	if (foo(10) && bar(10))
	{
		printf ("1st");
	}
	if (foo(10) || bar(10))
	{
		printf ("2rd");
	}
	if (foo(11) & bar(11))
	{
		printf("3rd");
	}
	if (foo(11) | bar (11))
	{
		printf("4rd");
	}
	return 0;
}
