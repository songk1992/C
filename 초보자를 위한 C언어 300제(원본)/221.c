#include <stdio.h>
#include <string.h>

int main( void )
{                 //01234567890
	char *string = "it's good";
	char *find = "abcdefghijklmnopqrstuvwxyz ";
	int nIndex;

	nIndex = strspn( string, find );	// [예제66]
	printf( "%d 위치에서 알파벳이 아닌 첫 문자를 찾았습니다. \n", nIndex );
}