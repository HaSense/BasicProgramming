#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class UserManager {
public:
    void saveUser(const string& name) {
        // 1. 사용자 저장 로직
        cout << "사용자 저장됨: " << name << endl;

        // 2. 로그 작성 로직 (SRP 위반) -- 사용자 관리에 집중하지 않고 로그 작성 부분이 커지거나 필요가 적은경우엔 따로 분리하는게 맞다.
        ofstream logFile("user.log", ios::app);
        logFile << "사용자 저장됨: " << name << endl;
        logFile.close();
    }
};

int main() {
    UserManager manager;
    manager.saveUser("홍길동");
}
