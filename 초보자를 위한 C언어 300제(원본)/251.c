#include <stdio.h>
#include <time.h>

int main( void )
{
	time_t now, n1, n2;
	struct tm t1, t2;
	
	time( &now );
	t1 = *localtime( &now );	// [예제169]
	t2 = *gmtime( &now );		// [예제171]

	n1 = mktime( &t1 );
	n2 = mktime( &t2 );

	printf( "세계 표준시와 대한민국의 시간차이 : %g 시간 \n", 
		difftime( n1, n2 )/3600. );
}
