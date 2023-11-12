//231630 김도형
#include <stdio.h>


void summation(double* a, double* b, double* result); //합차곱나누기 함수 선언
void subtraction(double* a, double* b, double* result);
void multification(double* a, double* b, double* result);
void division(double* a, double* b, double* result);

int main() {


	double a, b; //입력받을 ab와 결과 result변수 선언
	double result;
	
	printf("두 수를 입력하세요 : "); //두 실수 입력받음

	scanf_s("%lf %lf", &a, &b);

	summation(&a, &b, &result); //함차곱나누기 함수 호출
	printf("%.0lf + %.0lf = %.2lf\n", a, b, result);//포인터는 위치를 저장하는 것임. 위치를 불러오기 위해 & 사용

	subtraction(&a, &b, &result);
	printf("%.0lf - %.0lf = %.2lf\n", a, b, result);

	multification(&a, &b, &result);
	printf("%.0lf *%.0lf = %.2lf\n", a, b, result);

	division(&a, &b, &result);
	printf("%.0lf / %.0lf = %.2lf\n", a, b, result);
	if (b == 0) { //0으로는 나눌 수 없기 때문에 b가 0일 때는 0으로 나눌 수 없다고 출력.
		printf("0으로 나눌 수 없습니다");
	}
	return 0;
}

void summation(double* a, double* b, double* result) { //함수 정의 >> 포인터 사용하여 주소를 가져옴

	*result = *a + *b;
}
void subtraction(double* a, double* b, double* result) {
	*result = *a - *b;
}
void multification(double* a, double* b, double* result) {
	*result = *a * *b;
}
void division(double* a, double* b, double* result) {
	*result = *a / *b;
}
