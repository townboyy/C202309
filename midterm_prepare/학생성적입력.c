#include <stdio.h>

int main(void) {
	char name[5][50];
	double scores[5];

for (int i = 0; i < 5; i++) {
    printf("�л� %d�� �̸��� �Է��ϼ��� : ", i + 1);
	scanf_s("%s", name[i],(int)sizeof(name[i]));
	printf("�л� %d�� ������ �Է��ϼ��� : ",i+1);
	scanf_s("%lf", &scores[i]);
	}

printf("�Է��� �л� ���� : \n");
for(int i = 0; i < 5; i++) {
	printf("�̸� : %s, ���� : %lf\n", name[i], scores[i]);
}
return 0;
}