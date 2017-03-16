//C.
#include <stdio.h>
#include <stdlib.h>

#define MACRO(x, y) x*y

int main()
{
	printf ("Result %d\n", MACRO(10+5, 10-5));
	return 0;
}
