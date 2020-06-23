#include <stdio.h>
#include <string.h>

int main( void )
{                  //01234567890
	char string[] = " .;;abc;;. ";
	char *sep = " .;";
	int nIndex1, nIndex2;

	nIndex1 = strspn( string, sep );		// [예제66]
	nIndex2 = strcspn( &string[nIndex1], sep );	// [예제67]
	(&string[nIndex1])[nIndex2] = 0;

	printf( "%s \n", &string[nIndex1] );
}