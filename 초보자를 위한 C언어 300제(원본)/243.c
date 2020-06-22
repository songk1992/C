#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

int main( void )
{
	FILE *fpR, *fpW;
	char buff[200];
	char *pbuf, *dup;
	int len, pos1, pos2;

	fpR = fopen( "c:\\file.txt", "r" );

	if( fpR == NULL )
	{
		perror( "파일 읽기 개방 에러" );
		return;
	}
	
	fpW = fopen( "c:\\file_change.txt", "w+" );

	if( fpW == NULL )
	{
		perror( "파일 쓰기 개방 에러" );
		_fcloseall();
		return;
	}

	while( !feof(fpR) )
	{
		fgets( buff, 200, fpR );

		pbuf = strstr( buff, "대한민국" );		// [예제64]
		
		if( pbuf )
		{
			len = strlen( buff );	// 읽은 문자열의 길이
			pos1 = pbuf - buff;	// 대한민국이 검색된 위치

			dup = strdup( buff );	// [예제75]
			strnset( &buff[pos1], 0, len - pos1 );
			strcat( buff, "한국" );	// [예제62]

			pos1 = pbuf - buff + strlen( "대한민국" );
			pos2 = pbuf - buff + strlen( "한국" );

			strcpy( &buff[pos2], &dup[pos1] );
			free( dup );
		}

		if( !feof(fpR) ) fputs( buff, fpW );
	}

	_fcloseall();
	puts( "대한민국을 한국으로 모두 교체하였습니다." );
}
