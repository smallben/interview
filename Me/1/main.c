//implement the malloc function and design for the free function
//
#include <stdio.h>

static unsigned char heap[1024 * 1024];

static unsigned int uiUsedArray[1024 * 2] = {0};

unsigned int Malloc(int iSize)
{
	int i = 0;
	unsigned int iLastFinalAddress = 0;
	for (i = 0; i < 1024 * 2; i += 2)
	{
		if (uiUsedArray[i] != 0)
		{
			continue;
		}
		else
		{
			break;
		}
	}
	if (i != 0)
	{
		iLastFinalAddress = uiUsedArray[i - 1] + 1;
		uiUsedArray[i] = iLastFinalAddress;
		uiUsedArray[i + 1] = iLastFinalAddress + iSize - 1;
	}
	else
	{
		iLastFinalAddress = &heap;
		uiUsedArray[i] = iLastFinalAddress;
		uiUsedArray[i + 1] = iLastFinalAddress + iSize - 1;
	}

	return iLastFinalAddress;
}


int main()
{
	int *a = Malloc(5);
	int *b = Malloc(5);

	printf ("a Starting Address = %p, b Starting Address = %p\n", a, b);
	return 0;
}
