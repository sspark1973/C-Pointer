/* 
printf(%#010x\n, imsip);
#은 주소를 표현하기 위하여 많이 사용하는 형식

#10x : 847598 -> 0x847598
#010x : 8475 -> 0x00008475 - 10자리 0x포함

%p : "p" serves to output a pointer. It may differ depending upon the compiler and platform.
*/

#include <stdio.h>

int main(void)
{
  int *imsip;
  
  printf("%p\n", imsip);
  printf("%p\n", &imsip);
  printf("%#x\n", &imsip);
}
