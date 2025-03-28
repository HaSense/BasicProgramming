#include <iostream>
using namespace std;

class Dog 
{
public:
    void speak() const {
        cout << "Dog: 멍멍!" << endl;
    }
};

class Wolf 
{
public:
    void speak() const {
        cout << "Wolf: 아우우~!" << endl;
    }
};

// 다중 상속 클래스
class Hybrid : public Dog, public Wolf {
public:
    // 부모들의 동일한 이름의 함수 충돌 → 아래 방식으로 해결 필요
    void speakAsDog() const {
        Dog::speak();   // 명시적으로 Dog 쪽 메서드 호출
    }

    void speakAsWolf() const {
        Wolf::speak();  // 명시적으로 Wolf 쪽 메서드 호출
    }

    // 또는 오버라이딩하여 의도를 명확히 함
    void speak() const {
        cout << "Hybrid: 둘 다 가능함!" << endl;
    }
};

int main() {
    Hybrid h;

    h.speak();         // Hybrid 클래스에서 오버라이드한 speak()
    h.speakAsDog();    // Dog의 speak()
    h.speakAsWolf();   // Wolf의 speak()

    return 0;
}
