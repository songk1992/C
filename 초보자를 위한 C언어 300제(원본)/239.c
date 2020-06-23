#include <stdio.h>

int main( void )
{
	char *filename = "c:\\file.txt";
	char *movefile = "c:\\temp\\file.txt";

	if( rename( filename, movefile ) != 0 )
	{
		perror( "파일 이동 에러" );
	}
	else
	{
		puts( "파일이 이동되었습니다." );
	}
}