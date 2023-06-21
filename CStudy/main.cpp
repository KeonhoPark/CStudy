#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int intCompare(void* p1, void* p2) {
	p1 = (int*)p1;
	p2 = (int*)p2;

	if (*p1 > *p2) {
		return 1;
	}
	else if (*p1 == *p2) {
		return 0;
	}
	else {

	}

}

int main(void) {
	int a = 1;
	int b = 2;
	void* ptr1 = &a;
	void* ptr2 = &b;
	printf("%d", intCompare(ptr1, ptr2));

	return 0;
}
