#include <stdio.h> 

#define HUNDRED 100

const char j = 10;

int main(void) 
{ 
	HUNDRED = 200;	// 에러 발생
	j = 200;		// 에러 발생

	printf( "문자형 상수 HUNDRED의 값은 %d \n", HUNDRED );
	printf( "문자형 상수 j의 값은 %d \n", j );
	getch();
} 
