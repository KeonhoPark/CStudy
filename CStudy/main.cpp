#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num = 0;
	int flag = 0;

	printf("������ �Է�: ");
	if (scanf("%d", &num) == 1) {
		if (num == 1 || num == 2) {
			printf("�Ҽ��� �ƴ�\n");
		}
		else {
			for (int i = 2; i < num; i++) {
				if (num % i == 0) {
					printf("�Ҽ��� �ƴ�\n");
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				printf("�Ҽ�\n");
			}
		}
	}
	else {
		printf("�߸� �Է��Ͽ����ϴ�.\n");
	}

	printf("���α׷��� �����մϴ�.\n");
	getchar();

	return 0;
}
