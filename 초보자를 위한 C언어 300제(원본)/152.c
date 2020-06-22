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
		fputs( "fclose() 함수 시험입니다.", fp );
		fclose( fp );
	}
}
