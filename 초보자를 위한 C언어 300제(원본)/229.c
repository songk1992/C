#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main( void )
{
	char buff[] = "문자열 복제하기";
	char *dup;

	dup = strdup( buff );				// [예제75]
	if( dup )
	{
		strcpy( buff, "다른 문자열" );		// [예제57]
		puts( buff );
		puts( dup );
		free( dup );				// [예제98]
	}
}