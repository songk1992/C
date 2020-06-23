#include <stdio.h>
#include <io.h>

int main( void )
{
	char *path = "c:\\file.txt";

	if( _access( path, 0 ) == 0 )
	{
		puts( "해당 경로에 파일이 존재합니다." );
	}
	else
	{
		puts( "해당 경로에 파일이 존재하지 않습니다." );
	}
}
