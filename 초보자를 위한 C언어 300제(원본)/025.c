#include <stdio.h> 

int main(void) 
{ 
	int x = 1;
	int y = 2;
	int z = 3;

	if( x == y  ) printf( "x는 y와 같습니다. \n" );
	if( x != y  ) printf( "x는 y와 같지 않습니다. \n" );
	if( x > y   ) printf( "x는 y보다 큽니다. \n" );
	if( x < y   ) printf( "x는 y보다 작습니다. \n" );
	if( y >= z  ) printf( "y는 z보다 크거나 같습니다. \n" );
	if( y <= z  ) printf( "y는 z보다 작거나 같습니다. \n" );
} 
