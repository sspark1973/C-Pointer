/* 
포인터 - 4 bytes
포인터 변수의 타입은 포인터 변수가 가리키는 번지로 가서 몇 바이트를 읽어 오는가 하는 것에 대한 답을 주는 것이다.

printf(%#010x\n, imsip);
#은 주소를 표현하기 위하여 많이 사용하는 형식

#10x : 847598 -> 0x847598
#010x : 8475 -> 0x00008475 - 10자리 0x포함

%p : "p" serves to output a pointer. It may differ depending upon the compiler and platform.
*/

#include <stdio.h>

int main(void)
{
  int imsi = 5, i;
  int *imsip, *imsipa, *imsipa2;
  int imsia[3] = {0};
  int imsia2[3] = {7, 5, 2};
  int imsia3[2][3] = {{1, 2, 8}, {34, 444, 7}};
  
  imsip = &imsi;

  printf("&imsi [%#010x]\n", &imsi);
  
  printf("imsip [%#p]\n", imsip);
  printf("&imsip [%#p]\n", &imsip);
  printf("&imsip [%#x]\n", &imsip);
  printf("&*imsip [%#x]\n", &*imsip); // 얻어들인 5라는 값이 저장된 곳의 위치를 뜻한다. &imsi == imsip == &*imsip


  imsipa = imsia; 
  /* 1.배열명은 주소  
     2. 배열명은 배열의 첫번째 배열 요소의 주소 imsia == &imsia[0] */

  imsipa + 1; 
  /* 포인터 값에 정수 값을 더할 때 정수 값 만큼의 바이트가 더해지는 것이 아니라
    포인터 변수의 타입 크기만큼 증가한다. */
    
  printf("%d\n", *(imsipa + 1));
  /* '+'보다는 '*'의 우선순위가 높다 */
  
  
  imsipa2 = imsia2;
  /* ++, --, &, * 등의 우선순위는 같다. 하지만 right to left의 결합성
    그러므로 *imsipa2++ == *(imsipa2++) */
  for(i=0, i < 3, i++)
    printf("%d\n", *imsipa2++);

  return 0;
}
