#include <stdio.h>

int main(void) {
	char name[5][50];
	double scores[5];

for (int i = 0; i < 5; i++) {
    printf("학생 %d의 이름을 입력하세요 : ", i + 1);
	scanf_s("%s", name[i],(int)sizeof(name[i]));
	printf("학생 %d의 성적을 입력하세요 : ",i+1);
	scanf_s("%lf", &scores[i]);
	}

printf("입력한 학생 정보 : \n");
for(int i = 0; i < 5; i++) {
	printf("이름 : %s, 성적 : %lf\n", name[i], scores[i]);
}
return 0;
}