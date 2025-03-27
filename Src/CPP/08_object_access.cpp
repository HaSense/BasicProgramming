#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
	int speed;
	string brand;

public:
	Car()
	{
		this->speed = 0;
		this->brand = "차";
	}
	void run()
	{
		cout << brand << "가 " << speed << "km 속도로 달립니다."<<endl;
	}
	//Getter, Setter
	void setBrand(string brand)
	{
		//보안, 암호화, 로그
		this->brand = brand;
	}
	void setSpeed(int speed)
	{
		this->speed = speed;
	}
	string getBrand()
	{
		//보안, 암호화, 로그
		return brand;
	}
	int getSpeed()
	{
		return speed;
	}
};

int main()
{
	Car myCar;
	myCar.run();

	//myCar.brand = "현대차"; //직접접근 error
	myCar.setBrand("현대차");
	myCar.setSpeed(100);
	myCar.run();
	cout << myCar.getBrand() << ":" << myCar.getSpeed() << endl;

	return 0;
}










