#include <stdio.h>

int main( void )
{
	FILE *fp;

	fp = fopen( "c:\\file.txt", "w+" );		// [예제136]

	if( fp != NULL )
	{
		fputs( "대한민국 \n", fp );		// [예제139]
		fputs( "대한민국 \n", fp );
		fputs( "대한민국 \n", fp );
		fputs( "대한민국 \n", fp );
		fputs( "대한민국 \n", fp );
		fclose( fp );				// [예제152]
	}
}