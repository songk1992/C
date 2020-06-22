#include <stdio.h>

int main( void ) 
{
	char *animal[3];
	char **ppanimal;

	animal[0] = "호랑이";
	animal[1] = "사자";
	animal[2] = "토끼";

	ppanimal = animal;

	puts( animal[0] );
	puts( ppanimal[1] );
	puts( ppanimal[2] );
}
