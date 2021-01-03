#include <stdio.h>

int main(void) {
  int a,b,temp;
  printf("enter two number to swap\n");
  scanf("%d%d",&a,&b);
  printf("the numbers are\n a=%d \n b=%d",a,b);
  temp=a;
  a=b;
  b=temp;
  printf("\nresult is\n a=%d\nb=%d",a,b);


  return 0;
}