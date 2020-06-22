#include <stdio.h>

void calc( int (*pjumsu)[100][3], int *ptotal );
//void calc( int pjumsu[10][100][3], int *ptotal );

int main( void ) 
{
	int jumsu[10][100][3];
	int total[3]={0,};

	calc( jumsu, total );

 	printf( "모든 반의 국어 점수의 총점 : %d \n", total[0] );
 	printf( "모든 반의 영어 점수의 총점 : %d \n", total[1] );
 	printf( "모든 반의 수학 점수의 총점 : %d \n", total[2] );
}

void calc( int (*pjumsu)[100][3], int *ptotal )
//void calc( int pjumsu[10][100][3], int *ptotal )
{
	int i, j;

	for( i=0; i<10; i++ )
	{
		for( j=0; j<100; j++ )
		{
			pjumsu[i][j][0] = 92;		// 국어 점수
			pjumsu[i][j][1] = 90;		// 영어 점수
			pjumsu[i][j][2] = 95;		// 수학 점수
		}
	}

	for( i=0; i<10; i++ )
	{
		for( j=0; j<100; j++ )
		{
			ptotal[0] += pjumsu[i][j][0];	// 국어 총점
			ptotal[1] += pjumsu[i][j][1];	// 영어 총점
			ptotal[2] += pjumsu[i][j][2];	// 수학 총점
		}
	}
}
