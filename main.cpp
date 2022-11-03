#include <iostream>
using namespace std;

class Add {
public:
	int a, b;
	void setValue(int a, int b);
	int calculate();
};

class Sub {
public:
	int a, b;
	void setValue(int a, int b);
	int calculate();
};

class Mul {
public:
	int a, b;
	void setValue(int a, int b);
	int calculate();
};

class Div {
public:
	int a, b;
	void setValue(int a, int b);
	int calculate();
};

void Add::setValue(int x, int y) {
	a = x; b = y;
}
int Add::calculate() {
	return a + b;
}

void Sub::setValue(int x, int y) {
	a = x; b = y;
}
int Sub::calculate() {
	return a - b;
}

void Mul::setValue(int x, int y) {
	a = x; b = y;
}
int Mul::calculate() {
	return a * b;
}

void Div::setValue(int x, int y) {
	a = x; b = y;
}
int Div::calculate() {
	return a / b;
}

int main() {
	int x, y;
	char op;
	Add a;
	Sub s;
	Mul m;
	Div d;
	while (1) {
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> x >> y >> op;
		switch (op) {
		case '+':
			a.setValue(x, y);
			cout << a.calculate() << endl;
			break;
		case '-':
			s.setValue(x, y);
			cout << s.calculate() << endl;
			break;
		case '*':
			m.setValue(x, y);
			cout << m.calculate() << endl;
			break;
		case '/':
			d.setValue(x, y);
			cout << d.calculate() << endl;
			break;
		}
	}
}