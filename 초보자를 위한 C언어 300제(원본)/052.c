#include <stdio.h>
#include <conio.h>

int print( char *string );

int main( void ) 
{
	print( "This is a putch function !" );
}

int print( char *string )
{
	int len = 0;

	while( *string != (int)NULL )
	{
		putch( *string );
		string++;
		len++;
	}

	// 현재 출력되고 있는 줄을 다음 줄의 첫 번째로 이동
	putch( '\r' );		// Carriage Return
	putch( '\n' );		// Line Feed

	return len;
}