#include <stdio.h>

int main(void) {
	char name[128];
	printf("이름? : ");
	scanf_s("%s", &name, (int)sizeof(name));

	int age;
	printf("나이? : ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게? : ");
	scanf_s("%f", &weight);

	double height;
	printf("키? : ");
	scanf_s("%lf", &height);

	char what[512];
	printf("무슨 범죄? : ");
	scanf_s("%s", &what, (int)sizeof(what));

	printf("ㅡㅡㅡ범죄자 정보ㅡㅡㅡ\n");
	printf("이름 :%s\n", name);
	return 0;
}