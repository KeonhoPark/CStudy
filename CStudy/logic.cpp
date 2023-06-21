#include<stdio.h>
#include <stdlib.h>

int* readData(const char* path, int* count) {
	//파라미터로 전달받은 파일을 개방한다.
	//배열을 생성한다.
	//파일의 데이터를 읽어 배열에 저장한다.
	//저장된 배열을 반환한다.

	FILE* fp = fopen(path, "r");
	if (fp == NULL) return NULL;
	fscanf(fp, "%d", count);
	int* buffer = (int*)calloc(*count, sizeof(int));
	if (buffer == NULL) return NULL;
	for (int i = 0; i < *count; i++) {
		fscanf(fp, "%d ", buffer + i);
	}
	free(fp);
	return buffer;
}

void print(int* arr, int size){
	for (int i = 0; i < size; i++) {
		printf("%d, ", *(arr + i));
	}
	printf("\n");
}