#include <stdio.h>

int main() {
	int choice;  // choice��� ���� ����
	printf("1. ���� ����\n");
	printf("2. ���� ���� �ݱ�\n");
	printf("3. ����\n");
	scanf_s("%d", &choice); //choice�� ���������� �Է¹���

	if (choice == 1) { //choice�� 1 �̸� ������~~ ���
		printf("������ �����մϴ�.");
	}
	else if (choice == 2) { // choice�� 2 �̸� �������~~ �� ���
		printf("���� ���� �ݽ��ϴ�.");

	}
	else if (choice == 3) { //choice�� 3 �̸� �����մϴٸ� ���.
		printf("�����մϴ�.");

	}
	else {// choice�� 123 �� �ƴϸ� �߸��Է��ϼ̽��ϴٸ� ���.
		printf("�߸� �Է��ϼ̽��ϴ�.");
	}
}

