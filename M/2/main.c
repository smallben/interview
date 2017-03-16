// The following code will not print which value. 59, 1490, 1504, 64

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, j, len;
	for (i = 64; i <= 1500; i++)
	{
		for(j = -17; j <= 17; j++)
		{
			len = i + j;
			if (len < 64 || len > 1500)
				continue;
			printf("%d\n", len);
		}
	}
	return 0;
}
