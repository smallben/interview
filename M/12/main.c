//C. Address application
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[3][2] = {{1, 2}, {3, 4}};
	int b[10] = {1, 2, 3, 4};

	printf ("%d\n", a[0][3]);
	printf ("%p, %p, %p, %p, %p, %p\n", &a[0][0], &a[0][1], &a[1][0], &a[1][1], &a[2][0], &a[2][1]);
	printf ("%p, %p, %d\n", *a, *a+3, *(*a+3)); // *a will go the internal address
	printf ("%p, %p, %d\n", a, a + 2, *(*(a+2) + 1)); // a will go the outter address
	printf ("%d\n", b[0] + 2);
	printf ("%d\n", (*b+2));
	printf ("%d\n", *(b+2));
	return 0;
}
