/* 사칙연산을 C 함수로 구현해 봅시다 */
#include<stdio.h>

int plus(int x, int y) 
{
	return x + y;
}
int minus(int x, int y) 
{
	return x - y;
}
int multiple(int x, int y)
{
	return x * y;
}
double divide(int x, int y)
{
	return (double)x / y;
}
int main()
{
	int a, b;
	printf("두수를 입력하세요 : ");
	scanf_s("%d %d", &a, &b);

	printf("+ : %d\n", plus(a, b));
	printf("- : %d\n", minus(a, b));
	printf("* : %d\n", multiple(a, b));
	printf("/ : %.2lf\n", divide(a, b));

	return 0;
}


