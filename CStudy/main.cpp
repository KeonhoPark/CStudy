#include <stdio.h>

int main(void) {
	int a = 3.14; // 묵시적 형변환
	int b = (int)3.14; // 명시적 형변환

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