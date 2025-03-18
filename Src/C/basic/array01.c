#include <stdio.h>
int main()
{
	int ary[3];	//배열 변수 선언
	//초기화 - 값을 변수에 넣는 과정
	ary[0] = 100;
	ary[1] = 200;
	ary[2] = 300;
	printf("%d %d %d\n", ary[0], ary[1], ary[2]);
	
	char ch[3];
	ch[0] = 'A';
	ch[1] = 'B';
	ch[2] = 'C';
	printf("%c %c %c\n", ch[0], ch[1], ch[2]);
	return 0;
}
