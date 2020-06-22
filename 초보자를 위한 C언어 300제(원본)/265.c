#include <stdio.h>		// puts, gets, printf
#include <string.h>		// strlen, memset, memcpy
#include <stdlib.h>		// atoi

int add( int value );
int delete( int *value );

#define QUEUE_MAX 100

typedef struct tagQueue
{
	int array[QUEUE_MAX];
	int front;
	int rear;
} QUEUE;

QUEUE q;

int main( void )
{
	char buff[100], tmp[100];
	char *op = "+-*/%";
	int index;
	int value1 = 0, value2 = 0;

	q.front = q.rear = 0;

	puts( "계산식을 1*2처럼 입력하고 엔터키를 치세요." );
	puts( "아무것도 입력하지 않으면 계산이 종료됩니다." );

	for( ;; )
	{
		printf( "계산식 : " );
		gets( buff );				// [예제55]

		if( strlen(buff) == 0 ) break;		// [예제63]

		memset( tmp, 0, sizeof(tmp) );		// [예제103]

		index = strcspn( buff, op );		// [예제67]

		memcpy( tmp, buff, index );		// [예제100]

		value1 = atoi( tmp );			// [예제77]
		value2 = atoi( &buff[index+1] );

		switch( buff[index] )			// [예제34]
		{
			case '+' : value1 += value2; break;
			case '-' : value1 -= value2; break;
			case '*' : value1 *= value2; break;
			case '/' : value1 /= value2; break;
			case '%' : value1 %= value2; break;
			default  : 
				puts( "잘못된 연산자를 사용하였습니다." );
				continue;
		}

		if( add( value1 ) == -1 )
		{
			puts( "더 이상 추가할 수 없습니다." );
		}

		printf( "%s = %d, q.rear = %d \n\n", buff, value1, q.rear );
	}

	value1 = 0;

	for( ;; )
	{
		if( delete( &value2 ) == -1 ) break;

		value1 += value2;
	}

	printf( "계산의 총합은 %d입니다. \n", value1 );
}

int add( int value )
{
	if( q.rear == QUEUE_MAX ) return -1;
	q.array[q.rear++] = value;			// [예제24]
	return 0;
}

int delete( int *value )
{
	if( q.front == q.rear || q.front == QUEUE_MAX ) return -1;
	*value = q.array[q.front++];			// [예제24]
	return 0;
}