//���θ� ȸ������ ���α׷�
#include <stdio.h>

int main(void) {
	char name = "�赵��";
	char id = "townboy";
	int age = 20;
	int birth = 040423;
	int size = 260;
	printf("---ȸ������---");
	printf("�̸� : %s", name);
	scanf_s("%s", name, (int)sizeof(name));
	printf("���̵� : %s",id);
	scanf_s("%s", id,(int)sizeof(id));
	printf("���� : %d", age);
	scanf_s("%d", &age);
	printf("���� : %d", birth);
	scanf_s("%d", &birth);
	printf("�Ź� ũ�� : %d", size);
	scanf_s("%d", &size);
}