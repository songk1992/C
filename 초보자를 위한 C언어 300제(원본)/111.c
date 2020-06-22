#include <stdio.h>
#include <string.h>

int main( void ) 
{
	char one[] = "Korea";
	char *pone;

	pone = one;

	puts( one );		// "Korea"
	puts( pone );		// "Korea"

	strcpy( pone, "Japan" );

	puts( one );		// "Japan"
	puts( pone );		// "Japan"
}
