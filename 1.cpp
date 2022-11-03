#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "문자들을 입력하라(500개 미만)." << endl;

	char words[500];
	cin.getline(words, 500, '\n');

	char find = 'a';
	int size = 500;

	int count = 0;
	int i = 0;

	for (int i = 0; i < 500; i++) {
		if (words[i] == find)
			count++;
	}
	cout << "a의 개수는 " << count << endl;
}