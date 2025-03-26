#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int arr[3] = {10, 20, 30};
	for (int i = 0; i < 3; i++)
		cout << arr[i] << endl;
	///////////////////////////////////////////////
	vector<int> arr2 = { 10, 20, 30 };
	for (int i = 0; i < arr2.size(); i++) {
		cout << arr2[i] << endl;
	}

	return 0;
}
