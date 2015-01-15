#include <stdio.h>

main()
{
  int imsi[2][3];
  int (*imsip)[3]; 
  int **imspp;

  imsip = imsi;
  
  printf("%d\n", sizeof(imsi));
  printf("%d\n", sizeof(imsip));
  printf("%d\n", sizeof(imspp));

  printf("%d\n", sizeof(*imsip));
  printf("%d\n", sizeof(*imspp));

  printf("%#010x\n", imsi); // imsi == imsi[0] == &imsi[0][0]
  
  imsip = imsi[0];
  imsip = &imsi[0][0];

  
  printf("%d\n", sizeof(imsi[0]));
  printf("%d\n", sizeof(&imsi[0][0]));

  char *imsi2[3];
  imsi2[0] = "Park";
  imsi2[1] = "Roy";
  imsi2[2] = "Sung";
  char **imsipp2;

  imsipp2 = imsi2;

  printf("imsipp2    %#010x\n", imsipp2);
  printf("imsi2      %#010x\n", imsi2);
  printf("imsi2[0]   %#010x\n", imsi2[0]);
  printf("&imsi2[0]  %#010x\n", &imsi2[0]);
  printf("*imsipp2   %#010x\n", *imsipp2);
  printf("&**imsipp2 %#010x\n", &**imsipp2);
  printf("**imsipp2  %#010x\n", **imsipp2);
  printf("**imsipp2  %c\n", **imsipp2);

}
