#include <stdio.h>
#define MAX_TASKS 10 //전체 할 일 개수 제한, 변수 선언
#define CHAR_NUM 100
#include <string.h>

char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // 할 일 목록을 저장하기 위한 2차원 배열
int taskCount = 0; // 할 일의 수를 저장하기 위한 변수


void addTask(char task[]) { //함수 선언 addtask, deltask, printtask
	printf("할 일을 입력하세요 (공백 없이 입력하세요): "); // 할 일을 입력받음
	scanf_s("%s", task, (int)sizeof(task)); 
	strcpy_s(tasks[taskCount], sizeof(tasks[taskCount]), task);
	printf("할 일 ""%s""가 저장되었습니다\n\n", task);
}

void delTask(int delIndex, int taskCount) { //delindex 변수 선언

	printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]); //입력 받은 일 삭제 

	// 특정 인덱스의 할 일 삭제 후 뒤에 있는 할 일 앞으로 옮기기
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
	}
}

void printTask(int taskCount) { //할 일 목록 출력하기
	for (int i = 0; i < taskCount; i++) { //반복문을 통해 taskcount보다 작을 때 까지 1씩 더해가며 task[i]출력
		printf("%d. %s \n", i + 1, tasks[i]);
	}
	printf("\n");
}

int main() { //int main 함수로 함수 호출
	printf("TODO 리스트 시작! \n");

	while (1) {
		int choice = -1; // 사용자 입력 메뉴를 저장하기 위한 변수

		// 사용자에게 메뉴를 출력하고, 메뉴를 입력받기
		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5.할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; //종료 인덱스
		int delIndex = -1; // 할 일 삭제를 위한 인덱스

		int modifyIndex = -1; // 할 일 수정을 위한 인덱스
		char ch;

		// 입력에 따른 기능 수행
		switch (choice) {
		case 1: //1 입력받으면 할 일 추가 후, taskcount 1 늘림
			addTask(tasks[taskCount]);
			taskCount++;
			break;
		case 2:
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작):"); // 2 를 입력받으면 삭제 할 일 번호 입력받고 delindex에 저장
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) { //입력받은 delindex가 taskcount보다 크면 삭제 범위가 벗어났다고 출력.
				printf("삭제 범위가 벗어났습니다.\n");
			}
			else { //그렇지 않으면 삭제 후, taskcount에서 1 뺌
				delTask(delIndex, taskCount);
				taskCount -= 1;
			}
			break;
		case 3: //할 일 목록 출력
			printf("할 일 목록\n");
			printTask(taskCount);
			break;
		case 4: //종료 변수 >> 종료
			terminate = 1;
			break;
		case 5:// 할 일 수정
			printf("수정할 할 일의 번호를 입력해주세요. (1부터 시작): "); // 수정 할 일 번호 입력 받음
			scanf_s("%d", &modifyIndex); //modifyindex 변수를 입력받음
			ch = getchar();
			printf("새로운 할 일을 입력해주세요"); // 새로운 할 일 추가
			scanf_s("%s", tasks[modifyIndex - 1], (int)sizeof(tasks[modifyIndex - 1]));
			printf("새로운 할 일이 추가되었습니다: %d. %s\n", modifyIndex, tasks[modifyIndex - 1]);
			break;
		default:
			printf("잘못된 선택입니다. 다시 선택하세요.\n"); //12345가 아닌 번호를 입력하면 잘못된 선택이라고 출력
		}

		if (terminate == 1) { //종료 변수 출력
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
			break;
		}
		if (taskCount == 10) { //할 일이 10개가 다 차면  종료
			printf("할 일이 %d개로 다 찼습니다.", taskCount);
			break;
		}
	}
	return 0;
}