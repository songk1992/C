#include <stdio.h>

int main( void )
{
	FILE *fp;
	fpos_t pos;

	fp = fopen( "c:\\file.txt", "w+" );

	if( fp == NULL )
	{
		puts( "파일을 생성할 수 없습니다." );
	}
	else
	{
		fgetpos( fp, &pos );
		fputs( "abcde", fp );
		fsetpos( fp, &pos );
		printf( "파일 포인터의 위치 : %d \n", ftell(fp) );
		fclose( fp );
	}
}