#include <iostream>
#include <string>

using namespace std;

class Dog
{
public:
    //멤버변수
    int age;
    //멤버메소드
    //생성자
    Dog() {}
public:
    string play() 
    {
        return "뛰어 놀다";
    }
};
int main()
{
    Dog d1;
    Dog* d2 = new Dog();

    d1.play();
    d2->play();
}
