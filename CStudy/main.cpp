#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int ary[] = {5, 2, 3, 1, 4, 4, 5, 2};

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

void test5(int n) {
	int flag = 0;
	if (n == 1) {
		printf("-1");
		return;
	}
	else {

		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				flag = 1;
				printf("-1");
				break;
			}
		}

		if (flag == 0) {
			printf("1");
		}
	}
}

void test6(int n) {
	int flag = 0;

	if (n == 1) {
		return;
	}
	else if (n == 2) {
		printf("2");
		return;
	}
	else {
		for (int i = 2; i < n; i++) {
			for (int j = 2; j < i; j++) {
				if (i % j == 0) {
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				printf("%d\t", i);
			}
			else {
				flag = 0;
			}
		}
	}
}

void test7(int n) {
	if (n < 60) {
		printf("F");
	}
	else if (n >= 60 && n < 70) {
		printf("D");
	}
	else if (n >= 70 && n < 80) {
		printf("C");
	}
	else if (n >= 80 && n < 90) {
		printf("B");
	}
	else{
		printf("A");
	}
}

// �Լ��� ����
void func(int, int);

//�Լ��� ����
void func(int a, int b) {

}

//void print(int* arr, int count) {
//	printf("arr : %p\n", arr);
//	printf("�迭ũ�� : %llu\n", sizeof(arr));
//	printf("�迭������ �� : %d", count);
//}

int getMax(int* arr_ptr, int count) {
	int max = -2147483648;

	for (int i = 0; i < count; i++) {
		if (max < *(arr_ptr + i)) {
			max = *(arr_ptr + i);
		}
	}

	return max;

}

void sort(int* arr_ptr, int count) {
	int max = getMax(arr_ptr, count);

	int sorted[6] = {0};

	for (int i = 0; i < count; i++) {
		sorted[*(arr_ptr + i)]++;
	}

	for (int j = int(sizeof(sorted) / sizeof(sorted[0])); j > 0; j--) {
		for (int k = 0; k < sorted[j]; k++) {
			printf("%d\t", j);
		}
	}
}

void swap(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void test8(int n) {

	if (n == 0) {
		printf("1");
		return;
	}
	else {
		int total = 1;
		for (int i = 1; i <= n; i++) {
			total *= 2;
		}

		printf("%d", total);
	}
}

void test9(int n, int m) {
	int total = n;

	for (int i = 1; i < m + 1;i++) {
		printf("%d\t", total);
		total *= n;
	}
}

void test10(int cost) {
	int coins[] = { 500, 100, 50, 10, 5, 1 };
	int result = 0;

	for (int i = 0; i<int(sizeof(coins) / sizeof(coins[0])); i++) {
		result += cost / coins[i];
		cost %= coins[i];
	}

	printf("%d\n", result);
}

void test11(int n) {
	int count = 0;

	while (n > 0) {
		n /= 10;
		count += 1;
	}

	printf("%d", count);
}

int main(void) {

	/*test1(1700, 500);
	test2(10);
	test3(10);
	test4();
	test5(10);
	test6(10);
	test7(3);*/
	/*test8(3);*/
	/*test9(2, 3);*/
	/*test10(1752);*/
	test11(3);

	
	/*int arr[][3] = { {1, 2, 3}, {4, 5, 6} };
	int row = int(sizeof(arr) / sizeof(arr[0]));

	int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("a = %d, b = %d", a, b);*/

	return 0;
}