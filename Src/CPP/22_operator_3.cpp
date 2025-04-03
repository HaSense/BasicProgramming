#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {}

    // << 연산자 오버로딩 (friend 함수)
    friend ostream& operator<<(ostream& os, const Person& p) {
        os << "이름: " << p.name << ", 나이: " << p.age;
        return os;
    }
};

int main() {
    Person p("홍길동", 30);
    cout << p << endl;
    return 0;
}
