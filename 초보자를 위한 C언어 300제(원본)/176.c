#include <stdio.h>
#include <time.h>

int main( void )
{
	time_t now;
	struct tm t;
	char buff[100];

	now = time( NULL );
	t = *localtime( &now );
	strftime( buff, sizeof(buff), "%Y-%m-%d %I:%M:%S %p", &t );

	puts( buff );
}
