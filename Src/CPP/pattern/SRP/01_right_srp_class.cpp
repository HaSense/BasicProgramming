#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//로그 기능과 사용자 관리 기능을 각각의 클래스로 분리해서 위반을 해결한 코드


// 로그 전담 클래스
class Logger {
public:
    void log(const string& message) {
        ofstream logFile("user.log", ios::app);
        logFile << message << endl;
        logFile.close();
    }
};

// 사용자 관리 클래스 (단일 책임: 사용자 처리)
class UserManager {
private:
    Logger& logger;

public:
    UserManager(Logger& l) : logger(l) {}

    void saveUser(const string& name) {
        // 사용자 저장 로직
        cout << "사용자 저장됨: " << name << endl;

        // 로그 기록 위임
        logger.log("사용자 저장됨: " + name);
    }
};

int main() {
    Logger logger;
    UserManager manager(logger);
    manager.saveUser("홍길동");
}
