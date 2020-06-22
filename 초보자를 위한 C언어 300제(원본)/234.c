#include <stdio.h>

int main( void )
{
	FILE *fp;
	char buff[100];

	fp = fopen( "c:\\file.txt", "r" );		// [예제136]

	if( fp != NULL )
	{
		while( !feof(fp) )			// [예제153]
		{
			fgets( buff, 100, fp );		// [예제140]
			if( !feof(fp) ) printf( buff );	
		}
		fclose( fp );				// [예제152]
	}
}