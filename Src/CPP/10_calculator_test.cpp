#include <iostream>
#include <iomanip>
using namespace std;

class Calculator
{
public:
	int plus(int a, int b)
	{
		return a + b;
	}
	int minus(int a, int b)
	{
		return a - b;
	}
	int multiple(int a, int b)
	{
		return a * b;
	}
	double divide(int a, int b)
	{
		return (double)a / b;
	}

	//추가
	int abs(int a)
	{
		if (a < 0)
			return -a;
		else
			return a;
	}
	double abs(double a)
	{
		if (a < 0)
			return -a;
		else
			return a;
	}

};

int main()
{
	Calculator cal;
	//Calculator* cal = new Calculator();
	
	cout << fixed << setprecision(2);

	cout << cal.divide(3, 2) << endl;

	cout << cal.abs(-1) << endl;
	cout << cal.abs(-3.14) << endl;

}
