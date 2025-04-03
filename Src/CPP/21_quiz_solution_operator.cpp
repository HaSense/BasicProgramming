#include <iostream>

using namespace std;

class Car
{
public:
    int speed;

    // 생성자
    Car() : speed(0) {}

    // 복사 생성자
    Car(const Car& other) : speed(other.speed) {}

    // 대입 연산자
    Car& operator=(const Car& other)
    {
        if (this != &other)
            speed = other.speed;
        return *this;
    }
};

int main()
{
    Car car1;
    car1.speed = 100;

    Car car2 = car1; // 복사 생성자 호출

    cout << "car1 speed: " << car1.speed << endl;
    cout << "car2 speed: " << car2.speed << endl;

    return 0;
}
