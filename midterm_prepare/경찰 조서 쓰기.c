#include <stdio.h>

int main(void) {
	char name[128];
	printf("�̸�? : ");
	scanf_s("%s", &name, (int)sizeof(name));

	int age;
	printf("����? : ");
	scanf_s("%d", &age);

	float weight;
	printf("������? : ");
	scanf_s("%f", &weight);

	double height;
	printf("Ű? : ");
	scanf_s("%lf", &height);

	char what[512];
	printf("���� ����? : ");
	scanf_s("%s", &what, (int)sizeof(what));

	printf("�ѤѤѹ����� �����ѤѤ�\n");
	printf("�̸� :%s\n", name);
	return 0;
}