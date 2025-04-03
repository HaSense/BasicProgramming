#include <iostream>
using namespace std;

class MyData 
{
public:
    int value;

    MyData(int v) : value(v) {}

    // == 연산자 오버로딩
    bool operator==(const MyData& other) const {
        return value == other.value;
    }
};

int main() 
{
    MyData a(10);
    MyData b(10);

    if (a == b)
        cout << "같습니다." << endl;
    else
        cout << "다릅니다." << endl;

    return 0;
}
