/*
할당 가능한 메모리 영역 알아보기
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Mbyte = 0;
	char *imsi;

	while( imsi = (char *)malloc( 1 << 20 )) Mbyte++;
	printf("Total %d Mbyte\n", Mbyte);
}
