#include <stdio.h>
#include <time.h>

int main( void )
{
	time_t s1, s2;
	double gop = 2.;
	int i;

	time( &s1 );

	for( i=0; i<10000000; i++ )
	{
		gop = gop * 100;
	}

	time( &s2 );

	printf( "경과시간 : %g 초\n", difftime( s2, s1 ) );
}

