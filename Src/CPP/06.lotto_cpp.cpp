#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <ctime>

using namespace std;

int main() 
{
   
    srand(time(nullptr));

    // 가능한 로또 번호 (1부터 45까지)를 벡터에 저장
    vector<int> numbers;
    for (int i = 1; i <= 45; ++i) {
        numbers.push_back(i);
    }

    // 벡터를 무작위로 섞음
    random_device rd; //컴퓨터 랜덤 수 보정
    mt19937 gen(rd()); //메르센 트위스터 알고리즘
    shuffle(numbers.begin(), numbers.end(), gen);

    // 처음 7개의 숫자를 선택
    vector<int> lotto_numbers;
    for (int i = 0; i < 7; ++i) {
        lotto_numbers.push_back(numbers[i]);
    }

    // 마지막 숫자를 보너스 번호로 지정
    int bonus_number = lotto_numbers.back();
    lotto_numbers.pop_back(); // 보너스 번호를 제외

    // 나머지 6개의 숫자를 로또 번호로 정렬
    sort(lotto_numbers.begin(), lotto_numbers.end());

    // 결과 출력
   // 결과 출력
    cout << "로또 번호: ";
    for (int i = 0; i < lotto_numbers.size(); ++i) {
        cout << lotto_numbers[i] << " ";
    }
    cout << endl;
    cout << "보너스 번호: " << bonus_number << endl;
   

    return 0;
}

//로또 번호: 8 10 13 24 36 42
//보너스 번호: 28
