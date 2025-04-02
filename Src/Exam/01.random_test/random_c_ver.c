#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[5];
    //srand((unsigned int)time(NULL)); // 랜덤 시드 초기화
    srand((unsigned int)(time(NULL) ^ clock()));// 정확한 랜덤

    //랜덤한 수 10개 생성
    for (int i = 0; i < 10; ++i) {
        arr[i % 5] = rand() % 10 + 1; // 1~10 사이의 랜덤 정수
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%2d ", arr[i]);
    }

	return 0;
}
