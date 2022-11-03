#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string yes;

	cout << "종료하고 싶으면 yes를 입력하세요 >>";

	char word[100];
	cin.getline(word, 100, '\n');

	while (true) {
		cout << "종료하고 싶으면 yes를 입력하세요 >>";
		cin >> word;
		if (strcmp(word, "yes") == 0) {
			cout << "종료합니다..." << endl;
			break;
		}
	}
}