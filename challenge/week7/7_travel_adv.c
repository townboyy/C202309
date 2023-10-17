#include <stdio.h>
#define NUMCITY 3
#define NUMPEOPLE 2

char names[NUMPEOPLE][10];
char cities[NUMCITY][10];

void calculatetraveldays();
int getsum(int numarray[], int length);
double getaverage(int numarray[], int length);
void printfamouscity(double dayarray[], int length);

int main() {
    printf("%d개의 도시명을 차례대로 입력해주세요.\n", NUMCITY);
    for (int i = 0; i < NUMCITY; i++) {
        scanf_s("%9s", cities[i], (int)sizeof(cities[i]));
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
            printf("도시 %s에서 사람 %s 가 보낸 일 수 를 입력하세요: ", cities[i], names[j]);
            scanf_s("%d", &traveldays[i][j]);
        }
    }

    double averagedays[NUMCITY];
    for (int i = 0; i < NUMCITY; i++) {
        int totaldays = getsum(traveldays[i], NUMPEOPLE);
        averagedays[i] = getaverage(traveldays[i], NUMPEOPLE);
        printf("도시 %s에서 보낸 총 일수: %d, 평균 일 수: %.2f\n", cities[i], totaldays, averagedays[i]);
    }

    printfamouscity(averagedays, NUMCITY);
}

int getsum(int numarray[], int length) {
    int totaldays = 0;
    for (int i = 0; i < length; i++) {
        totaldays += numarray[i];
    }
    return totaldays;
}

double getaverage(int numarray[], int length) {
    int totaldays = getsum(numarray, length);
    return (double)totaldays / length;
}

void printfamouscity(double dayarray[], int length) {
    double maxday = 0;
    int maxdayindex = 0;
    for (int i = 0; i < length; i++) {
        if (dayarray[i] > maxday) {
            maxday = dayarray[i];
            maxdayindex = i;
        }
    }
    printf("평균일 기준으로 가장 인기있었던 도시는 %s 입니다. (평균 머문 일: %.2f)\n", cities[maxdayindex], maxday);
}
