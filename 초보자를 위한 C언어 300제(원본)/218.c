#include <stdio.h>
#include <ctype.h>

int main( void )
{
	char *string = "(02) 1111-2222";
	char buff[20]={0,};
	int i=0;

	while( *string )
	{
		if( isdigit( *string ) )	// [예제90]
		{
			buff[i++] = *string;
		}
		string++;
	}
	puts( buff );
}