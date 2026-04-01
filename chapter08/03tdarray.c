#include <stdio.h>

#define RROWSIZE 2
#define COLSIZE 3

// ROWSIZE라는 이름으로 정수 2를, COLSIZE라는 이름으로 정수 3을 나타내는 매크로 상수를 정의하세요

int main(void)
{
	int td[RROWSIZE][COLSIZE];

	td[0][0] =1;
	td[0][1] =2;
	td[0][2] =3;
	td[1][0] =4;
	td[1][1] =5;
	td[1][2] =6;

	printf("반목문 for를 이용하여 출력\n");

	for(int i=0; i<RROWSIZE; i++){
		for(int j=0; j<COLSIZE; j++){
			printf("td[%d][%d] == %d ", i, j, td[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}
