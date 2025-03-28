#include <iostream>
#include <string>

using namespace std;

class Shape
{
public:
	virtual void draw() const = 0; //pure fuction!
};

class Circle : public Shape
{
public:
	void draw() const override
	{
		cout << "원을 그리다." << endl;
	}
};

class Triangle : public Shape
{
public:
	void draw() const override
	{
		cout << "삼각형을 그리다." << endl;
	}
};

class Rectangle : public Shape
{
public:
	void draw() const override
	{
		cout << "사각형을 그리다." << endl;
	}
};

int main()
{
	//Shape shape;	//error
	Circle circle;
	Triangle triangle;
	Rectangle rectangle;

	circle.draw();
	triangle.draw();
	rectangle.draw();

	Shape* shape[3];
	shape[0] = new Circle();
	shape[1] = new Triangle();
	shape[2] = new Rectangle();

	for (int i = 0; i < 3; i++)
		shape[i]->draw();
	
}
