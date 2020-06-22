#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	char buff[100];
	int radix = 16;

	itoa( 10, buff, radix );
	puts( buff );					// "a"
	
	itoa( 255, buff, radix );
	puts( buff );					// "ff"
}