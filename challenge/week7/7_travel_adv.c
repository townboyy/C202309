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
    printf("%d���� ���ø��� ���ʴ�� �Է����ּ���.\n", NUMCITY);
    for (int i = 0; i < NUMCITY; i++) {
        scanf_s("%9s", cities[i], (int)sizeof(cities[i]));
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
            printf("���� %s���� ��� %s �� ���� �� �� �� �Է��ϼ���: ", cities[i], names[j]);
            scanf_s("%d", &traveldays[i][j]);
        }
    }

    double averagedays[NUMCITY];
    for (int i = 0; i < NUMCITY; i++) {
        int totaldays = getsum(traveldays[i], NUMPEOPLE);
        averagedays[i] = getaverage(traveldays[i], NUMPEOPLE);
        printf("���� %s���� ���� �� �ϼ�: %d, ��� �� ��: %.2f\n", cities[i], totaldays, averagedays[i]);
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
    printf("����� �������� ���� �α��־��� ���ô� %s �Դϴ�. (��� �ӹ� ��: %.2f)\n", cities[maxdayindex], maxday);
}
