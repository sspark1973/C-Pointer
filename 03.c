#include <stdio.h>

main()
{
  int imsi[2][3];
  int (*imsip)[3]; 
  /* int *imspi[3]; - "incompatible type in assignment"라는 컴파일 에러
     배열요소가 3개인 2차원 배열 - 배열의 행은 상관없다. 
     행의 요소가 몇 개인지만 알면 다음 행을 참조하는 것은 어렵지 않다. */
  
  imsip = imsi;
  
  printf("%d\n", sizeof(imsi));
  printf("%d\n", sizeof(imsip));
  /* imsip는 포인터 변수이므로 이것이 2차원을 가리키든 4차원을 가리키든 상관없이 무조건 4라는 수치가 출력
     1차원 포인터 변수는 단지 하나의 배열 요소만을 대상체로 한다. */
  
  printf("%d\n", sizeof(*imsip));
  /* *imsip는 imsip가리키는 대상체를 뜻한다. - 2차원 배열 포인터 변수는 행을 대상체로 한다. */
  
  printf("%#010x\n", imsi); // imsi == imsi[0] == &imsi[0][0]
  
  imsip = imsi[0]; // imsi[0]는 행전체 - 대상체가 틀리므로 컴파일 워닝 
  imsip = &imsi[0][0]; // &imsi[0][0]이 가리키는 대상체는 imsi[0][0]이므로 대상체가 틀리다 - 컴파일 워닝 
  /* 아래의 sizeof로 확인 할 수 있다. */
  
  printf("%d\n", sizeof(imsi[0]));
  printf("%d\n", sizeof(&imsi[0][0]));
}
