#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num = 0;
	int flag = 0;

	printf("정수값 입력: ");
	if (scanf("%d", &num) == 1) {
		if (num == 1 || num == 2) {
			printf("소수가 아님\n");
		}
		else {
			for (int i = 2; i < num; i++) {
				if (num % i == 0) {
					printf("소수가 아님\n");
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				printf("소수\n");
			}
		}
	}
	else {
		printf("잘못 입력하였습니다.\n");
	}

	printf("프로그램을 종료합니다.\n");
	getchar();

	return 0;
}
