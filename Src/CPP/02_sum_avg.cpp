#include <iostream>
#include <iomanip>
int main() 
{
    int scores[3];
    int sum = 0;
    double avg;

    // 성적 입력 받기
    for (int i = 0; i < 3; i++) {
        std::cout << i + 1 << "번째 성적을 입력하세요: ";
        std::cin >> scores[i];
    }
    // 총점 계산
    for (int i = 0; i < 3; i++) {
        sum += scores[i];
    }
    // 평균 계산
    avg = sum / 3.0;
    // 결과 출력
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n총점: " << sum << std::endl;
    std::cout << "평균: " << avg << std::endl;

    return 0;
}
