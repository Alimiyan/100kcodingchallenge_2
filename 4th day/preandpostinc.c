#include <stdio.h>

int main(void) {
  int a,b,c;
  printf("enter a  number \n");
  scanf("%d",&a);
  /*assigning a into b, and then incrementing the value of a*/
  b=a++;
  printf("a: %d\n b: %d",a,b);
  /*incrementing the value of a and assigning it into c*/
  c=++a;
  printf("\na: %d\n c: %d",a,c);
  return 0;
}