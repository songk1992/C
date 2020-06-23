#include <stdio.h>

int main( void )
{
	FILE *fpR, *fpW;
	char buff;
	int len;

	fpR = fopen( "c:\\file.bin", "rb" );

	if( fpR == NULL )
	{
		perror( "파일 읽기 개방 에러" );
		return;
	}

	fpW = fopen( "c:\\file_copy.bin", "w+b" );

	if( fpW == NULL )
	{
		perror( "파일 쓰기 개방 에러" );
		fclose( fpR );		// 이미 개방된 fpR을 닫음
		return;
	}

	while( !feof(fpR) )
	{
		len = fread ( &buff, 1, 1, fpR );
		if( ferror(fpR) )
		{
			perror( "파일 읽기 에러" );
			fcloseall();
			return;
		}
		
		if( len > 0 ) // if( !feof(fpR) )
		{
			fwrite( &buff, 1, 1, fpW );
			if( ferror(fpW) )
			{
				perror( "파일 쓰기 에러" );
				fcloseall();
				return;
			}
		}
	}

	fcloseall();

	puts( "파일을 성공적으로 복사하였습니다." );
}