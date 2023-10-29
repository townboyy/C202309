#include <stdio.h>

int main() {
	int gugudan[9][9];

	for (int i = 1; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			gugudan[i][j] = (i + 1) * (j + 1);
		}
	}
	printf("gugudan 배열에 저장완료!");

	int dan;
	int bae;
	printf("몇 단을 출력할까여? : ");
	scanf_s("%d", &dan);
	printf("몇 배를 할까요? : ");
	scanf_s("몇 배를 할까요? : ", &bae);

	printf("%d를 한 %d단을 출력합니다.\n", bae, dan);
	printf("%d * %d= %d\n", dan, bae, gugudan[dan - 1][bae-1]);
	

}
