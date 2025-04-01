#include <iostream>

using namespace std;

template <class T>
T abs(T n)
{
	if (n < 0)
		return -n;
	else
		return n;	
}

template <class T>
T Max(T a, T b)
{
	if (a > b)
		return a;
	else
		return b;
}
template <class T>
T Min(T a, T b)
{
	if (a < b)
		return a;
	else
		return b;
}

int main()
{
	int a = 5;
	int b = -3;

	double c = 7;
	double d = -8;

	cout << "a : " << abs(a) << endl;
	cout << "b : " << abs(b) << endl;
	cout << "c : " << abs(c) << endl;
	cout << "d : " << abs(d) << endl;

	cout << "max(a,b) : " << max(a, b) << endl;
	cout << "max(c,d) : " << max(c, d) << endl;

	cout << "min(a,b) : " << min(a, b) << endl;
	cout << "min(c,d) : " << min(c, d) << endl;

	return 0;
}

/*
a : 5
b : 3
c : 7
d : 8
max(a,b) : 5
max(c,d) : 7
min(a,b) : -3
min(c,d) : -8
*/
