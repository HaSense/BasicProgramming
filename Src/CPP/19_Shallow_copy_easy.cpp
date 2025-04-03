#include<iostream>
using namespace std;

class MyArray {
public:
	int size;
	int* data;

	MyArray(int size)
	{
		this->size = size;
		data = new int[size];
	}

	MyArray(const MyArray& other);

};

MyArray::MyArray(const MyArray& other) {
	this->size = other.size;
	this->data = other.data;
}



int main() {

	MyArray buffer(10);
	buffer.data[0] = 2;

	MyArray clone = buffer;
	buffer.data[0] = 3;

	cout << "clone.data[0] = " << clone.data[0] << endl;

	return 0;
}
