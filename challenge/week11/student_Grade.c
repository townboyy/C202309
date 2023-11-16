//231630 �赵��
#include <stdio.h>
#define STUDENTS 5 // �л� 5���̶�� ����

void classifyStudents(int* scores, char targetGrade) { 
    printf("�л� ���� �з�:\n");
    char grade = ' ';
    for (int i = 0; i < STUDENTS; i++) {
        if (*(scores + i) >= 90) { //scores �迭�� +i (0.1. 2. 3. 4)�� ���� �� �� �ּҿ� �ִ� ���� ������
            grade = 'A';
        }
        else if ((*scores + i) >= 80) { //*(scores+i) �� scores �迭�� i��°�� ��
            grade = 'B';
        }
        else if ((*scores + i) >= 70) {
            grade = 'C';
        }
        else if ((*scores + i) >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }


        if (targetGrade == grade) {
            printf("%d �л��� %c ������ �޾ҽ��ϴ�.\n", i + 1, targetGrade);
        } //grade�� targetgrade�� ��ġ�ϸ� %d �л��� ���� ���
    }
   
    }


int sumScores(int* scores) { //���� ��� �Լ�
    int sum = 0;
    for (int i = 0; i < STUDENTS; i++) {

        sum += *(scores + i);
    }
    return sum;
}

double average(int* scores) { //������� ��� �Լ�
    int sum = sumScores(scores);
    double average = (double)sum / STUDENTS;
    return average;
}

void printRanks(int* scores) { //���� ��� �Լ�
    int ranks[STUDENTS];
    for (int i = 0; i < STUDENTS; i++) {
        ranks[i] = 1;
        for (int j = 0; j < STUDENTS; j++) {
            if (scores[j] > scores[i]) {
                ranks[i]++;
            }

        }

        printf(" %d �л��� ������ %d �Դϴ� \n", i + 1, ranks[i]);
    }
}

int main() { //�Լ� ȣ��, 
    int scores[STUDENTS];
    for (int i = 0; i < STUDENTS; i++) { //������ �Է¹���
        printf("�л��� %d�� ������ �Է��ϼ���: ", i + 1);
        scanf_s("%d", &scores[i]);
    }

    char target; //Ư�� ���� �Է¹���
    printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�: ");
    scanf_s(" %c", &target);
    classifyStudents(scores, target);
   

    int sum = sumScores(scores);
    double avg = average(scores);
    printf("�л��� ������ �� ���� %d �̰�, ��� ���� %.2lf �Դϴ�.\n", sum, avg);
    //�� �հ� ��� ���
    printRanks(scores);

    return 0;
}