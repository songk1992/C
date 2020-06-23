#include <stdio.h>

int main( void )
{
	char value = 4;

	value = value >> 1;		// value = value / 2;

	printf( "value : %d \n", value );
}