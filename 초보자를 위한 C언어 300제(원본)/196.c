#include <stdio.h>

#if !defined COUNT
#error "COUNT MACRO is not defined!"
#endif

int main( void )
{
	printf( "COUNT : %d \n", COUNT );
}