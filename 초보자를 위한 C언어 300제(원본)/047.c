#include <stdio.h> 

int print( char* string );

int main(void) 
{
	print( "This is a function !" );
} 

int print( char* string )
{
	int len = 0;

	while( *string != (int)NULL )
	{
		printf( "%c", *string );
		string++;	// 번지 값을 1 증가
		len++;		// 문자열의 길이를 1 증가
	}

	return len;		// 총 문자열의 길이를 반환
}