#include <stdio.h>

int multif(int value);

int main() { //���� �Լ� ����
	printf("1���� 2������ ���� %d\n", multif(2));
	printf("1���� 3������ ���� %d\n", multif(3));
	printf("1���� 5������ ���� %d\n", multif(5));
	//���� ����� ��� �� ����
}
int multif(int value) { // i ���� ����
	int i;
	long multif = 1; //���� multif����

	i = 1; //i 1���� ����
	while (i <= value) { //i�� value���� ������ �ݺ�

		multif = multif * i;// mulfif�� multif*i�� ���
		i++; //i1�� ����
	}
	return multif; //multif ��ȯ
	return 0;
}