#include <stdio.h>
#define STUDENTS 5
#define SUBJECTS 3
#define CHARNUM 20

char subjectNames[SUBJECTS][CHARNUM] = { "����", "�߰����", "�⸻���" };
char studentNames[STUDENTS][CHARNUM] = { "" }; // �л� �̸��� ����� �迭
double studentScores[STUDENTS][SUBJECTS] = { 0.0 }; // �л��� ���� �� ������ ������ ����� �迭


void printaveragescore() {
	for (int i = 0; i < STUDENTS; i++) {
		double studentsaverage = 0;
		double sum = 0;
		for (int j = 0; j < SUBJECTS; j++) {
			sum += studentScores[i][j];
			studentsaverage = sum / SUBJECTS;
		}
		printf("\t%s�� ��� ���� : %.2lf\n", studentNames[i], studentsaverage);
	}
}

void printaveragesubject() {
	for (int i = 0; i < SUBJECTS; i++) {
		double sum2 = 0;
		double avgsub = 0;
		for (int j = 0; j < STUDENTS; j++) {
			sum2 += studentScores[i][j];
			avgsub = sum2 / STUDENTS;

		}
		
		printf("\t%s�� ��� ���� : %.2lf\n", studentNames[i], avgsub);
	}
}











int main() {


	
	// TODO 1.1: �л� �̸��� �Է¹޴� �ڵ� ��� �ۼ�

	printf("�л� %d ���� �̸��� �Է��� �����մϴ�. \n", STUDENTS);
	for (int i = 0; i < STUDENTS; i++) {
		scanf_s("%s", studentNames[i], (int)sizeof(studentNames[i]));
	}

	char ch = getchar();
	// �Էµ� �л� �̸��� �� ����Ǿ����� Ȯ���ϴ� �ڵ� ���
	printf("�л� �̸��� ��� �ԷµǾ����ϴ�. \n");
	printf("�Էµ� �л� �̸��� ������ �����ϴ�. \n");
	for (int i = 0; i < STUDENTS; i++) {
		printf("%s", studentNames[i]);
		if (i != STUDENTS - 1) {
			printf(", ");
		}
	}
	printf("\n");
	printf("--------------------\n");
	printf("�� �л��� %s, %s, %s ������ ���ʴ�� �Է����ּ���. (���� ����)\n ", subjectNames[0], subjectNames[1], subjectNames[2]);


	// TODO 1.2: �л����� ���� �� ������ �Է¹޴� �ڵ� ��� �ۼ�

	for (int i = 0; i < STUDENTS; i++) {
		
	    for (int j = 0; j < SUBJECTS; j++) {
			printf("    %s �� ���� : ", studentNames[i]);
			scanf_s("%lf", &studentScores[i][j]);
		}
		
		printf("�л����� ���� ������ ��� �Է� �Ǿ����ϴ�.\n");
		printf("--------------------\n");
		printf("�л� �� ������ ������ �����ϴ� \n");

		printaveragescore();
		// TODO 1.3: �л� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ
		// HINT1: 2�� for��: (1) �л��� (2) ������� ���� �հ� ����� ���ϰ� ���
		// HINT2: ��¹� �ڵ� = printf("\t%s�� ��� ����: %.2lf\n", studentNames[i], finalScore);



		printf("--------------------\n");
		printf("���� �� ��� ������ �Ʒ��� �����ϴ�. \n");
	
			
		// TODO 1.4: ���� �� ��� ������ ����ϴ� �ڵ� ��� �ۼ� >> ���� �Լ�ȭ
		// HINT1: 2�� for������ (1) ���� (2) �л����� ���� �հ� ����� ���ϰ� ���	
		// HINT2: ��¹� �ڵ� = printf("\t%s�� ��� ������ %.2lf �Դϴ�.\n", subjectNames[i], subjectScore);

		printaveragesubject();

		printf("���α׷��� �����մϴ�. ");
		return 0;
	}
}
