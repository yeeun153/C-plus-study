#include <iostream>
using namespace std;

//Rectangle 클래스 선언부
class Rectangle {
public:
	int width;
	int height;

	Rectangle();
	Rectangle(int width,int height);
	int getArea();

};

int Rectangle::getArea() {
	return width * height;
}

Rectangle::Rectangle() : Rectangle(1, 1) {
	//width = height = 1;
}

Rectangle::Rectangle(int width, int height) {
	this->width = width;
	this->height = height;
}

int main() {
	Rectangle rect; //(1)
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;


	Rectangle rect2(2, 3); //(2)
	cout << "사각형의 면적은 " << rect2.getArea() << endl;
}