#include <stdio.h>

int main() {
	int i = 1; //int�� �̿��� i��� ������ ����
	do { 
		if (i % 2 == 0) { //i�� 2�γ��� �������� 0�̸� ���� �ö󰡼� ����
			continue;
		}
		printf("%d hello world %d\n", i); //�������, %d�� i��� ����

	} while (i < 10); //����Ȯ��
}