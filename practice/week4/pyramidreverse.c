#include <stdio.h>

int main(void) {
	int floor; //변수 설정
	printf("몇 층을 쌓겠습니다? (5~100)");//몇 층 쌓을건지 입력
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--) { //i를 floor이고, i가 0보다 크면 반복하고 1씩 내림
		for (int j = 0; j < floor - i; j++) { //이중 반복문, j가 floor-i보다 작으면 반복하고 1씩 더함
			printf("S"); //조건 만족하면 s출력

			
			}
		for (int k = 0; k < i * 2 - 1; k++) { //k는 0부터 i*2-1보다 작을 때 까지 반복, k를 1 씩 늘림
			printf("*"); //조건 만족하면 *출력

		}

		printf("\n");//줄바꿈

	}
	return 0;
}