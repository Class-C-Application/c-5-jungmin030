#include <stdio.h>
#define RROWSIZE 2
#define COLSIZE 3
// ROWSIZE라는 이름으로 정수 2를, COLSIZE라는 이름으로 정수 3을 나타내는 매크로 상수를 정의하세요

int main(void)
{

	int td[][3] = {{1}, {1, 2, 3}};
	printf("반목문 for를 이용하여 출력\n");

	for(int i=0; i<RROWSIZE; i++){
		for(int j=0; j<COLSIZE; j++){
			printf("%d ", td[i][j]);
		}
		printf("\n");
	}

	// ROWSIZE x COLSIZE를 순회하는 중첩 for문을 작성하고, 각 원소를 printf("%d ", td[i][j]); 형식으로 출력하세요
	// 각 행 출력 후 printf("\n"); 으로 줄바꿈하세요

	return 0;
}
