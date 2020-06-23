#include <stdio.h>
#include <string.h>

int main( void )
{
	char string[] = "abcdefghijklmnopqrstuvwxyz";
	unsigned i, len;
	
	puts( string );

	len = strlen( string );		// 문자열의 길이

	for( i=0; i<len; i++ )
	{
		string[i] = string[i] & 0xDF;
	}

	puts( string );
}