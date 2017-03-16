//C What is the output

#include <stdio.h>

int main()
{
	const int x = 5;
	const int *ptrx;
	ptrx = &x;
	*ptrx = 10; // This line will cuase the compile error: assignment of read-only location '*ptrx'
	printf ("%d\n", x);
	return 0;
}
