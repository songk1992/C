#include <stdio.h>
#include <string.h>

int main( void )
{
	char buff[] = "암호는 Korea입니다.";

	puts( buff );
	strset( buff, 0 );			// [예제70]
	printf( "[%s] \n", buff );
}