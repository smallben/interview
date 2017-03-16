#include <stdio.h>
#include <stdlib.h>

int main()
{
	char strAry[] = "This is string";
	char *aryPtr = strAry;
	int *intPtr = (int *)strAry;
	
	printf ("strAry = %s(%p)\n", strAry, strAry);
	printf ("aryPtr = %s(%p)\n", aryPtr, aryPtr);
	printf ("sizeof(aryPtr) = %lu\n", sizeof(aryPtr));
	printf ("sizeof(*aryPtr) = %lu\n", sizeof(*aryPtr));
	printf ("*aryPtr = %c\n", *aryPtr);
	printf ("*aryPtr + 1 = %c\n", *aryPtr+1);
	printf ("*(aryPtr + 1) = %c\n", *(aryPtr+1));
	printf ("sizeof(intPtr) = %lu\n", sizeof(intPtr));
	printf ("sizeof(*intPtr) = %lu\n", sizeof(*intPtr));
	printf ("intPtr = %s(%p)\n", intPtr, intPtr); // save the address
	printf ("*intPtr = %c\n", *intPtr);
	printf ("*intPtr + 1 = %c\n", *intPtr+1);
	printf ("*(intPtr + 1) = %c\n", *(intPtr+1)); //add 1 will move 4 bytes. it will be empty char.
	return 0;
}
