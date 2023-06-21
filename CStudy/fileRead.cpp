#include "fileRead.h"
#include<stdio.h>
#include<string.h>

void printFile(const char* path) {
	FILE* fp = fopen(path, "r");
	if (fp == NULL) {
		printf("ERROR> 파일 개방 실패!!\n");
		return;
	}
	char buffer[BUFFER_SIZE];
	while (1){
		memset(buffer, 0, BUFFER_SIZE);
		char* result = fgets(buffer, BUFFER_SIZE, fp);
		if (result == NULL) break;
		printf("%s", buffer);
	}

	fclose(fp);
}

void writePerson(person_t* person) {
	FILE* fp = fopen(DATA_FILE, "w");
	if (fp == NULL) {
		fprintf(stderr, "ERROR> 파일 개방 실패\n");
		return;
	}

	fwrite(person, sizeof(person), 1, fp);
	fclose(fp);
}

bool_t readPerson(person_t* person) {
	FILE* fp = fopen(DATA_FILE, "r");
	if (fp == NULL) return False;
	memset(person, 0, sizeof(person));
	int count = fread(person, 1, sizeof(person_t), fp);
	if(count != 1) return False;
	fclose(fp);
	return True;

}

