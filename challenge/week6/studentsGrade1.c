#include <stdio.h>
#define STUDENTS 5 //�л� 5���̶�� ����

void classifyStudents(int scores[], char targetGrade) { 

	
	printf("�л� ���� �з� :\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) { //i�� 0�̶�� ����, �л������� ���� �� ���� 1�� ���ϸ� �ݺ�

		if (scores[i] >= 90) { //90���� ������ a�� ����
			grade = 'A';
		}
		else if (scores[i] >= 80) {//80���� ������ b
			grade = 'B';
		}
		else if (scores[i] >= 70) { //70���� ������ c
			grade = 'C';

		}
		else if (scores[i] >= 60) { //60���� ������ d
			grade = 'D';
		}
		else {
			grade = 'F'; //50���� ������ f
		}
		if (targetGrade == grade) {
			printf("%d �л��� %c ������ �޾ҽ��ϴ�.", i + 1, targetGrade);
		}
		
		}
	}

int sumScores(int scores[]) {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += scores[i];
		
	}
	return sum;
}
int average(int scores[]) {
	int sum = sumScores;
	double average;
	average = (double)sum / STUDENTS;
	
		
		return average;
}
void printRanks(int scores[]) {
	int i = 0;
	for (int i = 0; i < 5; i++) {

	}

}






	int main() {
		int scores[STUDENTS]; //�л����� scores�� �迭�� ������ ����
		for (int i = 0; i < STUDENTS; i++) {//i����, �л����� ������ 1�� �ø��� �ݺ�
			printf("�л��� %d�� ������ �Է��ϼ��� : ", i + 1); //�ε����� 0���� ����, i+1
			scanf_s("%d", &scores[i]);
		}
	
	char ch = getchar();//���� ���� getchar()
	char target;
	printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�");
	scanf_s("%c", &target, 1);
	classifyStudents(scores, target);

	int sum = sumScores(scores);
	double average = average(scores);
	printf("�л��� ������ �� ���� %d �̰�, ��� ���� %lf�Դϴ�. \n", sum, average);

	printRanks(scores);

	return 0;
}
