#include <iostream>
#include <string>
using namespace std;

class IWing {
public:
    virtual ~IWing() = default;
    virtual void fly() const = 0;
};

class Horse {
public:
    void run() const {
        cout << "말이 달립니다." << endl;
    }
};

class Unicorn : public Horse, public IWing {
public:
    void fly() const override {
        cout << "유니콘이 하늘을 납니다!" << endl;
    }
};

int main() {
    Unicorn uicorn;
    uicorn.run();   // Horse 기능
    uicorn.fly();   // IWing 인터페이스 구현


    return 0;
}
