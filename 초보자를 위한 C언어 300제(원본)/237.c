#include <stdio.h>

int main( void )
{
	FILE *fp;
	char buff[5];

	fp = fopen( "c:\\file.bin", "w+b" );	// [예제136]

	buff[0] = '@';
	buff[1] = 0;
	buff[2] = 0x01;
	buff[3] = 0x03;
	buff[4] = 0x61;

	if( fp != NULL )
	{
		fwrite( buff, 1, 5, fp );
		fclose( fp );			// [예제152]
	}
}