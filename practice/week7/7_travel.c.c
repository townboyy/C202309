#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculatetraeldays();
int main() {
	printf("%d���� ���ø��� ���ʴ�� �Է����ּ���.\n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}
	printf("%d���� ������ �̸��� ���ʴ�� �Է����ּ���.\n", NUMPEOPLE);
	for (int i = 0; i < NUMPEOPLE; i++) {
		scanf_s("%s", names[i], (int)sizeof(names[i]));

	}
	calculatetraveldays();

	return 0;
}
void calculatetraveldays() {
	int traveldays[NUMCITY][NUMPEOPLE];

	for (int i = 0; i < NUMCITY; i++) {
		for (int j = 0; j < NUMPEOPLE; j++) {
			printf("���� %s���� ��� %s �� ���� �� �� �� �Է��ϼ��� : ", cities[i], names[j]);
			scanf_s("%d", &traveldays[i][j]);
		}
	}
	for (int i = 0; i < NUMCITY; i++) {
		int totaldays = 0;
		for (int j = 0; j < NUMPEOPLE; j++) {
			totaldays += traveldays[i][j];
		}
		float averagedays = (float)totaldays / NUMPEOPLE;
		printf("���� %s���� ���� �� �ϼ�  : %d, ��� �� �� : %.2f\n", cities[i], totaldays, averagedays);
	}
}
