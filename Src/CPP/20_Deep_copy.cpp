#include <iostream>
#include <cstring>

using namespace std;

class Book {
public:
    char* title;

    // 생성자
    Book(const char* t) {
        title = new char[strlen(t) + 1];
        strcpy(title, t);
    }

    // 깊은 복사 생성자
    Book(const Book& other) {
        title = new char[strlen(other.title) + 1]; // 메모리 새로 할당
        strcpy(title, other.title);                // 내용 복사
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
