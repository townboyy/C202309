//231630 �赵��
#include <stdio.h>


void summation(double* a, double* b, double* result); //������������ �Լ� ����
void subtraction(double* a, double* b, double* result);
void multification(double* a, double* b, double* result);
void division(double* a, double* b, double* result);

int main() {


	double a, b; //�Է¹��� ab�� ��� result���� ����
	double result;
	
	printf("�� ���� �Է��ϼ��� : "); //�� �Ǽ� �Է¹���

	scanf_s("%lf %lf", &a, &b);

	summation(&a, &b, &result); //������������ �Լ� ȣ��
	printf("%.0lf + %.0lf = %.2lf\n", a, b, result);//�����ʹ� ��ġ�� �����ϴ� ����. ��ġ�� �ҷ����� ���� & ���

	subtraction(&a, &b, &result);
	printf("%.0lf - %.0lf = %.2lf\n", a, b, result);

	multification(&a, &b, &result);
	printf("%.0lf *%.0lf = %.2lf\n", a, b, result);

	division(&a, &b, &result);
	printf("%.0lf / %.0lf = %.2lf\n", a, b, result);
	if (b == 0) { //0���δ� ���� �� ���� ������ b�� 0�� ���� 0���� ���� �� ���ٰ� ���.
		printf("0���� ���� �� �����ϴ�");
	}
	return 0;
}

void summation(double* a, double* b, double* result) { //�Լ� ���� >> ������ ����Ͽ� �ּҸ� ������

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
