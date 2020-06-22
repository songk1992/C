#include <stdio.h>
#include <string.h>

int main( void ) 
{
	char *string     = "This is a string $$$";
	char *strCharSet = "~!@#$%^&*()_+-={}[]:;'<>./?";
	unsigned int pos;

	pos = strcspn( string, strCharSet );

	puts( "0         1         2         3" );
	puts( "0123456789012345678901234567890" );
	puts( string );
	puts( strCharSet );

	printf( "%d 위치에서 일치되는 첫 문자를 발견하였습니다. \n", pos );
}