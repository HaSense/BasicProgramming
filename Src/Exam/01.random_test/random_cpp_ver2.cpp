#include <iostream>
#include <vector>
#include <cstdlib>   // rand, srand
#include <ctime>     // time

using namespace std;

int main() {
    vector<int> arr(5);  // 크기 5로 초기화된 vector

    srand((unsigned int)(time(0))); // 랜덤 시드 초기화

    //난수발생
    for (int i = 0; i <5 ; ++i) {
        arr[i] = rand() % 10 + 1;
    }

    // 출력
    cout << "랜덤한 정수 벡터 (1~10): ";
    for (int n : arr) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
