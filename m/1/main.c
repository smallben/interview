
#include <stdio.h>
#include <stdlib.h>

enum days
{
	MON = 1,
	TUE,
	WED,
	THU, 
	FRI,
	SAT,
	SUN
};

int main()
{
	enum days day;

	char *dayName[] = {"", "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	for (day = FRI; day <= SUN; day++)
	{
		//-4 will remove the 4 bytes length when print
		printf ("%-4s", dayName[day]);
	}
	return 0;
}
