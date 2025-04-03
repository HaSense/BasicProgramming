#include <iostream>
#include <cstring>

using namespace std;

class Book {
public:
    char* title;

    // 생성자
    Book(const char* t) {
        size_t len = strlen(t) + 1;
        title = new char[len];
        strcpy_s(title, len, t); // MSVC 보안 함수 사용
    }

    // 깊은 복사 생성자
    Book(const Book& other) {
        size_t len = strlen(other.title) + 1;
        title = new char[len];
        strcpy_s(title, len, other.title); // MSVC 보안 함수 사용
    }

    // 소멸자
    ~Book() {
        delete[] title;
    }

    void print() {
        cout << "제목: " << title << " (주소: " << static_cast<void*>(title) << ")" << endl;
    }
};

int main() {
    Book a("C++ 프로그래밍");
    Book b = a; // 깊은 복사

    cout << "[깊은 복사]" << endl;
    a.print();
    b.print(); // 다른 주소 출력

    return 0; // 정상 종료
}
