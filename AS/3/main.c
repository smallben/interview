#include <stdio.h>
#include <stdlib.h>

#define S_OK 0
#define S_FAIL 1

int Change(int *a, int b, char *c)
{
	b = *a;
	*a = 2;
	*(c+1) = 'w';
	*(c++) = 'x';
	*(++c) = 'y';
	*(c+5) = '\0';
	*(c+8) = 'z';
	return S_OK;
}

int main()
{
	int a = 10, b = 20;
	char c[12] = "Hello World";

	printf ("a=%d, b=%d, c=%s\n", a, b, c);
	Change(&a, b, c);
	printf ("a=%d, b=%d, c=%s\n", a, b, c);
	return S_OK;
}
