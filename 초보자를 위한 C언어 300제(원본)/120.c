#include <stdio.h>
#include <string.h>

struct tagAddress
{
	char name[30];		// 이름
	char phone[20];		// 전화
	char address[100];	// 주소
};

int main( void ) 
{
	struct tagAddress ad;
	struct tagAddress *pad;

	pad = &ad;

	strcpy( (*pad).name, "홍길동" );
	strcpy( (*pad).phone, "02-1234-5678" );
	strcpy( (*pad).address, "서울시 양천구 목동아파트 13단지" );

	printf( "이름 : %s \n", pad->name );
	printf( "전화 : %s \n", pad->phone );
	printf( "주소 : %s \n", pad->address );
}

