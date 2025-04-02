#include <iostream>
#include <cstdlib>   // rand, srand
#include <ctime>     // time

using namespace std;

int main() {
    int arr[5];

    srand((unsigned int)(time(0))); // 랜덤 시드 초기화
    // 고품질 난수 생성기 초기화
    //random_device rd;                         // 하드웨어 기반 엔트로피 (가능한 경우)
    //mt19937 gen(rd());                        // Mersenne Twister 19937 난수 엔진
    //uniform_int_distribution<> dis(1, 10);    // 1~10 사이 균등분포

    // 배열에 1~10 사이의 랜덤한 정수 채우기
    for (int i = 0; i < 5; ++i) {
        arr[i] = rand() % 10 + 1;
    }

    // 결과 출력
    cout << "랜덤한 정수 배열 (1~10): ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
