#include <iostream>
#include <cstring>

using namespace std;

class Book {
public:
    char* title;
    bool is_owner;

    // 생성자
    Book(const char* t) {
        size_t len = strlen(t) + 1;
        title = new char[len];
        strcpy_s(title, len, t); // 안전한 문자열 복사
        is_owner = true;
    }

    // 얕은 복사 생성자
    Book(const Book& other) {
        title = other.title;
        is_owner = false;
    }

   
    void print() {
        cout << "제목: " << title
            << " (주소: " << static_cast<void*>(title)
            << ", is_owner: " << is_owner << ")" << endl;
    }
};

int main() {
    Book a("C++ 프로그래밍");
    Book b = a;

    cout << "[얕은 복사 + strcpy_s]" << endl;
    a.print();
    b.print();

    return 0;
}
