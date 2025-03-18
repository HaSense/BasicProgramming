#include <stdio.h>

//1. 리턴타입 없고 매개변수는 2개인 덧셈 함수를 만들어주세요 plus1( , )
//2. 정수형 리턴타입 있는 plus2( , ) 함수를 만들어서
// 두함수 모두 결과를 출력하세요.

void plus1(int a, int b); //함수선언, 헤더만 있다.
int plus2(int a, int b); //함수선언

int main()
{
    int x = 100, y = 300;
    plus1(x, y);
    int result2 = plus2(x, y);
    printf("plus2 : %d\n", result2);
    return 0;
}
int plus2(int a, int b)
{
    return a + b;
}
void plus1(int a, int b) //구현부
{
    int result = a + b;
    printf("plus1 : %d\n", result);
}
