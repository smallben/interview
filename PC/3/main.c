// Question is 1 x 2 + 2 x 3 + 3 x 4 + ... + (n-1) x n
// Using Recursive or For loop to consist the programe.

#include <stdio.h>
#include <stdlib.h>

int Recursive(int iLevel)
{
	if (iLevel == 2)
	{
		return 2;
	}

	return Recursive(iLevel - 1) + ((iLevel - 1) * iLevel);
}

int ForLoop(int iLevel)
{
	int i = 0;
	int iAnswer = 0;
	for (i = 2; i <= iLevel; i++)
	{
		iAnswer += ((i-1) * i);
	}
	return iAnswer;
}

void Display(int iLevel)
{
	int i = 2;
	while(i <= iLevel)
	{
		printf ("%d x %d ", i - 1, i);
		i++;
		if (i <= iLevel)
		{
			printf ("+ ");
		}
	}
	printf ("\n= ");
}

int main()
{
	int iLevel = 0;
	printf ("Please Enter the Level of number\n");
	scanf("%d", &iLevel);

	Display(iLevel);

	printf ("%d (With Recursive)\n", Recursive(iLevel));

	Display(iLevel);

	printf ("%d (With ForLoop)\n", ForLoop(iLevel));
	return 0;
}
