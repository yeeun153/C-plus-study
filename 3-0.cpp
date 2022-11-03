#include <iostream>
using namespace std;

//클래스 작성하는 위치

//클래스 선언부
class Circle {
public:
	int radius;
	double getArea();
};

//클래스 구현부
double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donut; //객체
	donut.radius = 1;
	cout << "donut 면적은 " << donut.getArea() << endl;

	Circle pizza; //객체
	pizza.radius = 30;
	cout << "pizza 면적은 " << pizza.getArea() << endl;
}