#include <stdio.h>

int main(void) {
	int num = 0; // num �̶�� ���� ����
	printf("���ڸ� �Է��Ͻÿ�: "); 
	scanf_s(" %d", &num); //num�� ������ �Է¹���
	if (num == 0) { // num�� 0�̸� 0 ���
		printf("zero");
	
	}
	else if (num == 1) { // num�� 1 �̸� 1 ���
		printf("one");

	}
	else if (num == 2) { // num�� 2 �̸� 2 ���
		printf("two");

	}
	else { // num�� 0 1 2 �� �ƴϸ� ��� �� ��
		printf("not 0~2");
	}
}
