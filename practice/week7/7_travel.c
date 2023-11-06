#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculatetraeldays();
int main() {
	printf("%d개의 도시명을 차례대로 입력해주세요.\n", NUMCITY);
	for (int i = 0; i < NUMCITY; i++) {
		scanf_s("%s", cities[i], (int)sizeof(cities[i]));
	}
	printf("%d개의 여행자 이름을 차례대로 입력해주세요.\n", NUMPEOPLE);
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
			printf("도시 %s에서 사람 %s 가 보낸 일 수 를 입력하세요 : ", cities[i], names[j]);
			scanf_s("%d", &traveldays[i][j]);
		}
	}
	for (int i = 0; i < NUMCITY; i++) {
		int totaldays = 0;
		for (int j = 0; j < NUMPEOPLE; j++) {
			totaldays += traveldays[i][j];
		}
		float averagedays = (float)totaldays / NUMPEOPLE;
		printf("도시 %s에서 보낸 총 일수  : %d, 평균 일 수 : %.2f\n", cities[i], totaldays, averagedays);
	}
}
