#include <iostream>
#include <string>
using namespace std;

class Mount {
	int height;
	string name;
};

int main() {
	string names[4];
	int i = 0;

	for (int i = 0; i < 4; i++) {
		cout << "ют╥б>> ";
		getline(cin, names[i], '\n');
	}
	cout << names[0] << endl;
	cout << names[1] << endl;
	cout << names[2] << endl;
	cout << names[3] << endl;

	int size = names->length();

	cout << "===== The longest mountain name ====" << endl;
	cout << "Annapurna(8091m)" << endl;
}

