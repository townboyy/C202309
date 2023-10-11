#include <stdio.h>
#define STUDENTS 5 //학생 5명이라고 정의

void classifyStudents(int scores[], char targetGrade) { //
	printf("학생 성적 분류 :\n");
	char grade = ' ';
	for (int i = 0; i < STUDENTS; i++) { //i는 0이라고 선언, 학생수보다 작을 때 까지 1씩 더하며 반복

		if (scores[i] >= 90) { //90점이 넘으면 a를 받음
			grade = 'A';
		}
		else if (scores[i] >= 80) {//80점이 넘으면 b
			grade = 'B';
		}
		else if (scores[i] >= 70) { //70점이 넘으면 c
			grade = 'C';

		}
		else if (scores[i] >= 60) { //60점이 넘으면 d
			grade = 'D';
		}
		else {
			grade = 'F'; //50점이 넘으면 f
		}
		if (targetGrade == grade) { 
			printf("%d 학생은 %c 점수를 받았습니다.", i + 1, targetGrade);
		}
		}
	}
	int main() {
		int scores[STUDENTS]; //학생들의 scores의 배열을 변수로 선언
		for (int i = 0; i < STUDENTS; i++) {//i선언, 학생보다 적으면 1씩 늘리며 반복
			printf("학생의 %d의 성적을 입력하세요 : ", i + 1); //인덱스는 0부터 시작, i+1

			scanf_s("%d", &scores[i]);
		}
		char ch = getchar();//문자 변수 getchar()
		char target;
		printf("특정 점수 (A, B, C, D, F)를 입력하시오");
		scanf_s("%c",&target, 1);
		classifyStudents(scores,target);
	
		return 0;
	}
