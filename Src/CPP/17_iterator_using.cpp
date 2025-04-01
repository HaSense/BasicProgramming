#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person {
public:
    int number;
    string name;
    string pnumber;

    Person(int num, const string& n, const string& pnum) : number(num), name(n), pnumber(pnum) {}

    void printInfo() const {
        cout << "번호: " << number << ", 이름: " << name << ", 전화번호: " << pnumber << endl;
    }
};

int main() {
    vector<Person> people;
    people.push_back(Person(1, "홍길동", "010-1234-5678"));
    people.push_back(Person(2, "김철수", "010-9876-5432"));
    people.push_back(Person(3, "이영희", "010-1122-3344"));

    cout << "--- Iterator를 이용한 순회 ---" << endl;
    for (vector<Person>::iterator it = people.begin(); it != people.end(); ++it) {
        it->printInfo();
    }
    cout << endl;

    cout << "--- const_iterator를 이용한 순회 (읽기 전용) ---" << endl;
    for (vector<Person>::const_iterator it = people.cbegin(); it != people.cend(); ++it) {
        it->printInfo();
    }
    cout << endl;

    cout << "--- 범위 기반 for 루프 (Range-based for loop, 내부적으로 iterator 사용) ---" << endl;
    for (const auto& person : people) {
        person.printInfo();
    }
    cout << endl;

    return 0;
}
