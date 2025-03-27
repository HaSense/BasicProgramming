#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

// 타자 효과 출력 함수
void StoryOut(const string& text, int delayMs = 50) {
    for (char ch : text) {
        cout << ch << flush;
        this_thread::sleep_for(chrono::milliseconds(delayMs));
    }
}

int main() {
    string scenario =
        "어두운 안개가 왕국을 뒤덮고 있다...\n"
        "한때 영광을 누렸던 대륙은, 이제 혼돈에 빠져들었다.\n"
        "하지만... 희망은 아직 남아 있다.\n"
        "당신의 선택이 이 세계의 운명을 바꿀 것이다.\n\n";

    StoryOut(scenario, 60); // 60ms 간격으로 출력

    return 0;
}
