#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define MEGA_BYTE 1048576

int main( void )
{
	char *pbuf;

	pbuf = malloc( 100 * MEGA_BYTE );			// [예제96]

	if( pbuf )
	{
		memset( pbuf, 0, 100 * MEGA_BYTE  );		// [예제103]
		
		strcpy( &pbuf[0], "서울시 양천구 목동" );	// [예제-57]
		puts( &pbuf[0] );
		
		strcpy( &pbuf[104857500], "부산시 강서구 미음동" );
		puts( &pbuf[104857500] );
		
		free( pbuf );					// [예제98]
	}
}