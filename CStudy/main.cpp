#include <stdio.h>

void test1(int n, int m) {
	if (n % m != 0) {
		printf("지급되어야 하는 동전의 수는 %d 입니다.\n", (n / m) + 1);
	}
	else {
		printf("지급되어야 하는 동전의 수는 %d 입니다.\n", n / m);
	}
}

void test2(int n) {
	int total = 0;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			total += i;
		}
	}

	printf("1부터 n까지의 홀수의 합 = %d\n", total);
}

void test3(int n) {
	int total = 0;
	int i = 1;

	while (i <= n) {
		if (i % 2 == 0) {
			total += i;
			printf("%d", i);
		}
		i++;
	}

	printf("1부터 n까지의 짝수의 합 = %d\n", total);
}

int main(void) {

	test1(1700, 500);
	test2(10);
	test3(10);

	return 0;
}