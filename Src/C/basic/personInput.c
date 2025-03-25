#include <stdio.h>
#include <stdlib.h>

struct person {
	char* name;
	int age;
	char* addr;
};

int main()
{
	struct person tomy;	//구조체 변수 선언
	//이름 입력
	tomy.name = (char*)malloc(30);
	char temp[30];
	gets(temp);
	strcpy(tomy.name, temp);
	printf("이름 출력 : %s\n", tomy.name);
	//나이 입력
	char ageTemp[10];
	gets(ageTemp); //문자열로 숫자입력
	tomy.age = atoi(ageTemp);
	scanf("%d", &tomy.age);
	printf("나이 출력 : %d\n", tomy.age);
	//주소 입력
	tomy.addr = (char*)malloc(30);
	gets(temp); //재활용 가능
	strcpy(tomy.addr, temp);
	printf("주소 출력 : %s\n", tomy.addr);
	return 0;
}
