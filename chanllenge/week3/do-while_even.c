#include <stdio.h>

int main() {
	int i = 1; //int를 이용해 i라는 공간을 만듦
	do { 
		if (i % 2 == 0) { //i를 2로나눈 나머지가 0이면 위로 올라가서 진행
			continue;
		}
		printf("%d hello world %d\n", i); //문장수행, %d는 i라고 선언

	} while (i < 10); //조건확인
}