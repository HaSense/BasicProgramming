#include <iostream>

using namespace std;

class Car
{
public:
    int* speed;

    // 생성자
    Car() {
        speed = new int(0);
    }

    // 복사 생성자 (깊은 복사)
    Car(const Car& other) {
        speed = new int(*other.speed);
    }

    // 소멸자
    ~Car() {
        delete speed;
    }
};

int main()
{
    Car car1;        // 객체 생성
    *car1.speed = 100;

    Car car2 = car1; // 깊은 복사
    *car2.speed = 200;

    cout << "car1 speed: " << *car1.speed << endl;
    cout << "car2 speed: " << *car2.speed << endl;

    return 0;
}
