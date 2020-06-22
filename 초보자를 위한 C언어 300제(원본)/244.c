#include <stdio.h>
#include <time.h>

int main( void )
{
	FILE *fp;
	char buff[200];
	time_t now;
	struct tm t;

	fp = fopen( "c:\\file.txt", "w+" );

	if( fp == NULL )
	{
		perror( "파일 쓰기 개방 에러" );
		_fcloseall();
		return;
	}

	now = time( NULL );			// [예제168]
	t = *localtime( &now );			// [예제169]
	sprintf( buff, "%d/%d/%d %d:%d:%d", 
		t.tm_year+1900, t.tm_mon+1, t.tm_mday, 
		t.tm_hour, t.tm_min, t.tm_sec );

	fputs( buff, fp );			// [예제139]
	_fcloseall();

	puts( buff );
	puts( "시간을 c:\\file.txt에 저장하였습니다." );
}
