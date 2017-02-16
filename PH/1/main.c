#include <stdlib.h>
#include <stdio.h>

#define S_OK 0
#define S_FAIL 1

//Print the 0~500 but without the value of ListArray.

int PrintFromTo(unsigned int *ListArray, int iRangeFrom, int iRangeTo)
{
	while (*ListArray <= iRangeFrom)
	{
		ListArray++;
	}

	while (iRangeFrom <= iRangeTo)
	{
		if (*ListArray == iRangeFrom)
		{
			ListArray++;
			iRangeFrom++;
			continue;
		}
		printf ("%d ", iRangeFrom);
		iRangeFrom ++;
	}
	return S_OK;
}

int main()
{
	int iRangeFrom, iRangeTo;
	unsigned int ListArray[20] = {1, 5, 9, 11, 18, 21, 23, 53, 200, 230, 330, 331, 332, 333, 400, 401, 405, 430, 450, 480};

	printf ("Which is starting from?");
	scanf("%d", &iRangeFrom);
	printf ("Which is the end?");
	scanf("%d", &iRangeTo);

	PrintFromTo(ListArray, iRangeFrom, iRangeTo);
	return S_OK;
}
