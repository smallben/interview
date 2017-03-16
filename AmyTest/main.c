// Original signly linked list : L0 -> L1 -> ... -> Ln-1 -> Ln
// Resort Linked list: L0 -> Ln -> L1 -> Ln-1 .....
// In-place


#include <stdio.h>
#include <stdlib.h>

// I have five node in my list: 0 1 2 3 4 
// 0. use Temp = L1
// 1. L0 to connect to L4
// 2. L4 to connect to Temp
// 3. use Temp 

typedef struct list {
	int iData;
	struct list *pNext;
} TList;

int CreateList(TList **pptList, int iNumberofNode)
{
	TList *ptTemp = NULL;
	TList *ptCur = NULL;

	int i = 0 ;
	if (*pptList != NULL)
	{
		printf ("[Error] it is existed\n");
		return 1;
	}
	*pptList = malloc (sizeof (TList));
	if (*pptList == NULL)
	{
		printf("[Error] It create failed\n");
		return 1;
	}

	(*pptList)->iData = 0;
	(*pptList)->pNext = NULL;

	ptCur = *pptList;
	i = 1;
	while (i < iNumberofNode)
	{
		ptTemp = malloc (sizeof(TList));
		ptTemp->iData = i;
		ptTemp->pNext = NULL;

		ptCur->pNext = ptTemp;
		ptCur = ptCur->pNext;

		ptTemp = NULL;
		i++;
	}
	return 0;
}

int DisplayList(TList *ptList)
{
	while(ptList != NULL)
	{
		printf ("%d ", ptList->iData);
		ptList = ptList->pNext;
	}
	printf ("\n");
	return 0;
}

int ResortTheLinkedList(TList *ptList, int iNumberofNode)
{
	//Save the address
	unsigned int uiTemp = 0;
	int i = 0;
	TList *ptCur = NULL, *ptLast = NULL, *ptPreLast = NULL;
	ptCur = ptList;
	ptLast = ptList;

	while (ptCur->pNext != NULL)
	{
		uiTemp = ptCur->pNext;
		ptLast = ptList;
		while (ptLast->pNext != NULL)
		{
			ptPreLast = ptLast;
			ptLast = ptLast->pNext;
		}

		ptCur->pNext = ptLast;
		if (ptCur == ptPreLast)
		{
			break;
		}
		ptLast->pNext = uiTemp;
		ptCur = ptLast->pNext;
		ptPreLast->pNext = NULL;
	}
	return 0;
}

int main()
{
	TList *ptList = NULL;
	int iNumberofNode = 0;

	printf ("Please enter the Number of Nodes?");
	scanf ("%d", &iNumberofNode);

	CreateList(&ptList, iNumberofNode);
	DisplayList(ptList);
	ResortTheLinkedList(ptList, iNumberofNode);
	DisplayList(ptList);
	return 0;
}


