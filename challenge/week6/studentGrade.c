#include <stdio.h>
#define STUDENTS 5 // �л� 5���̶�� ����

void classifyStudents(int scores[], char targetGrade) {
    printf("�л� ���� �з�:\n");
    char grade = ' ';
    for (int i = 0; i < STUDENTS; i++) {
        if (scores[i] >= 90) {
            grade = 'A';
        }
        else if (scores[i] >= 80) {
            grade = 'B';
        }
        else if (scores[i] >= 70) {
            grade = 'C';
        }
        else if (scores[i] >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }
        if (targetGrade == grade) {
            printf("%d �л��� %c ������ �޾ҽ��ϴ�.\n", i + 1, targetGrade);
        }
    }
}

int sumScores(int scores[]) {
    int sum = 0;
    for (int i = 0; i < STUDENTS; i++) {
        sum += scores[i];
    }
    return sum;
}

double average(int scores[]) {
    int sum = sumScores(scores);
    double average = (double)sum / STUDENTS;
    return average;
}

void printRanks(int scores[]) {
    // Implement ranking logic here if needed.
}

int main() {
    int scores[STUDENTS];
    for (int i = 0; i < STUDENTS; i++) {
        printf("�л��� %d�� ������ �Է��ϼ���: ", i + 1);
        scanf_s("%d", &scores[i]);
    }

    char target;
    printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�: ");
    scanf_s(" %c", &target);
    classifyStudents(scores, target);

    int sum = sumScores(scores);
    double avg = average(scores);
    printf("�л��� ������ �� ���� %d �̰�, ��� ���� %.2lf �Դϴ�.\n", sum, avg);

    printRanks(scores);

    return 0;
}