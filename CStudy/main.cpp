#include <stdio.h>

void test1(int n, int m) {
	if (n % m != 0) {
		printf("���޵Ǿ�� �ϴ� ������ ���� %d �Դϴ�.\n", (n / m) + 1);
	}
	else {
		printf("���޵Ǿ�� �ϴ� ������ ���� %d �Դϴ�.\n", n / m);
	}
}

void test2(int n) {
	int total = 0;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			total += i;
		}
	}

	printf("1���� n������ Ȧ���� �� = %d\n", total);
}

void test3(int n) {
	int total = 0;
	int i = 1;

	while (i <= n) {
		if (i % 2 == 0) {
			total += i;
		}
		i++;
	}

	printf("1���� n������ ¦���� �� = %d\n", total);
}

void test4() {
	for (int year = 2020; year <= 3020; year++) {
		if (year % 4 == 0 && year % 100 == 0) {
			continue;
		}
		else if (year % 4 == 0) {
			printf("%d���� �����Դϴ�.\n", year);
		}
		else if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0) {
			printf("%d���� �����Դϴ�.\n", year);
		}
	}
}

int main(void) {

	test1(1700, 500);
	test2(10);
	test3(10);
	test4();

	return 0;
}