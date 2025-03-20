#include <stdio.h>
#include <limits.h>
void max_calculate(int* pa); //함수선언
int main()
{
	int array[5] = { 10, 50, 30, 20, 40 };
	max_calculate(array);
	return 0;
}
void max_calculate(int* pa)
{
	int max = INT_MIN;
	for (int i = 0; i < 5; i++)	{
		if (pa[i] > max)
			max = pa[i];
	}
	printf("max : %d\n", max);
}
