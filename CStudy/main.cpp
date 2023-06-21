#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int stringCompare(void* s1, void* s2) {
	if (*(char*)s1 > *(char*)s2) {
		return 1;
	}
	else if (*(char*)s1 == *(char*)s2) {
		return 0;
	}
	else {
		return -1;
	}
}

int main(void) {
	char a[] = "a";
	char b[] = "b";
	void* ptr1 = &a;
	void* ptr2 = &b;
	printf("%d", stringCompare(ptr1, ptr2));

	return 0;
}
