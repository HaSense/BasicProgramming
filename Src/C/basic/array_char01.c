#include<stdio.h>
int main()
{
	//"Hello World!" 입력받아 콘솔화면에 출력하라!
	char greet[100];
	//입력
	//scanf_s("%s", greet, (unsigned char)sizeof(greet));
	gets_s(greet, sizeof(greet));
	//fgets(greet, sizeof(greet), stdin);
	//출력
	printf("%s\n", greet);

	return 0;
}
