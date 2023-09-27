#include <stdio.h>

int main(void) {
	int num = 0; // num 이라는 변수 설정
	printf("숫자를 입력하시오: "); 
	scanf_s(" %d", &num); //num을 정수로 입력받음
	if (num == 0) { // num가 0이면 0 출력
		printf("zero");
	
	}
	else if (num == 1) { // num이 1 이면 1 출력
		printf("one");

	}
	else if (num == 2) { // num이 2 이면 2 출력
		printf("two");

	}
	else { // num이 0 1 2 가 아니면 출력 안 함
		printf("not 0~2");
	}
}
