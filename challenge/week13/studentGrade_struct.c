//231630 김도형
#include <stdio.h>
#include <stdlib.h>

struct Student { //학생 이름과 점수를 담을 구조체를 정의함
    char name[100];
    int score;
};


void classifyStudents(struct Student* students, int students_num, char targetGrade);// 함수 정의
int sumScores(struct Student* students, int students_num);
double average(struct Student* students, int students_num);
void printRanks(struct Student* students, int students_num);

int main() {
    int students_num; //학생수 변수 선언, 학생 수 입력받기
    printf("총 학생 수를 입력하세요: ");
    scanf_s("%d", &students_num);
    //구조체 배열(동적 할당)
    struct Student* students = (struct Student*)malloc(students_num * sizeof(struct Student));

    for (int i = 0; i < students_num; i++) { //이름과 점수를 입력받을 코드
        printf("%d번 학생 이름을 입력하세요: ", i + 1);
        scanf_s(" %s", students[i].name, sizeof(students[i].name));
        printf("%d번 학생 점수를 입력하세요: ", i + 1);
        scanf_s("%d", &students[i].score);
    }

    char target; //점수 분류를 하기 위한 코드
    printf("특정 점수 (A, B, C, D, F)를 입력하시오: ");
    scanf_s(" %c", &target);
    classifyStudents(students, students_num, target);

    int sum = sumScores(students, students_num);
    double avg = average(students, students_num);
    printf("학생들 점수의 총 합은 %d이고, 평균 값은 %.2lf입니다.\n", sum, avg);

    printRanks(students, students_num);

    // 동적으로 할당한 메모리 해제
    free(students);

    return 0;
}

void classifyStudents(struct Student* students, int students_num, char targetGrade) {
    printf("학생 성적 분류:\n");
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
            printf("%s 학생은 %c 점수를 받았습니다.\n", students[i].name, targetGrade);
        }
    }
}

// 점수 총합 계산
int sumScores(struct Student* students, int students_num) {
    int sum = 0;
    for (int i = 0; i < students_num; i++) {
        sum += students[i].score;
    }
    return sum;
}


double average(struct Student* students, int students_num) {// 평균 점수 계산
    int sum = sumScores(students, students_num);
    return (double)sum / students_num;
}

//점수 비교로 학생 순위 출력
void printRanks(struct Student* students, int students_num) {
    int* ranks = (int*)malloc(students_num * sizeof(int));

    for (int i = 0; i < students_num; i++) {
        ranks[i] = 1;
        for (int j = 0; j < students_num; j++) {
            if (students[j].score > students[i].score) {
                ranks[i]++;
            }
        }

        printf("%s 학생의 순위는 %d입니다\n", students[i].name, ranks[i]);
    }

    free(ranks);
}
