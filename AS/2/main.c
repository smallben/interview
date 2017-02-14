#include <stdlib.h>
#include <stdio.h>

// The Memory Leak how to avoid.
// The Memory Leak how to create.

#define S_OK 0
#define S_FAIL 1
#define MAX_ARRAY_NUM 5

int create(int **ppArray)
{
	if (*ppArray != NULL)
	{
		printf ("[Error] The Pointer is already existed\n");
		return S_FAIL;
	}

	*ppArray = malloc (sizeof (int) * MAX_ARRAY_NUM);
	if (*ppArray == NULL)
	{
		printf ("[Error] The malloc is failed\n");
		return S_FAIL;
	}
	printf ("Create Address is %p\n", *ppArray);
	return S_OK;
}

int release (int **ppArray)
{
	if (*ppArray == NULL || ppArray == NULL)
	{
		printf ("[Error] Array address is already empty\n");
		return S_FAIL;
	}
	free(*ppArray);
	*ppArray = NULL;
	return S_OK;
}

int main()
{
	int *pArray = NULL;

	printf ("Before Create, pArray: %p\n", pArray);
	create(&pArray);
	
	release(&pArray);
	
	if (pArray == NULL)
	{
		printf ("[Info] The *pArray will pointer to a null address to create a core dump\n");
		return S_OK;
	}
	printf ("After Release, pArray: %p = %d\n", pArray, *pArray);
	return S_OK;
}
