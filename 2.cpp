#include <iostream>
using namespace std;

int main() {
	int a, i, result;
	while (1) {
		cout << "출력할 구구단(정수)을 입력하세요 >>";
		cin >> a;
		if (a > 0)
			for (i = 1; i < 10; i++)
			{
				result = a * i;
				cout << a << "x" << i << "=" << result << endl;
			}
		else
		{
			cout << "구구단 출력을 종료합니다." << endl;
			break;
		}
	}
}