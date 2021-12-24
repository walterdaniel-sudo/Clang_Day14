#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>

// ---- 문자열 입력 받는 방법 ----
// scanf()함수를 통해 문자열을 입력받을 때는 배열이름 앞에 &나 배열의 뒤에 인덱스를 작성하지 않는다.
// 문자열의 끝에는 항상 문자열의 끝을 알려주는 NULL문자가 들어간다.
// 문자열을 배열의 저장할 때는 반드시 NULL문자의 크기까지 고려해줘야 한다.
// NULL문자를 표기할 때는 정수 0, 문자 '\0', NULL로 표기할 수 있다.
// 문자열을 담을 배열을 초기화 할 때는 ""(큰 따옴표)안에 문자열을 작성해주면 된다.
//				ex) char str[6] = "Hello";
// 문자열을 담을 배열을 NULL문자로 초기화 할 때는
// char str[10] = ""; 형식으로 진행할 수 있다.

// ---- 문자열 관련 함수 ----
// 문자열 관련 함수를 사용할 때는 string.h 헤더파일을 선언해줘야 한다.
// strlen(문자열): 넘겨준 문자열의 길이를 반환해주는 함수
//				(반환해주는 길이는 NULL문자를 제외한 길이이다.)
// strcmp(문자열1, 문자열2): 넘겨준 두 개의 문자열을 비교하고 같으면 거짓, 다르면 참을 반환해주는 함수
//							(문자열이 다를 경우, 문자열1이 사전편차순으로 빠르면 -1, 느리면 1을 반환)
// strcpy(문자열을 저장할 공간, 복사할 문자열): 문자열을 저장할 공간에 복사할 문자열을 복사해주는 함수
// strcat(문자열을 붙일 공간, 붙일 문자열): 문자열을 붙일 공간 뒤에 넘겨받은 문자열을 덧붙여주는 함수

int main()
{
	/*char str[5];

	printf("입력: ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%c", &str[i]);
	}

	printf("출력: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%c", str[i]);
	}*/

	/*char str[6];

	printf("입력: ");
	scanf("%s ", str);

	str[2] = NULL;

	printf("출력: %s\n", str);*/

	/*char str[6] = "Hello";

	printf("출력: %s\n", str);*/

	/*char str[10] = "";

	printf("입력: ");
	scanf("%s", str);

	str[5] = 'a';

	printf("출력: %s\n", str);*/

	// 내 풀이
	/*char str[5];

	printf("입력: ");
	scanf("%s %s %s %s %s", str[0], str[1], str[2], str[3], str[4]);

	printf("이름: %c\n", str[0]);
	printf("나이: %c\n", str[1]);
	printf("주소: %c", str[2]);
	printf("키: %c", str[3]);
	printf("몸무게: %c", str[4]);*/

	// 선생님 풀이
	/*char name[20], addr[100];
	int age;
	double height, weight;

	printf("이름 입력: ");
	scanf("%s", name);

	printf("나이 입력: ");
	scanf("%d", &age);

	printf("주소 입력: ");
	scanf("%s", addr);

	printf("키 입력: ");
	scanf("%lf", &height);

	printf("몸무게 입력: ");
	scanf("%lf", &weight);

	printf("출력\n");
	printf("--------------------\n");
	printf("이름: %s\n", name);
	printf("나이: %d\n", age);
	printf("주소: %s\n", addr);
	printf("키: %.1fcm\t몸무게: %.2fkg\n", height, weight);*/

	char str[10];

	printf("입력: ");
	scanf("%s", str);

	printf("길이: %d\n", strlen(str));

	/*char str1[10], str2[10];

	printf("문자열1 입력: ");
	scanf("%s", str1);

	printf("문자열2 입력: ");
	scanf("%s", str2);

	if (str1 == str2)
	{
		printf("두 문자열은 같습니다.\n");
	}
	else
	{
		printf("두 문자열은 다릅니다.\n");
	}

	printf("출력: %d\n", strcmp(str1, str2));*/

	/*char str1[10], str2[10];

	printf("입력: ");
	scanf("%s", str1);

	// str2 = str1;
	strcpy(str2, str1);

	printf("출력: %s\n", str2);*/

	return 0;
}