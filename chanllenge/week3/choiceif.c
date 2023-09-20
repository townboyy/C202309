#include <stdio.h>

int main() {
	int choice;  // choice라는 변수 설정
	printf("1. 파일 저장\n");
	printf("2. 저장 없이 닫기\n");
	printf("3. 종료\n");
	scanf_s("%d", &choice); //choice를 정수변수로 입력받음

	if (choice == 1) { //choice가 1 이면 파일을~~ 출력
		printf("파일을 저장합니다.");
	}
	else if (choice == 2) { // choice가 2 이면 저장없이~~ 를 출력
		printf("저장 없이 닫습니다.");

	}
	else if (choice == 3) { //choice가 3 이면 종료합니다를 출력.
		printf("종료합니다.");

	}
	else {// choice가 123 이 아니면 잘못입력하셨습니다를 출력.
		printf("잘못 입력하셨습니다.");
	}
}

