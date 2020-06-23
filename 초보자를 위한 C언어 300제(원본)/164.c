#include <stdio.h>
#include <stdlib.h>
#include <direct.h>

int main( void )
{
	char pathname[_MAX_PATH] = "c:\\temp";

	if( _chdir( pathname ) == 0 )	// error : -1
	{
		_getcwd( pathname, _MAX_PATH );
		puts( pathname );
	}
}