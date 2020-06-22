#include <stdio.h>
#include <string.h>

int main( void )
{                  //012345678901234567890123456789012345
	char string[] = "사자 3마리, 코끼리 5마리, 사슴 4마리";
	char *find = "0123456789";
	int index;

	index = strcspn( string, find );	// [예제67]
	
	printf( "%d 위치에서 일치되는 첫 숫자를 발견하였습니다. \n", index );
}