<서식 지정자 >

int >%d > 값이 정수 일 때
float > %nf > 값이 실수일때(n은 출력할 소수점 이하 자릿수)
double > %nlf > 위와 동일
char > %c > 값이 문자일때
     > %s > 값이 문자열일때


변수 선언 > 자료형 변수
변수 초기화 : 변수를 선언함과 동시에 초기값을 넣는 과정 > 자료형 변수명 = 값;

상수 선언 : 변수명은 전체 대문자
#define 변수명 값 
#const 자료형 변수명 = 값;


scanf_s : 사용자로부터 값을 입력받기 위한 함수
(int)sizeof() : 사이즈 반환 함수 > 문자열 입력받을 때는 문자열의 크기를 넘겨줘야함



반복문 : for, while, do-while / 이중 반복문 > (변수 체크)
<for>
for(선언; 조건; 증감;){ 수행할 문장}
for(int i = 1; i<10;i++){printf("hello world")}

<while>
선언;
while(조건){수행할 문장, 증감}
int i = 1;
while (i < 10) { printf("hello wolrd", i++); }

<do - while>
선언;
do { 수행 할 문장 } while (조건);
int i = 1;
do { printf("hello world", i++) } while (i < 10);

<break, continue> (조건문과 함께 사용)
break : 반복문을 즉각 종료하기 위한 문장
continue : 다음 반복을 진행하기 위한 문장

조건문 : if-else, switch/ && = and, || : or/

<if-else>
if조건 : 가장 첫 번째로 확인할 조건
else if 조건 : 상위 조건을 만족하지 않을 경우 확인할 조건식
else : 조건을 모두 만족하지 않을때 수행되는 블록

if (조건식) {
    문장1
}
else if {
    문장2
}
else {
    문장3
}


<switch> : 케이스에 따라 동작을 수행, break가 없으면 참인 케이스 이후에 모든 케이스 실행
switch (표현식) {
    case1 값1;
    문장1;
    break;
    case2 값2;
    break;
    ....
}










