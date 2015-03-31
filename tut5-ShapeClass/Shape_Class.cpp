#include <iostream>
#include <string>
#include <vector>
using namespace std;

// declare abstract base class Shape

class Shape
{
public:
	Shape(int a = 0, int b = 0)

	{
		width = a;
		length = b;
	}
	virtual void name() = 0;
	virtual void area() = 0;
	virtual void perimeter() = 0;
	virtual void draw() = 0;
	~Shape();

protected:
	double width;
	double length;

};

// derive class
class Circle : public Shape {

public: Circle(int a = 0, int b = 0) : Shape(a, b){}
		void virtual name(void)
		{
			cout << "Circle" << endl;
		};

		virtual void area() //area of a circle
		{
			cout << "Cirle class area :" << (3.14 * (length / 2)) << endl;

		}
		virtual void perimeter()  //perimeter of a circle
		{
			cout << "Perimeter of a circle:" << (2 * 3.14*(length / 2)) << endl;

		}
		virtual void draw()
		{
			name();
			area();
			perimeter();
		}
};

class Triangle : public Shape{

public: Triangle(int a = 0, int b = 0) : Shape(a, b){}
		void virtual name(void)
		{
			cout << "Triangle" << endl;
		};

		virtual void area() //area of a triangle
		{
			cout << "Triangle class area :" << (width* (length / 2)) << endl;

		}

		virtual void perimeter()  //perimeter of a Triangle
		{
			cout << "Perimeter of a triangle:" << ((2 * width) + length) << endl;

		}

		virtual void draw()
		{
			name();
			area();
			perimeter();
		}

};

class Rectangle : Shape{
public: Rectangle(int a = 0, int b = 0) : Shape(a, b){}
		void virtual name(void)
		{
			cout << "Rectangle" << endl;
		};

		virtual void area() //area of a rectangle
		{
			cout << "Rectangle class area :" << (width* length) << endl;

		}

		virtual void perimeter()  //perimeter of a Triangle
		{
			cout << "Perimeter of a triangle:" << (2 * (width + length)) << endl;

		}

		virtual void draw()
		{
			name();
			area();
			perimeter();
		}



};

//****************MAIN FUNCTION******************
vector <Shape *> shape(3);

int main()
{
	// initializing the array
	shape[0] = new Rectangle(4, 5);
	shape[1] = new Triangle(4, 5);
	shape[2] = new Circle(4, 5);


	for (int i = 0; i < 3; i++)
	{

		shape[i]->draw();
	}// end forloop


	system("pause");
}// end main function



