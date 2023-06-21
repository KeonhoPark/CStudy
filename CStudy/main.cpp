#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
typedef enum{True=1, False=0} bool_t;

bool_t isPrime(int);

bool_t isPrime(int num) {
	if (num == 1 || num == 2) return False;

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return False;
		}
	}
	return True;
}


int main(void) {
	int num = 0;
	if (scanf("%d", &num) == 1) {
		if (isPrime(num) == True) {
			printf("소수입니다.\n");
		}
		else {
			printf("소수가 아닙니다.\n");
		}
	}
	else {
		printf("잘못 입력하였습니다\n");
	}
	printf("프로그램을 종료합니다.\n");

	getchar();
	return 0;
}
