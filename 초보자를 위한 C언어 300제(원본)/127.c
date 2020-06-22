#include <stdio.h>

typedef union tagVariable
{
	int i;
	double d;
} VA;

void print( VA *pva );

int main( void ) 
{
	VA va;

	print( &va );
}

void print( VA *pva )
{
	pva->i = 5;

	printf( "VA 공용체의 값 : %d \n", pva->i );

	pva->d = 3.14;

	printf( "VA 공용체의 값 : %f \n", pva->d );
	printf( "VA 공용체의 값 : %d \n", pva->i );
}
