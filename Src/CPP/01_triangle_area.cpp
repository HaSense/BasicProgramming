#include <iostream>
#include <iomanip> // 소수점 자릿수 설정을 위한 헤더 파일

int main() 
{
    int width, height;
    double area;

    // 사용자에게 너비 입력 요청
    std::cout << "너비를 입력하세요: ";
    std::cin >> width;

    // 사용자에게 높이 입력 요청
    std::cout << "높이를 입력하세요: ";
    std::cin >> height;

    // 넓이 계산
    area = (double)width * height / 2.0; // 명시적으로 double로 캐스팅

    // 소수점 둘째 자리까지 출력 설정
    std::cout << std::fixed << std::setprecision(2);

    // 결과 출력
    std::cout << "입력한 두 정수의 삼각형 넓이는: " << area << " 입니다." << std::endl;

    return 0;
}
