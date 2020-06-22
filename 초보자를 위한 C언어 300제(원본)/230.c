#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main( void )
{
	char *pbuf;

	pbuf = malloc( 100 * 10000 );					// [예제96]

	if( pbuf )
	{
		memset( pbuf, 0,  100 * 10000 );			// [예제103]
		strcpy( &pbuf[0], "서울시 양천구 목동" );		// [예제57]
		puts( &pbuf[0] );
		free( pbuf );						// [예제98]
	}
}