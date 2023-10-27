#include <stdio.h>
#define MAX_TASKS 10 //��ü �� �� ���� ����, ���� ����
#define CHAR_NUM 100
#include <string.h>

char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // �� �� ����� �����ϱ� ���� 2���� �迭
int taskCount = 0; // �� ���� ���� �����ϱ� ���� ����


void addTask(char task[]) { //�Լ� ���� addtask, deltask, printtask
	printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): "); // �� ���� �Է¹���
	scanf_s("%s", task, (int)sizeof(task)); 
	strcpy_s(tasks[taskCount], sizeof(tasks[taskCount]), task);
	printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", task);
}

void delTask(int delIndex, int taskCount) { //delindex ���� ����

	printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]); //�Է� ���� �� ���� 

	// Ư�� �ε����� �� �� ���� �� �ڿ� �ִ� �� �� ������ �ű��
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
	}
}

void printTask(int taskCount) { //�� �� ��� ����ϱ�
	for (int i = 0; i < taskCount; i++) { //�ݺ����� ���� taskcount���� ���� �� ���� 1�� ���ذ��� task[i]���
		printf("%d. %s \n", i + 1, tasks[i]);
	}
	printf("\n");
}

int main() { //int main �Լ��� �Լ� ȣ��
	printf("TODO ����Ʈ ����! \n");

	while (1) {
		int choice = -1; // ����� �Է� �޴��� �����ϱ� ���� ����

		// ����ڿ��� �޴��� ����ϰ�, �޴��� �Է¹ޱ�
		printf("------------------\n");
		printf("�޴��� �Է����ּ���.\n");
		printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5.�� �� ����\n");
		printf("���� �� �� �� = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; //���� �ε���
		int delIndex = -1; // �� �� ������ ���� �ε���

		int modifyIndex = -1; // �� �� ������ ���� �ε���
		char ch;

		// �Է¿� ���� ��� ����
		switch (choice) {
		case 1: //1 �Է¹����� �� �� �߰� ��, taskcount 1 �ø�
			addTask(tasks[taskCount]);
			taskCount++;
			break;
		case 2:
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):"); // 2 �� �Է¹����� ���� �� �� ��ȣ �Է¹ް� delindex�� ����
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) { //�Է¹��� delindex�� taskcount���� ũ�� ���� ������ ����ٰ� ���.
				printf("���� ������ ������ϴ�.\n");
			}
			else { //�׷��� ������ ���� ��, taskcount���� 1 ��
				delTask(delIndex, taskCount);
				taskCount -= 1;
			}
			break;
		case 3: //�� �� ��� ���
			printf("�� �� ���\n");
			printTask(taskCount);
			break;
		case 4: //���� ���� >> ����
			terminate = 1;
			break;
		case 5:// �� �� ����
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����): "); // ���� �� �� ��ȣ �Է� ����
			scanf_s("%d", &modifyIndex); //modifyindex ������ �Է¹���
			ch = getchar();
			printf("���ο� �� ���� �Է����ּ���"); // ���ο� �� �� �߰�
			scanf_s("%s", tasks[modifyIndex - 1], (int)sizeof(tasks[modifyIndex - 1]));
			printf("���ο� �� ���� �߰��Ǿ����ϴ�: %d. %s\n", modifyIndex, tasks[modifyIndex - 1]);
			break;
		default:
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n"); //12345�� �ƴ� ��ȣ�� �Է��ϸ� �߸��� �����̶�� ���
		}

		if (terminate == 1) { //���� ���� ���
			printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
			break;
		}
		if (taskCount == 10) { //�� ���� 10���� �� ����  ����
			printf("�� ���� %d���� �� á���ϴ�.", taskCount);
			break;
		}
	}
	return 0;
}