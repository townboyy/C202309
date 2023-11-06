#include <stdio.h>
#define STUDENTS 5 // 학생 5명이라고 정의

void classifyStudents(int scores[], char targetGrade) {
    printf("학생 성적 분류:\n");
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
            printf("%d 학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
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
        printf("학생의 %d의 성적을 입력하세요: ", i + 1);
        scanf_s("%d", &scores[i]);
    }

    char target;
    printf("특정 점수 (A, B, C, D, F)를 입력하시오: ");
    scanf_s(" %c", &target);
    classifyStudents(scores, target);

    int sum = sumScores(scores);
    double avg = average(scores);
    printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %.2lf 입니다.\n", sum, avg);

    printRanks(scores);

    return 0;
}