#include <stdio.h>

void calc( int (*pjumsu)[3], int *ptotal );
//void calc( int pjumsu[100][3], int *ptotal );

int main( void ) 
{
	int jumsu[100][3];
	int total[3]={0,};
	int (*pjumsu)[3];

	pjumsu = jumsu;

	calc( pjumsu, total );

 	printf( "국어 점수의 총점 : %d \n", total[0] );
 	printf( "영어 점수의 총점 : %d \n", total[1] );
 	printf( "수학 점수의 총점 : %d \n", total[2] );
}

void calc( int (*pjumsu)[3], int *ptotal )
//void calc( int pjumsu[100][3], int *ptotal )
{
	int i;

	for( i=0; i<100; i++ )
	{
		pjumsu[i][0] = 92;		// 국어 점수
		pjumsu[i][1] = 90;		// 영어 점수
		pjumsu[i][2] = 95;		// 수학 점수
	}

	for( i=0; i<100; i++ )
	{
		ptotal[0] += pjumsu[i][0];	// 국어 총점
		ptotal[1] += pjumsu[i][1];	// 영어 총점
		ptotal[2] += pjumsu[i][2];	// 수학 총점
	}
}
