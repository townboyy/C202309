#include <stdio.h>
#define STUDENTS 5 //����, �л��� 5��


void classifystudents(int scores[], char targetgrade) {
	printf("�л� ���� �з� : \n");
	char grade = " "; //���� �ʱ�ȭ

	for (int i = 0; i < STUDENTS; i++) {
		if (scores[i] > 90) {
			grade = "A";

		}
		else if(scores[i] > 80) {
			grade = "B";

		}
		else if(scores[i] > 70) {
			grade = "C";

		}
		else if(scores[i] > 60) {
			grade = "D";

		}
		else if(scores[i] > 50) {
			grade = "F";

		}
		if (targetgrade == grade) {
			printf("%d �л��� %c ������ �޾ҽ��ϴ�", i + 1, targetgrade);
		}
	}
}

int main() {
	int scores[STUDENTS];
	for (int i = 0; i < 5; i++) {
		printf("�л� %d�� ������ �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &scores[i]);
	}
	char ch = getchar();
	char target; //���� ���� ����
	printf("Ư�� ������ �Է��Ͻÿ� : ");
	scanf_s("%c", &target,1);

	classifystudents(scores, target); //�Լ� ȣ��, �����Լ� >ȣ����, scores, target �Ű�����

	return 0;
}