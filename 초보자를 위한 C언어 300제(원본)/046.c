#include <stdio.h> 

#define true	1
#define false	0

typedef int  bool;

// 구조체 정의가 포함되어 있습니다.
typedef struct
{
	int kor;
	int eng;
	int math;
} SungJuk;

typedef union
{
	char ch;
	int  point;
} Variant;

int main(void) 
{
	bool bCondition;
	SungJuk SJ;
	Variant V; 

	bCondition = true;

	if( bCondition == true )
	{
		printf( "조건식은 true입니다." );
	}

	SJ.kor = 50;
	V.ch = 5;
} 
