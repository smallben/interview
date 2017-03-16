// Integer to String

#include <stdio.h>
#include <stdlib.h>

#define ASCII_NUMBER_STARTING 48

//Using the snprintf stardard C library to implement the number to string.
void trans_1(int iValue)
{
	char *pcString = NULL;
	int iValueLength = 0;
	int iTempValue = iValue;
	int i = 0;

	while (iTempValue != 0)
	{
		iValueLength ++;
		iTempValue /= 10;
	}
	printf ("The Length of number is %d\n", iValueLength);

	pcString = (char *) malloc ((sizeof(char) * iValueLength) + 1);

	snprintf (pcString, iValueLength + 1, "%d", iValue);

	printf ("%d number trans to string = %s\n", iValue, pcString);

	//Verify by the for loop.
	
	for (i = 0; i < iValueLength; i++)
	{
		printf ("%c ", pcString[i]);
	}

	printf ("\n");
}


//Using String Pointer to assign the character.
void trans_2(int iValue)
{
	char *pcString = NULL;
	int iValueLength = 0;
	int iTempValue = iValue;
	int i = 0;

	while (iTempValue != 0)
	{
		iValueLength ++;
		iTempValue /= 10;
	}
	printf ("The Length of number is %d\n", iValueLength);

	pcString = (char *) malloc ((sizeof(char) * iValueLength) + 1);

	iTempValue = iValue;
	i = iValueLength - 1;

	while (i >= 0)
	{
		pcString[i] = (iTempValue % 10) + ASCII_NUMBER_STARTING;
		iTempValue /= 10;
		i --;
	}

	printf ("%d number trans to string = %s\n", iValue, pcString);

	//Verify by the for loop.
	
	for (i = 0; i < iValueLength; i++)
	{
		printf ("%c ", pcString[i]);
	}

	printf ("\n");
}

int main()
{
	int iValue = 0;
	printf ("Enter your number\n");
	scanf("%d", &iValue);


	printf ("first method\n");
	trans_1(iValue);


	printf ("second method\n");
	trans_2(iValue);
	return 0;
}
