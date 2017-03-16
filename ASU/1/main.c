// What's the output
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 0;
	for (int i = 0; i < 2; i++)
	{
		switch (i)
		{
			case 0:
				x++;
			case 1:
				x += 2;
		}
	}

	printf ("%d\n", x);
	return 0;
}
