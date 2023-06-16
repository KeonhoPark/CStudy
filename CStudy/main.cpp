#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int ary[] = {5, 2, 3, 1, 4, 4, 5, 2};

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
		}
		i++;
	}

	printf("1부터 n까지의 짝수의 합 = %d\n", total);
}

void test4() {
	for (int year = 2020; year <= 3020; year++) {
		if (year % 4 == 0 && year % 100 == 0) {
			continue;
		}
		else if (year % 4 == 0) {
			printf("%d년은 윤년입니다.\n", year);
		}
		else if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0) {
			printf("%d년은 윤년입니다.\n", year);
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

// 함수의 선언
void func(int, int);

//함수의 정의
void func(int a, int b) {

}

void print(int* arr, int count) {
	printf("arr : %p\n", arr);
	printf("배열크기 : %llu\n", sizeof(arr));
	printf("배열원소의 수 : %d", count);
}

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

int main(void) {

	/*test1(1700, 500);
	test2(10);
	test3(10);
	test4();
	test5(10);
	test6(10);
	test7(3);*/
	
	/*int arr[] = { 1, 2, 3, 4, 5 };
	size_t arraySize = sizeof(arr);
	size_t arrayElement = sizeof(arr[0]);
	size_t count = sizeof(arr) / sizeof(arr[0]);

	printf("배열 전체의 크기 %d\n", arraySize);
	printf("배열 원소 하나의 크기 %d\n", arrayElement);
	printf("배열 원소의 수 %d\n", count);

	for (int i = 0; i < count; i++) {
		printf("%d\t", arr[i]);*/

	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("arr : %p\n", arr);
	printf("배열의 크기: %llu\n", sizeof(arr));
	print(arr, int(sizeof(arr) / sizeof(arr[0])));
	int max = getMax(arr, int(sizeof(arr) / sizeof(arr[0])));
	printf("\n배열의 최댓값: %d", max);
	sort(ary, int(sizeof(ary) / sizeof(ary[0])));*/

	int arr[][3] = { {1, 2, 3}, {4, 5, 6} };
	int total = 0;
	size_t row = sizeof(arr) / sizeof(arr[0]);
	size_t col = sizeof(arr[0]) / sizeof(arr[0][0]);
	printf("row = %llu\n", row);
	printf("col = %llu\n", col);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d", arr[i][j]);
			total += arr[i][j];
		}
		printf("\n");
	}

	printf("total: %d, avg: %d", total, total / (col * row));


	return 0;
}