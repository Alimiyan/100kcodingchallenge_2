#include <stdio.h>

int main(void) {
  float a;
  printf("enter the mark\n");
  scanf("%f",&a);
  if(a>=50){
    printf("you have passed\n");
  }
  else{
    printf("you have failed");
  }
  return 0;
}