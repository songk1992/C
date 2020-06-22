#include <stdio.h>

int main( void )
{
	int i;
	char buffer[500];
	char *path;

	for( i=0; i<10; i++ )
	{
		tmpnam( buffer );
		puts( buffer );
	}

	for( i=0; i<10; i++ )
	{
		path = _tempnam( "", "test" );
		puts( path );
	}
}
