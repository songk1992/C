#include <stdio.h>
#include <string.h>

int main( void )
{
	char string[] = "암호는 Korea입니다.";
	char *pstr;

	pstr = strstr( string, "Korea" );	// [예제64]
	if( pstr )
	{
		strnset( pstr, '*', 5 );	// [예제71]
	}
	puts( string );
}