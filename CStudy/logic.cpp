#include<stdio.h>
#include <stdlib.h>

int* readData(const char* path, int* count) {
	//�Ķ���ͷ� ���޹��� ������ �����Ѵ�.
	//�迭�� �����Ѵ�.
	//������ �����͸� �о� �迭�� �����Ѵ�.
	//����� �迭�� ��ȯ�Ѵ�.

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