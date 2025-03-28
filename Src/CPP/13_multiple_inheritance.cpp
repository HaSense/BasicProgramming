#include <iostream>
#include <string>
using namespace std;

// 전화 기능 클래스
class Phone 
{
public:
    void call(const string& number) const {
        cout << "전화 거는 중: " << number << endl;
    }
};

// 카메라 기능 클래스
class Camera {
public:
    void takePhoto() const {
        cout << "사진 촬영!" << endl;
    }
};

// 스마트폰은 전화도 되고, 사진도 찍을 수 있다
class SmartPhone : public Phone, public Camera {
public:
    void useApp(const string& appName) const {
        cout << "앱 실행: " << appName << endl;
    }
};

int main() {
    SmartPhone galaxy;

    galaxy.call("010-1234-5678");  // Phone 기능
    galaxy.takePhoto();            // Camera 기능
    galaxy.useApp("지도");         // SmartPhone 자체 기능

    return 0;
}
