#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>
#include "logic.h"
#define ADDR "%p : %s\n" //단순 메크로
#define DATA "%d : %s\n"
#define SIZE "%llu : %s\n"
#define TRUE 1
#define FALSE 0
//구조체 패딩을 없애기 위해 1바이트 단위로 정렬
//#pragma pack(1)
typedef int bool_t;

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

//void print(int* arr, int count) {
//	printf("arr : %p\n", arr);
//	printf("배열크기 : %llu\n", sizeof(arr));
//	printf("배열원소의 수 : %d", count);
//}

//int getMax(int* arr_ptr, int count) {
//	int max = -2147483648;
//
//	for (int i = 0; i < count; i++) {
//		if (max < *(arr_ptr + i)) {
//			max = *(arr_ptr + i);
//		}
//	}
//
//	return max;
//
//}

//void sort(int* arr_ptr, int count) {
//	int max = getMax(arr_ptr, count);
//
//	int sorted[6] = {0};
//
//	for (int i = 0; i < count; i++) {
//		sorted[*(arr_ptr + i)]++;
//	}
//
//	for (int j = int(sizeof(sorted) / sizeof(sorted[0])); j > 0; j--) {
//		for (int k = 0; k < sorted[j]; k++) {
//			printf("%d\t", j);
//		}
//	}
//}

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

int test11(int n) {
	int count = 0;

	while (n > 0) {
		n /= 10;
		count += 1;
	}

	printf("%d", count);
	return count;
}

void test12(int n) {
	int count = test11(n);
	int half = count / 2;
	int divider = 1;
	for (int i = 0; i < half; i++) {
		divider *= 10;
	}

	printf("전 : %d, 후 : %d\n", n / divider, n % divider);
}

void test13(int n) {
	for (int i = 1; i <= n; i++) {
		if (i * i > n) {
			break;
		}
		else {
			printf("%d\t", i);
		}
	}
}

void test14(char a[], char b[]) {
	if (strcmp(a, b) == 0) {
		printf("무승부\n");
		return;
	}
	else {
		if (strcmp(a, "가위") == 0 && strcmp(b, "바위") == 0) {
			printf("b가 승자입니다.");
		}
		else if (strcmp(a, "가위") == 0 && strcmp(b, "보") == 0) {
			printf("a가 승자입니다.");
		}
		else if (strcmp(a, "바위") == 0 && strcmp(b, "가위") == 0) {
			printf("a가 승자입니다.");
		}
		else if (strcmp(a, "바위") == 0 && strcmp(b, "보") == 0) {
			printf("b가 승자입니다.");
		}
		else if (strcmp(a, "보") == 0 && strcmp(b, "가위") == 0) {
			printf("b가 승자입니다.");
		}
		else if (strcmp(a, "보") == 0 && strcmp(b, "바위") == 0) {
			printf("a가 승자입니다.");
		}
	}
}

void test15(int n) {
	int res = 1;

	if (n == 1) {
		printf("%d\n", res);
	}
	else {
		for (int i = 0; i < n-1; i++) {
			res *= 10;
		}
		printf("%d\n", res);
	}
}

void test16(int n) {
	int arr[100];
	int i = 0;

	while (n > 0) {
		arr[i] = n % 10;
		n /= 10;
		i++;
	}
	for (int i = int(sizeof(arr) / sizeof(arr[0])); i >= 0; i--) {
		if (0 <= arr[i] && arr[i] <= 9) {
			printf("%d\n", arr[i]);
		}
	}
}

void test17(void) {
	int start = 1;
	int end = 10;
	for (int offset = 0; offset <= 4; offset++) {
		printf("%d\t%d\t", start + offset, end - offset);
	}
}

void test18(int n) {
	int count = 0;

	for (int i = 1; i <= n; i++) {
		int idx = i;
		while (idx > 0){
			int tmp = idx % 10;
			if (tmp == 3 || tmp == 6 || tmp == 9) {
				count += 1;
			}
			idx /= 10;
		}
	}

	printf("%d\n", count);
}

void test19(int threeCost, int oneCost) {
	int costA = threeCost * 3 + oneCost;
	int costB = oneCost * 10;

	if (costA > costB) {
		printf("요금 : %d", costB);
	}
	else {
		printf("요금 : %d", costA);
	}
}

void test20_1(unsigned char doors) {
	for (int i = 7; i >= 0; i--) {
		int resBit = doors >> i & 1;
		printf("%d", resBit);
	}
}

//int toInteger(char* pos) {
//	int integer = 0;
//	printf("%llu\n", sizeof(pos));
//	while ((*pos >= '0') && (*pos <= '9')) {
//		integer *= 10;
//		integer += *pos - '0';
//		pos++;
//	}
//
//	return integer;
//}

int toInteger(char* pos, char** tail) {
	int integer = 0;
	while ((*pos >= '0') && (*pos <= '9')) {
		integer *= 10;
		integer += *pos - '0';
		pos++;
		*tail = pos;
	}

	return integer;
}

//void print(int ary[][3], int row) {
//	for (int i = 0; i < row; i++) {
//		int col = (int)(sizeof(*(ary + 0)) / sizeof(*(*(ary + 0)+0)));
//		for (int j = 0; j < col; j++) {
//			printf("%d", ary[i][j]);
//			printf("%d", *(*(ary + i) + j));
//		}
//		printf("\n");
//	}
//
//}

void print1(char(*menu)[13], int count) {
	printf(SIZE, sizeof(menu), "sizeof(menu)");
}

//const 키워드가 떨어져 나가기 때문에 경고가 발생할 수 있음
//메인에서는 const가 붙어있었지만 파라미터에는 const 키워드가 없기 때문
void print2(char* menu[], int count) {
	printf(SIZE, sizeof(menu), "sizeof(menu)");
}

