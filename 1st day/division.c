#include <stdio.h>

int main(void) {
  float a,b,c,result;
  printf("enter 3 numbers\n");
  scanf("%f%f%f",&a,&b,&c);
  result=(a+b+c)/3;
  printf("result is %f",result);

  return 0;
}