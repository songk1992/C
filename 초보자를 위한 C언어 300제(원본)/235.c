#include <stdio.h>

int main( void )
{
	FILE *fp;
	char *string = "우리강산\n";

	fp = fopen( "c:\\file.txt", "w+" );		// [예제136]

	if( fp != NULL )
	{
		fwrite( string, 1, strlen(string), fp );
		fwrite( string, 1, strlen(string), fp );
		fwrite( string, 1, strlen(string), fp );
		fclose( fp );				// [예제152]
	}
}