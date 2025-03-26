#include <iostream>
#include <iomanip> // 출력 형식 설정을 위해 필요

int main() {
    // 1. 기본적인 문자열 출력
    std::cout << "Hello, World!" << std::endl;

    // 2. 정수형 변수 출력
    int age = 30;
    std::cout << "나이: " << age << "세" << std::endl;

    // 3. 실수형 변수 출력
    double pi = 3.1415926535;
    std::cout << "원주율: " << pi << std::endl;

    // 4. 여러 데이터 타입을 함께 출력 (연쇄적인 << 사용)
    std::string name = "Alice";
    std::cout << "이름: " << name << ", 나이: " << age << std::endl;

    // 5. 출력 형식 지정 (16진수)
    int number = 255;
    std::cout << "10진수: " << number << ", 16진수: " << std::hex << number << std::endl;
    std::cout << std::dec; // 출력 형식을 다시 10진수로 설정

    // 6. 출력 형식 지정 (소수점 자릿수)
    double price = 123.456789;
    std::cout << "가격 (기본): " << price << std::endl;
    std::cout << "가격 (고정 소수점, 2자리): " << std::fixed << std::setprecision(2) << price << std::endl;
    std::cout << std::defaultfloat; // 출력 형식을 기본값으로 복원

    // 7. 조건부 출력 (삼항 연산자와 함께 사용)
    int score = 85;
    std::cout << "점수: " << score << ", 결과: " << (score >= 60 ? "합격" : "불합격") << std::endl;

    return 0;
}
