#include <stdio.h>

int main(void) {
	int a = 3.14; // ������ ����ȯ
	int b = (int)3.14; // ����� ����ȯ

	printf("%d", (char)-129);

	/*char x = -1;
	unsigned char y = 1;

	if (x > y) {
		printf("true");
	}
	else {
		printf("false");
	}*/

	int x = -1;
	unsigned int y = 1;

	if (x > y) {
		printf("true");
	}
	else {
		printf("false");
	}

	return 0;
}