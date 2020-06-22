#include <stdio.h> 

int main(void) 
{
	int i = 0;
	int j = 1;

	printf( "=%d, 葛府林家=%p \n", i, &i );	// =0, 葛府林家=0012FF7C
	printf( "=%d, 葛府林家=%p \n", j, &j );	// =1, 葛府林家=0012FF78
} 
