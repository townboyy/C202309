#include <stdio.h> //�����Ű�� ���� �⺻

int main(void) {
	int i = 0; //int�� �̿��� i��� ������ ����
	while (i <10) { //
		i++; //i�� 1 �� ���ؼ� ������ ����
		if (i % 2 == 0) { //i�� 2�� ���� �������� 0 �̸� ���� �ö󰡼� �ٽ� ����
			continue;
		}
		printf(" %d hello world!\n",i);//%d�� i��� ���� ��Ÿ��
	}
	return 0;
}