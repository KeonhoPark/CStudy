#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num = 1;

	do {
		printf("1. �Է��ϱ�\n");
		printf("2. �˻��ϱ�\n");
		printf("3. �����ϱ�\n");
		printf("4. �����ϱ�\n");
		printf("5. �����ϱ�\n");
		printf("===================================\n");
		printf("�޴��Է�: ");
		scanf("%d", &num);
		switch (num) {
			case 1:
				printf("�Է��ϱ� �۾��� �����մϴ�.\n");
				break;
			case 2:
				printf("�˻��ϱ� �۾��� �����մϴ�.\n");
				break;
			case 3:
				printf("�����ϱ� �۾��� �����մϴ�.\n");
				break;
			case 4:
				printf("�����ϱ� �۾��� �����մϴ�.\n");
				break;
			case 0:
				printf("�����ϱ� �۾��� �����մϴ�.\n");
				break;
			default:
				printf("�߸� �Է��Ͽ����ϴ�.\n");
				break;
		}
	} while (num != 0);

	printf("���α׷��� �����մϴ�.\n");
	getchar();
	return 0;
}
