#include <stdio.h>

int main(void) {
  int p;
  float r,n,si;
  printf("enter the principal amount p\n");
  scanf("%d",&p);
  printf("enter the interest rate r:\n");
  scanf("%f",&r);
  printf("enter the number of years n\n");
  scanf("%f",&n);
  si=(p*r*n)/100;
  printf("the simple interest is: %f",si);
  return 0;
}