#include <iostream>

using namespace std;
class Shape
{
public:
	int thick;
	//생성자
	Shape() :thick(0) {}

	virtual void draw()
	{
		cout << "도형을 그리다" << endl;
	}
	virtual void draw(int thick)
	{
		this->thick = thick;
		cout << "선의 굵기는 : " << this->thick 
			<< " 도형을 그리다" << endl;
	}
};

class Circle : public Shape
{
	void draw() override
	{
		cout << "원을 그리다" << endl;
	}
	void draw(int thick)
	{
		this->thick = thick;
		cout << "선의 굵기는 : " << this->thick
			<< " 원을 그리다" << endl;
	}
};
class Triangle : public Shape
{
	void draw() override
	{
		cout << "삼각형을 그리다" << endl;
	}
};

int main()
{
	Shape* s = new Circle();
	//cout << "선의 굵기 : " << s->thick << endl;
	s->draw(5);

	s = new Triangle();
	//cout << "선의 굵기 : " << s->thick << endl;
	s->draw(5);

	return 0;
}
