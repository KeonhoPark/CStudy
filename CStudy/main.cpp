#include <stdio.h>

int main(void) {
	/*int n = 10;
	for (int i = 0; i <= n; i++) {
		if (i % 2 == 0) {
			printf("%d", i);
		}
	}*/

	for (int i = 0; i <= 10; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j < 10 - i) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}