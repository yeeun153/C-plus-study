#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donut;
	double d = donut.getArea();

	Circle* p;
	p = &donut;  //Circle* p=&donut;
	d = p->getArea();
	d = p->getArea();
	d = (*p).getArea();

	Circle pizza;
	p = &pizza;
	d = p->getArea();
	d = (*p).getArea();

}