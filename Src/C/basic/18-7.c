#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp;
	char str[20];
	char* path = "C:\\Temp\\a.txt";
	fp = fopen(path, "a+"); //모드를 변경할 수 있다.
	//에러처리코드 생략해 봅니다.
	while (1) {
		printf("과일 이름:");
		scanf("%s", str);
		if (strcmp(str, "end") == 0) { //입력된 문자열이 "end"일때
			break; //루프를 나감
		}
		else if (strcmp(str, "list") == 0) { //입력된 문자열이 "list"일때
			fseek(fp, 0, SEEK_SET); //파일 처음부터 탐색 또는 읽기
			while (1) {
				fgets(str, sizeof(str), fp); //파일에서 str크기만큼 문자열을 읽음
				if (feof(fp)) { //파일의 끝에 도달하면 즉, EOF라면
					break; //루프종료
				}
				printf("%s", str); //파일의 끝에 도달하기 전까지 모니터에 글자 출력
			}
		}
		else {
			fprintf(fp, "%s\n", str);//"end, list"가 아니면 파일에 Write
		}
	}
	fclose(fp); //리소스 반환

	return 0;
}
