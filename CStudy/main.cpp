#include <stdio.h>

int main(void) {
	int n = 1700;
	int m = 500;

	if (n % m != 0) {
		printf("지급되어야 하는 동전의 수는 %d 입니다.\n", (n / m) + 1);
	}
	else {
		printf("지급되어야 하는 동전의 수는 %d 입니다.\n", n / m);
	}

	return 0;
}