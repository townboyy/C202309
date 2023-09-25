#include <stdio.h>

int main(void) {

	int floor; //floor라는 변수 설정
	printf("몇 층을 쌓겠습니다? (5~100)"); //몇 층을 쌓을건지 입력받음
	scanf_s("%d", &floor); //층은 정수이기 때문에 서식연산자 %d사용, scanf_s문의 변수에 &사용

	for (int i = 0; i < floor; i++) { //for반복문, i선언, i는 floor보다 작다는 조건, i를 1씩 추가함
		for (int j = 0; j < floor - 1 - i; j++) { //j변수 선언, j는 floor에서 -1-i 보다 작다는 조건, j를 1 씩 늘림
			printf(" "); //모양을 위해 공백처리, 만족하면 공백 출력
		
		}
		for (int k = 0; k < i * 2 + 1; k++) { //k라는 변수 사용, k는 i*2+1보다 작다는 조건, k를 1씩 늘려감
			printf("*"); //만족하면 *출력
		}
		printf("\n"); //줄바꿈(층)을 위해 \n사용
	}
	return 0; //출력
}