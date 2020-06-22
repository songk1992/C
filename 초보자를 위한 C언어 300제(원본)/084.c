#include <stdio.h>
#include <stdlib.h>

int main( void ) 
{
	long value;
	char string[100];
	int radix;

	radix = 2;		// 2 진수

	value = 12345;
	ltoa( value, string, radix );
	printf( "변환된 문자열은 %s입니다. \n", string );

	value = -12345;
	ltoa( value, string, radix );
	printf( "변환된 문자열은 %s입니다. \n", string );
}