#include <stdio.h>

int main( void )
{
	FILE *fp;
	char buff[100]={0,};
	int len;

	fp = fopen( "c:\\file.txt", "r" );			// [예제136]

	if( fp != NULL )
	{
		while( !feof(fp) )				// [예제153]
		{
			len = fread( buff, 1, 9, fp );
			if( ferror(fp) || len < 9 ) break;	// [예제154]
			printf( "read : %d, %s", len, buff );
		}
		fclose( fp );					// [예제152]
	}
}