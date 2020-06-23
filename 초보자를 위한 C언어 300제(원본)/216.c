#include <stdio.h>
#include <string.h>

int main( void )
{
	char string[] = "a12, b34, c56";
	char *token;

	token = strtok( string, ", " );		// [예제68]

	while( token )
	{
		puts(token);
		token = strtok( NULL, ", " );
	}
}