﻿#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int r) { radius = r; };
	int getRadius() { return radius; }
	void setRadius(int r) { radius = r; }
	void show() { cout << "반지름이 " << radius << "인 원" << endl; }
};

void increaseBy(Circle& x, Circle y)
{
	int r = x.getRadius() + y.getRadius();
	x.setRadius(r);
}

int main() {
	Circle x(10), y(5);
	increaseBy(x, y);
	x.show();
	y.show();
}