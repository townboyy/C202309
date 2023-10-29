//쇼핑몰 회원가입 프로그램
#include <stdio.h>

int main(void) {
	char name = "김도형";
	char id = "townboy";
	int age = 20;
	int birth = 040423;
	int size = 260;
	printf("---회원정보---");
	printf("이름 : %s", name);
	scanf_s("%s", name, (int)sizeof(name));
	printf("아이디 : %s",id);
	scanf_s("%s", id,(int)sizeof(id));
	printf("나이 : %d", age);
	scanf_s("%d", &age);
	printf("생일 : %d", birth);
	scanf_s("%d", &birth);
	printf("신발 크기 : %d", size);
	scanf_s("%d", &size);
}