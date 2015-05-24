#include <iostream>
#include<string>
using namespace std;

class Shape{
public:
	Shape(){
		length = 3.5;
		height = 5.5;
		radius = 4.5;
	};
	virtual string name() = 0;
	virtual double perimeter() = 0;
	virtual double Area() = 0;
	virtual void Draw() = 0;
protected:
	double length;
	double height;
	double radius;

};

class Circle :public Shape{
public:
	string name(){
		return("Circle");
	};
	double perimeter(){
		return(2 * 3.142*length);
	};
	double Area(){
		return(3.142*radius*radius);
	};
	void Draw(){
		cout << name() << " " << perimeter() << " " << Area() << " " << endl;
	};
};

class Rectangle :public Shape{
public:
	string name(){
		return("Rectangle");
	};
	double perimeter(){
		return(2 * (length*height));
	};
	double Area(){
		return(length*height);
	};
	void Draw(){
		cout << name() << " " << perimeter() << " " << Area() << " " << endl;
	};
};

class Triangle :public Shape{
public:
	string name(){
		return("Triangle");
	};
	double perimeter(){
		return(3 * length);
	};
	double Area(){
		return(0.5*length*height);
	};
	void Draw(){
		cout << name() << " " << perimeter() << " " << Area() << " " << endl;
	};
};

// main function
int main(){
	Shape *shp[3];
	Rectangle rec;
	Triangle tri;
	Circle clc;
	shp[0] = &clc;
	shp[1] = &rec;
	shp[2] = &tri;

	for (int i = 0; i < 3; i++){

		shp[i]->Draw();

	}
	system("pause");


}