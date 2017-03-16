//C.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ptr1[] = "Hello World";
	char *ptr2 = (char *)malloc (5);

	
	printf ("ptr1 address= %p\nptr2 address= %p\n", &ptr1, ptr2);

	ptr2 = ptr1;

	//This will be a memory 
	printf ("After ptr2 = ptr1\nptr1 address= %p\nptr2 address= %p\n", &ptr1, ptr2);

	
	return 0;
}
