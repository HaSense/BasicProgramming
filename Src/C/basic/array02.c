#include <stdio.h>
int main()
{
	int ary[5];	//배열 변수 선언
	for (int i = 0; i < 5; i++)
	{
		ary[i] = i + 1;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", ary[i]);
	}
	
	return 0;
}
