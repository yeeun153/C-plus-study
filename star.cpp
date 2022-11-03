#include <iostream>

int main() {
	int a, b;

	for (b = 1; b <= 4; b++)
	{
		for (a = 0; a < b; a++)
			printf("*");
		printf("\n");
	}
	return 0;
}