#include <stdio.h>
#include <time.h>

int main( void )
{
	time_t now;
	struct tm t;

	now = time( NULL );
	t = *localtime( &now );

	printf( "올해의 경과일수 : %d \n", t.tm_yday );
}
