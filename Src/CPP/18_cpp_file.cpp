//C++ 파일처리!!!
#include <iostream>
#include <fstream> //파일처리 헤더
#include <string>
using namespace std;

int main()
{
	ofstream fout("C:\\Temp\\hello.txt"); //파일객체 생성
	fout << "Hello World~!" << endl; //파일에 쓰기 끝!
	fout.close();

	ifstream fin("C:\\Temp\\hello.txt");
	if (!fin) {
		cerr << "파일을 읽을 수 없습니다." << endl;
		return 1;
	}
	string str;
	while (getline(fin, str)) {
		cout << str << endl;
	}
	fin.close();

	cout << "실행 되었습니다!" << endl;
	return 0;
}





