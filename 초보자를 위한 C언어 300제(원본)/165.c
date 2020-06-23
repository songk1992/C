#include <stdio.h>
#include <direct.h>

int main( void )
{
	int drive;

	drive = _getdrive();

	printf( "현재 드라이브 : %c \n", 'A' + drive - 1 );
	getch();
}
