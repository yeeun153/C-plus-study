#include <iostream>
using namespace std;

int main() {
	int a = 15;
	int* p = &a;

	int ary[5] = { 10,20,30,40,50 };
	int* ap = ary;

	/*cout << "ary[1] ==> " << ary[1] << endl;
	cout << "?? ==> " << *(ap+3) << endl;
	cout << "?? ==> " << ap[3] << endl;
	cout << "?? ==> " << ap << endl;*/

	cout << "(*p)-- ==> " << (*p)-- << endl;
	cout << "*p ==> " << *p << endl;

	/*cout << "a => " << a << endl;
	cout << "p => " << p << endl;
	cout << "*p => " << *p << endl;*/
}