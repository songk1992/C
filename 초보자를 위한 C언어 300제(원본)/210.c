#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int radix = 16;			// 변환할 기수가 16진수
	int base = 2;			// 변환할 문자열이 2진수
	char string[] = "10101011";
	char *stop;
	long value;
	char buff[100];

	value = strtol( string, &stop, base );
	itoa( value, buff, radix );
	puts( buff );			// "ab"
}