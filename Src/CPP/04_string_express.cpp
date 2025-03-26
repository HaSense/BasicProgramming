#include <iostream>
#include <string>

int main() {
    // 문자열 생성 방법 1: 문자열 리터럴로 초기화
    std::string str1 = "Hello";

    // 문자열 생성 방법 2: 다른 문자열로 초기화
    std::string str2 = str1;

    // 문자열 생성 방법 3: 특정 문자로 특정 개수만큼 초기화
    std::string str3(5, '!'); // "!!!!! "

    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << std::endl;
    std::cout << "str3: " << str3 << std::endl;

    // 문자열 결합 방법 1: + 연산자 사용
    std::string str4 = str1 + ", " + "World";
    std::cout << "str4: " << str4 << std::endl;

    // 문자열 결합 방법 2: append() 메서드 사용
    std::string str5 = "Greetings";
    str5.append(" from ");
    str5.append(name); // 아래 예제에서 선언될 변수 (의도적인 오류, 수정 필요)
    str5.append("!");
    std::cout << "str5 (수정 전): " << str5 << std::endl;

    // str5 수정 (name 변수 추가)
    std::string name = "Gemini";
    std::string str5_fixed = "Greetings";
    str5_fixed.append(" from ");
    str5_fixed.append(name);
    str5_fixed.append("!");
    std::cout << "str5 (수정 후): " << str5_fixed << std::endl;

    return 0;
}
