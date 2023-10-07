#include <stdio.h>

int hapf(int value);

int main() {
	printf("1부터 10까지의 합은 %d\n", hapf(10));
	printf("1부터 100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));

}
int hapf(int value) { //i선언
	int i;
	int hap = 0; // hap 선언

	i = 1;// 1부터
	while (i <= value) { //i가 value보다 작거나 같으면 반복

		hap = hap + i;//hap +i로 출력
		i++;//i 1 씩 증가
	}
	return hap; // hap 출력
	return 0;
}