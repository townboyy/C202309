//231630 �赵��
#include <stdio.h>
#include <stdlib.h>

struct Student { //�л� �̸��� ������ ���� ����ü�� ������
    char name[100];
    int score;
};


void classifyStudents(struct Student* students, int students_num, char targetGrade);// �Լ� ����
int sumScores(struct Student* students, int students_num);
double average(struct Student* students, int students_num);
void printRanks(struct Student* students, int students_num);

int main() {
    int students_num; //�л��� ���� ����, �л� �� �Է¹ޱ�
    printf("�� �л� ���� �Է��ϼ���: ");
    scanf_s("%d", &students_num);
    //����ü �迭(���� �Ҵ�)
    struct Student* students = (struct Student*)malloc(students_num * sizeof(struct Student));

    for (int i = 0; i < students_num; i++) { //�̸��� ������ �Է¹��� �ڵ�
        printf("%d�� �л� �̸��� �Է��ϼ���: ", i + 1);
        scanf_s(" %s", students[i].name, sizeof(students[i].name));
        printf("%d�� �л� ������ �Է��ϼ���: ", i + 1);
        scanf_s("%d", &students[i].score);
    }

    char target; //���� �з��� �ϱ� ���� �ڵ�
    printf("Ư�� ���� (A, B, C, D, F)�� �Է��Ͻÿ�: ");
    scanf_s(" %c", &target);
    classifyStudents(students, students_num, target);

    int sum = sumScores(students, students_num);
    double avg = average(students, students_num);
    printf("�л��� ������ �� ���� %d�̰�, ��� ���� %.2lf�Դϴ�.\n", sum, avg);

    printRanks(students, students_num);

    // �������� �Ҵ��� �޸� ����
    free(students);

    return 0;
}

void classifyStudents(struct Student* students, int students_num, char targetGrade) {
    printf("�л� ���� �з�:\n");
    char grade = ' ';
    for (int i = 0; i < students_num; i++) {
        if (students[i].score >= 90) {
            grade = 'A';
        }
        else if (students[i].score >= 80) {
            grade = 'B';
        }
        else if (students[i].score >= 70) {
            grade = 'C';
        }
        else if (students[i].score >= 60) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }

        if (targetGrade == grade) {
            printf("%s �л��� %c ������ �޾ҽ��ϴ�.\n", students[i].name, targetGrade);
        }
    }
}

// ���� ���� ���
int sumScores(struct Student* students, int students_num) {
    int sum = 0;
    for (int i = 0; i < students_num; i++) {
        sum += students[i].score;
    }
    return sum;
}


double average(struct Student* students, int students_num) {// ��� ���� ���
    int sum = sumScores(students, students_num);
    return (double)sum / students_num;
}

//���� �񱳷� �л� ���� ���
void printRanks(struct Student* students, int students_num) {
    int* ranks = (int*)malloc(students_num * sizeof(int));

    for (int i = 0; i < students_num; i++) {
        ranks[i] = 1;
        for (int j = 0; j < students_num; j++) {
            if (students[j].score > students[i].score) {
                ranks[i]++;
            }
        }

        printf("%s �л��� ������ %d�Դϴ�\n", students[i].name, ranks[i]);
    }

    free(ranks);
}
