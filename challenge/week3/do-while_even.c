#include <stdio.h>

int main() {
	int i = 0; //int�� �̿��� i��� ������ ����
	do {
		if (i % 2 == 0) { //i�� 2�γ��� �������� 0�̸� ���� �ö󰡼� ����
			i++;
			continue;

		}
		printf("%d hello world \n", i); //�������, %d�� i��� ����
		i++;
	} while (i < 10); //����Ȯ��
	return 0;
}