#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num = 1;

	do {
		printf("1. 입력하기\n");
		printf("2. 검색하기\n");
		printf("3. 수정하기\n");
		printf("4. 삭제하기\n");
		printf("5. 종료하기\n");
		printf("===================================\n");
		printf("메뉴입력: ");
		scanf("%d", &num);
		switch (num) {
			case 1:
				printf("입력하기 작업을 수행합니다.\n");
				break;
			case 2:
				printf("검색하기 작업을 수행합니다.\n");
				break;
			case 3:
				printf("수정하기 작업을 수행합니다.\n");
				break;
			case 4:
				printf("삭제하기 작업을 수행합니다.\n");
				break;
			case 0:
				printf("종료하기 작업을 수행합니다.\n");
				break;
			default:
				printf("잘못 입력하였습니다.\n");
				break;
		}
	} while (num != 0);

	printf("프로그램을 종료합니다.\n");
	getchar();
	return 0;
}
