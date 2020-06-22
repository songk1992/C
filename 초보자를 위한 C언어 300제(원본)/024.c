#include <stdio.h> 

int main(void) 
{ 
	int x = 1;

	printf( "x = %d \n", x++ );		// x = 1
	printf( "x = %d \n", x++ );		// x = 2
	printf( "x = %d \n", ++x );		// x = 4
	printf( "x = %d \n", x-- );		// x = 4
	printf( "x = %d \n", x-- );		// x = 3
	printf( "x = %d \n", --x );		// x = 1
} 
