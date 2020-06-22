#include <stdio.h>
#include <direct.h>

int main( void )
{
	char *pathname = "c:\\ccc";

	if( _mkdir(pathname) == -1 )
	{
		perror( "디렉터리 생성 에러" );
	}
	else
	{
		puts( "디렉터리를 성공적으로 생성하였습니다 !" );
	}
}