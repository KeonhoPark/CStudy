#define _CRT_SECURE_NO_WARNING
#ifndef FILEREAD_H_ //메크로가 정의되어 있지 않다면
typedef enum { True = 1, False = 0 } bool_t;
#define FILEREAD_H_
#define BUFFER_SIZE 1024
#define DATA_FILE "C:\\Users\\현대오토19\\source\\repos\\CStudy\\CStudy\\person.txt"
//typedef int bool_t;
void printFile(const char* path);
typedef struct {
	char name[20];
	int age;
} person_t;
void writePerson(person_t* person);
bool_t readPerson(person_t* person);
#endif // !FILEREAD_H_

