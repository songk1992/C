#include <stdio.h>
#include <string.h>

int main( void )
{
	FILE *fp;
	char buff[200];
	int line = 1;

	fp = fopen( "c:\\file.txt", "r" );

	if( fp == NULL )
	{
		perror( "파일 읽기 개방 에러" );
		return;
	}
	
	while( !feof(fp) )
	{
		fgets( buff, 200, fp );

		if( strstr( buff, "대한민국" ) )		// [예제64]
		{
			printf( "Line(%2d) : %s", line, buff );
		}
		line++;
	}

	_fcloseall();
}
