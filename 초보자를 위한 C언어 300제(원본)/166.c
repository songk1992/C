#include <stdio.h>
#include <direct.h>

int main( void )
{
	int drive = 4;
	
	if( _chdrive( drive ) == 0 )	// error : -1
	{
		drive = _getdrive();
		printf( "변경된 드라이브 : %c \n", 'A' + drive - 1 );
	}
	else
	{
		perror( "드라이브 변경 실패" );
	}
	getch();
}
