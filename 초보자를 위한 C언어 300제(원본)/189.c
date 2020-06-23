#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main( void )
{
	int i;

	srand( (unsigned)time(NULL) );
	
	for( i=0; i<5; i++ )
	{
		printf( "난수 %d : %d \n", i, rand() ); // rand() % 150 + 1
	}
}
