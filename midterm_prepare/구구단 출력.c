#include <stdio.h>

int main() {
	int gugudan[9][9];

	for (int i = 1; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			gugudan[i][j] = (i + 1) * (j + 1);
		}
	}
	printf("gugudan �迭�� ����Ϸ�!");

	int dan;
	int bae;
	printf("�� ���� ����ұ? : ");
	scanf_s("%d", &dan);
	printf("�� �踦 �ұ��? : ");
	scanf_s("�� �踦 �ұ��? : ", &bae);

	printf("%d�� �� %d���� ����մϴ�.\n", bae, dan);
	printf("%d * %d= %d\n", dan, bae, gugudan[dan - 1][bae-1]);
	

}
