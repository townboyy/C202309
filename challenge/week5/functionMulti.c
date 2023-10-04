#include <stdio.h>

int multif(int value);

void main() { //메인 함수 설정
	printf("1부터 2까지의 곱은 %d\n", multif(2));
	printf("1부터 3까지의 곱은 %d\n", multif(3));
	printf("1부터 5까지의 곱은 %d\n", multif(5));
	//곱의 결과를 출력 할 거임
}
int multif(int value) { // i 변수 설정
	int i;
	long multif  = 1; //변수 multif선언

	i = 1; //i 1부터 시작
	while (i <= value) { //i가 value보다 작으면 반복

		multif =  multif  * i;// mulfif는 multif*i로 출력
		i++; //i1씩 증가
	}
	return multif ; //multif 반환
}