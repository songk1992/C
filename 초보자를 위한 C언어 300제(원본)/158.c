#include <stdio.h>

int main( void )
{
	char *oldname = "c:\\file.txt";
	char *newname = "c:\\file_1.txt";

	if( rename( oldname, newname ) != 0 )
	{
		perror( "파일명 변경 에러" );
	}
	else
	{
		puts( "파일명을 성공적으로 변경하였습니다 !" );
	}
}