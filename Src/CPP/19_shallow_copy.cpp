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

    // 얕은 복사 생성자
    Book(const Book& other) {
        title = other.title; // 같은 메모리 주소 공유
    }

    // 소멸자
    ~Book() {
        delete[] title; // 하나의 객체가 해제하면 다른 것도 영향을 받음
    }

    void print() {
        cout << "제목: " << title << " (주소: " << static_cast<void*>(title) << ")" << endl;
    }
};

int main() {
    Book a("C++ 프로그래밍");
    Book b = a; // 얕은 복사

    cout << "[얕은 복사]" << endl;
    a.print();
    b.print(); // 같은 주소 출력

    return 0; // 여기서 double free 오류 발생 가능
}
