#include <stdio.h>

void print( char **ppanimal );

int main( void ) 
{
	char *animal[3];

	animal[0] = "호랑이";
	animal[1] = "사자";
	animal[2] = "토끼";

	print( animal );
}

void print( char **ppanimal )
{
	puts( ppanimal[0] );
	puts( ppanimal[1] );
	puts( ppanimal[2] );
}