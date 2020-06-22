#include <stdio.h>

int main( void )
{
	FILE *fp;

	fp = fopen( "c:\\file.txt", "w+" );

	if( fp == NULL )
	{
		puts( "파일을 생성할 수 없습니다." );
	}
	else
	{
		fputc( 'A', fp );
		puts( "문자 'A'를 파일에 저장하였습니다." );
		fclose( fp );
	}
}