#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	vector<int> vec;
	int n;

	for (int i = 0; i < 5; i++) {
		cin >> n;
		vec.push_back(n);
	}
	
	sort(vec.begin(), vec.end()); //오름차순
	reverse(vec.begin(), vec.end()); //내림차순

	for (int item : vec)
	{
		cout << item << " ";
	}
	cout << endl;

	return 0;
}