void print3(int x) {
	printf("%d", x);
}

void print4(int* arr, int count) {
	for (int i = 0; i < count; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
}

void swap1(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void selectionSort(int* arr, int count) {
	for (int i = 0; i < (count - 1); i++) {
		int min = i;
		for (int j = (i + 1); j < count; j++) {
			if (arr[min] > arr[j]){
				min = j;
			}
		}
		swap1(arr+i, arr+min);
	}

}

void sort1(int* arr, int count, void (*sortFunc)(int*, int)) {
	sortFunc(arr, count);
}

int intCompare(void* p1, void* p2) {
	int* v1 = (int*)p1;
	int* v2 = (int*)p2;
	return *v1 - *v2;
}

int doubleCompare(void* d1, void* d2) {
	double* dp1 = (double*)d1;
	double* dp2 = (double*)d2;
	return (int)((*dp1 * 10000) - (*dp2 * 10000));
}

void print(char(*menuStr)[20], size_t size) {
	printf("%I64u\n", size);
	for (size_t i = 0; i < size; i++) {
		printf("%I64u. %s\n", i + 1, menuStr[i]);
	}
}

//void printPerson(struct _person);
//#define ADDR "%p : %s\n"
//
//void printPerson(struct _person* p) {
//	printf("%s\n", p -> name);
//	printf("%d\n", p -> age);
//	printf(ADDR, p -> name, "p.name");
//	printf(ADDR, &p ->age, "&p.age");
//}

struct _home {
	char addr[100];
};

typedef struct _person {
	char name[20];
	int age;
} person_t;

typedef union _number {
	int a;
	double b;
} number_t;

//void printPerson2(struct _person* p) {
//	if (p == NULL) {
//		return;
//	}
//	printf("이름 : %s\n", p->name);
//	printf("나이 : %d\n", p->age);
//	printPerson2(p->next);
//}

struct A {
	char c;
	int i;
	short s;
};

struct B {
	char c;
	short s;
	int i;
};

typedef struct node node_t;

struct node{
	int data;
	node_t* next;
} ;

//정수값을 가지는 노드를 생성하여 반환하는 함수
node_t* makeNode(int data) {
	node_t* newNodeAddr = (node_t*)(malloc(sizeof(node_t)));
	if (newNodeAddr == NULL) return NULL;
	newNodeAddr->data = data;
	newNodeAddr->next = NULL;
	return newNodeAddr;
}
//노드를 추가하는 함수
bool_t insertNode(node_t** rootPtrPtr, int data) {
	node_t* newNodeAddr = makeNode(data);
	if (newNodeAddr == NULL) return FALSE;
	while (*rootPtrPtr != NULL) {
		rootPtrPtr = &(*rootPtrPtr)->next;
	}
	*rootPtrPtr = newNodeAddr;
	return TRUE;
}

void printNode(node_t* root) {
	while (root != NULL) {
		printf("%d\n", root->data);
		root = root->next;
	}
}

bool_t deleteNode(node_t** root, int data) {
	while (*root != NULL && (*root)->data != data) {
		root = &(*root)->next;
	}
	if (*root == NULL) return FALSE;
	node_t* node = *root;
	*root = (*root)->next; // 다음노드를 가리키게됨
	free(node);
	return TRUE;
}

union _common {
	int a;
	short b;
	char c;
};

void printOdd(int(*ptr)[10], int count) {
	printf("홀수 출력: ");

	for (int i = 0; i < count; i++) {
		if (*(*ptr + i) % 2 == 1) {
			printf("%d, ", *(*ptr + i));
		}
	}
}

void printEven(int(*ptr)[10], int count) {
	printf("짝수 출력: ");

	for (int i = 0; i < count; i++) {
		if (*(*ptr + i) % 2 == 0) {
			printf("%d, ", *(*ptr + i));
		}
	}

}

void toDecimal(int n) {
	char byte[8] = { 0, };
	int count = (int)(sizeof(byte) / sizeof(byte[0]));
	int idx = 0;

	while (n > 0) {
		byte[idx] = n % 2;
		n /= 2;
		idx++;
	}

	for (int i = idx - 1; i >= 0; i--) {
		printf("%d", byte[i]);
	}
}

int* readData(const char* path, int* count) {
	//파라미터로 전달받은 파일을 개방한다.
	//배열을 생성한다.
	//파일의 데이터를 읽어 배열에 저장한다.
	//저장된 배열을 반환한다.

	FILE* fp = fopen(path, "r");
	if (fp == NULL) return NULL;
	fscanf(fp, "%d", count);
	int* buffer = (int*)calloc(*count, sizeof(int));
	if (buffer == NULL) return NULL;
	for (int i = 0; i < *count; i++) {
		fscanf(fp, "%d ", buffer + i);
	}
	free(fp);
	return buffer;
}

void print5(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d, ", *(arr + i));
	}
	printf("\n");
}

int main(void) {
	/*node_t* rootPtr = NULL;
	insertNode(&rootPtr, 3);
	insertNode(&rootPtr, 5);
	insertNode(&rootPtr, 7);

	printNode(rootPtr);*/

	/*int arr[10] = { 0, };
	int count = (int)(sizeof(arr) / sizeof(arr[0]));
	printf("총 10개의 숫자 입력\n");
	for (int i = 0; i < 10; i++) {
		printf("입력: ");
		scanf("%d", &arr[i]);
	}
	printOdd(&arr, count);
	printEven(&arr, count);*/

	/*int a = 0;

	printf("10진수 정수 입력: ");
	scanf("%d", &a);
	toDecimal(a);*/

	int size = readData(const char* path, int* size);
	int* arr = readData("data.txt", &size);
	print5(arr, size);
	return 0;
}
