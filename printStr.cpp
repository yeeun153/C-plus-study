#include <iostream>
using namespace std;

int main() {
	int i, sum;

	sum = 0;
	for (i = 1; i <= 10; i++)
		sum += i;

	cout << "1에서 10까지 더한 결과는 " << sum << "입니다\n";
	return 0;
}