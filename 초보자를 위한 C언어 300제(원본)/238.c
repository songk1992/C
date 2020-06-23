#include <stdio.h>

int main( void )
{
	FILE *fp;
	char buff;

	fp = fopen( "c:\\file.bin", "rb" );		// [예제135]

	if( fp != NULL )
	{
		while( !feof(fp) )			// [예제153]
		{
			fread( &buff, 1, 1, fp );
			printf( "%d (%#x) ", buff, buff );
		}
		fclose( fp );				// [예제152]
	}
}