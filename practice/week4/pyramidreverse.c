#include <stdio.h>

int main(void) {
	int floor; //���� ����
	printf("�� ���� �װڽ��ϴ�? (5~100)");//�� �� �������� �Է�
	scanf_s("%d", &floor);

	for (int i = floor; i > 0; i--) { //i�� floor�̰�, i�� 0���� ũ�� �ݺ��ϰ� 1�� ����
		for (int j = 0; j < floor - i; j++) { //���� �ݺ���, j�� floor-i���� ������ �ݺ��ϰ� 1�� ����
			printf("S"); //���� �����ϸ� s���

			
			}
		for (int k = 0; k < i * 2 - 1; k++) { //k�� 0���� i*2-1���� ���� �� ���� �ݺ�, k�� 1 �� �ø�
			printf("*"); //���� �����ϸ� *���

		}

		printf("\n");//�ٹٲ�

	}
	return 0;
}