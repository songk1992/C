#include <stdio.h>
#include <direct.h>

int main( void )
{
	char *pathname = "c:\\ccc";

	if( _rmdir(pathname) == -1 )
	{
		perror( "디렉터리 삭제 에러" );
	}
	else
	{
		puts( "디렉터리를 성공적으로 삭제하였습니다 !" );
	}
}