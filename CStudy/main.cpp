#include <stdio.h>

int main(void) {
	printf("%-010d %d %0.2f\n", 10, 23, 3.14f);
	printf("sizeof(int) : %u\n", sizeof(int));
	printf("sizeof(long) : %u\n", sizeof(long));
	printf("sizeof(char) : %u\n", sizeof(char));
	printf("sizeof('A') : %u\n", sizeof('A'));

	int a = 20 + 5 * 5;

	if (a) {
		
	}
	else {

	}

	return 0;
}