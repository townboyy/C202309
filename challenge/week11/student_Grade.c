//231630 김도형
#include <stdio.h>
#define STUDENTS 5 // 학생 5명이라고 정의

void classifyStudents(int* scores, char targetGrade) { 
    printf("학생 성적 분류:\n");
    char grade = ' ';
    for (int i = 0; i < STUDENTS; i++) {
        if (*(scores + i) >= 90) { //scores 배열에 +i (0.1. 2. 3. 4)를 더한 값 의 주소에 있는 값을 가져옴
            grade = 'A';
        }
        else if ((*scores + i) >= 80) { //*(scores+i) 는 scores 배열의 i번째의 값
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
            printf("%d 학생은 %c 점수를 받았습니다.\n", i + 1, targetGrade);
        } //grade와 targetgrade가 일치하면 %d 학생의 점수 출력
    }
   
    }


int sumScores(int* scores) { //총합 계산 함수
    int sum = 0;
    for (int i = 0; i < STUDENTS; i++) {

        sum += *(scores + i);
    }
    return sum;
}

double average(int* scores) { //평균점수 계산 함수
    int sum = sumScores(scores);
    double average = (double)sum / STUDENTS;
    return average;
}

void printRanks(int* scores) { //순위 계산 함수
    int ranks[STUDENTS];
    for (int i = 0; i < STUDENTS; i++) {
        ranks[i] = 1;
        for (int j = 0; j < STUDENTS; j++) {
            if (scores[j] > scores[i]) {
                ranks[i]++;
            }

        }

        printf(" %d 학생의 순위는 %d 입니다 \n", i + 1, ranks[i]);
    }
}

int main() { //함수 호출, 
    int scores[STUDENTS];
    for (int i = 0; i < STUDENTS; i++) { //성적을 입력받음
        printf("학생의 %d의 성적을 입력하세요: ", i + 1);
        scanf_s("%d", &scores[i]);
    }

    char target; //특정 점수 입력받음
    printf("특정 점수 (A, B, C, D, F)를 입력하시오: ");
    scanf_s(" %c", &target);
    classifyStudents(scores, target);
   

    int sum = sumScores(scores);
    double avg = average(scores);
    printf("학생들 점수의 총 합은 %d 이고, 평균 값은 %.2lf 입니다.\n", sum, avg);
    //총 합과 평균 출력
    printRanks(scores);

    return 0;
}