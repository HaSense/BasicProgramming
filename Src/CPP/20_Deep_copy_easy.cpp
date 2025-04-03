#include<iostream>
using namespace std;

class MyArray {
public:
	int size;
	int* data;

	MyArray(int size){
		this->size = size;
		data = new int[size];
	}
	//원래 있던 것을 지움.
	~MyArray() {
		if (this->data == NULL) {
			delete[]data;
		}
	}
	
    
	MyArray(const MyArray& other) {
		//모든걸 복사한 후 새로운 객체 생성
		this->size = other.size;
		this->data = new int[size];

		for (int i{ 0 }; i < other.size; i++) {
			this->data[i] = other.data[i];
		}
	}
};

int main() {

	MyArray buffer(10);
	buffer.data[0] = 2;

	MyArray clone = buffer;
	buffer.data[0] = 3;

	cout << "clone.data[0] = " << clone.data[0] << endl;

	return 0;
}
