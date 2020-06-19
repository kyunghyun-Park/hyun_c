#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	struct Student
	{
		int id;
		char name[20];

	};

	struct Car
	{
		int id;
		char name[20];

	}c1;


	struct Student s1;

	strcpy(s1.name, "박경현");
	s1.id = 20000004;
	printf("이름:%s\n", s1.name);
	printf("학번:%d\n", s1.id);

	strcpy(c1.name, "마티즈");
	printf("차 이름:%s\n", c1.name);

}