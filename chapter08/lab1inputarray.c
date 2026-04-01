#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//초기화로 모든 원소에 0을 저장
	// 크기가 20인 int형 배열 input을 선언하고 모든 원소를 0으로 초기화하세요
	int input[20]={0};

	printf("배열에 저장할 정수를 여러 개 입력하시오. ");
	printf("0을 입력하면 입력을 종료합니다.\n");

	int i =0;
	do{
		scanf("%d", &input[i]);
	}while(input[i]++ != 0);

	i = 0;
	
	while(input[i] != 0){
		printf("%d ", input[i++]);
	}

	puts("");

	return 0;
}
