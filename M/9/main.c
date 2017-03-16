//C.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	union node
	{
		int a;
		short b;
		float c;
		double d;
	};

	union node node_s;
	printf ("%lu\n", sizeof(node_s));
	
	return 0;
}
