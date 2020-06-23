#include <stdio.h>
#include <string.h>

int main( void )
{				   //01234567890123
	char string[] = "This is a book";
	char *pos;

	pos = strstr( string, "book" );		// [예제64]

	if( pos )	// if( pos != NULL )
	{
		printf( "book을 %d번째에서 찾았습니다. \n", pos-string );
		printf( "%s \n", &string[pos-string] );
	}
}