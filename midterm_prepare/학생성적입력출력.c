#include <stdio.h>
#define STUDENTS 5 //정의, 학생수 5명


void classifystudents(int scores[], char targetgrade) {
	printf("학생 성적 분류 : \n");
	char grade = " "; //변수 초기화

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
			printf("%d 학생은 %c 점수를 받았습니다", i + 1, targetgrade);
		}
	}
}

int main() {
	int scores[STUDENTS];
	for (int i = 0; i < 5; i++) {
		printf("학생 %d의 성적을 입력하세요 : ", i + 1);
		scanf_s("%d", &scores[i]);
	}
	char ch = getchar();
	char target; //성적 산출 범위
	printf("특정 점수를 입력하시오 : ");
	scanf_s("%c", &target,1);

	classifystudents(scores, target); //함수 호출, 메인함수 >호출자, scores, target 매개변수

	return 0;
}