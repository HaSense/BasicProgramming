#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <ctime>
#include <cmath>

using namespace std;

class Weapon
{
private: 
	string name;
public:
	Weapon(const string& name) : name(name) //인자가 1개 있는 생성자
	{
	}
};
class Sword : public Weapon
{
public:
	Sword(const string& name) : Weapon(name) {}
};

int main()
{
	Sword sword1("칼1");
	Sword* sword2 = new Sword("칼2");

	free(sword2);

	return 0;
}
