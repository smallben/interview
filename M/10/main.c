//C.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	printf ("%d + %d = %d\n", a1[1][3], a1[2][1], a1[1][3] + a1[2][1]);
	return 0;
}
