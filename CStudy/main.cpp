#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	
	int arr[][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
	int(*ptr)[4] = arr;

	int row = (int)(sizeof(arr) / sizeof(arr[0]));
	int col = (int)(sizeof(arr[0]) / sizeof(arr[0][0]));

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d\t", *(*(ptr+i)+j));
		}
		printf("\n");
	}

	return 0;
}
