//C, Using the pack feature.
//This is 64bit machine

#include <stdio.h>
#pragma pack(2)

typedef struct _hello {
	char c;
	short s1;
	short s2;
	int i;
} hello;

int main()
{
	printf("%lu\n", sizeof(hello));
	return 0;
}
