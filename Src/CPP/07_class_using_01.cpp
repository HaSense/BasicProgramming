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

    
    d1.age = 1;
    d2->age = 2;

    cout << d1.age << endl;
    cout << d2->age << endl;
    cout << "d1이 " << d1.play() << endl;
    cout << "d2가 " << d2->play() << endl; ;
    

    free(d2);

    return 0;
}
