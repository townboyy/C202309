#include <stdio.h> //실행시키기 위한 기본

int main(void) {
	int i = 0; //int를 이용해 i라는 공간을 만듬
	while (i <10) { //
		i++; //i에 1 씩 더해서 밑으로 내림
		if (i % 2 == 0) { //i가 2로 나눈 나머지가 0 이면 위로 올라가서 다시 진행
			continue;
		}
		printf(" %d hello world!\n",i);//%d가 i라는 값을 나타냄
	}
	return 0;
}