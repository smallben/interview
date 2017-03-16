//C SWAP function. which one is correct.
//this is on 64bit machine, the Swap2 is successfully.
#include <stdio.h>

int swap_1 (int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
	return 0;
}

int swap_2 (int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	return 0;
}

int swap_3 (int *a, int *b)
{
	*a = *a * *b;
	*b = *a / *b;
	*a = *a / *b;
	return 0;
}

int main()
{
	int case1_a = 5, case1_b = 10;
	int case2_a = -5, case2_b = -10;
	int case3_a = 0x7FFFFFFF, case3_b = 0x80000000;

	printf ("Before Swap1 Case1 = (%d, %d) Case2 = (%d, %d), Case3 = (%d, %d)\n"
			, case1_a, case1_b, case2_a, case2_b, case3_a, case3_b);

	swap_1(&case1_a, &case1_b);
	swap_1(&case2_a, &case2_b);
	swap_1(&case3_a, &case3_b);
	
	printf ("After Swap1 Case1 = (%d, %d) Case2 = (%d, %d), Case3 = (%d, %d)\n"
			, case1_a, case1_b, case2_a, case2_b, case3_a, case3_b);


	printf ("Before Swap2 Case1 = (%d, %d) Case2 = (%d, %d), Case3 = (%d, %d)\n"
			, case1_a, case1_b, case2_a, case2_b, case3_a, case3_b);

	swap_2(&case1_a, &case1_b);
	swap_2(&case2_a, &case2_b);
	swap_2(&case3_a, &case3_b);
	
	printf ("After Swap2 Case1 = (%d, %d) Case2 = (%d, %d), Case3 = (%d, %d)\n"
			, case1_a, case1_b, case2_a, case2_b, case3_a, case3_b);

	printf ("Before Swap3 Case1 = (%d, %d) Case2 = (%d, %d), Case3 = (%d, %d)\n"
			, case1_a, case1_b, case2_a, case2_b, case3_a, case3_b);

	swap_3(&case1_a, &case1_b);
	swap_3(&case2_a, &case2_b);
	swap_3(&case3_a, &case3_b);
	
	printf ("After Swap3 Case1 = (%d, %d) Case2 = (%d, %d), Case3 = (%d, %d)\n"
			, case1_a, case1_b, case2_a, case2_b, case3_a, case3_b);
	return 0;
}
