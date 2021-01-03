#include <stdio.h>

int main(void) {
  int num;
  printf("enter a number\n");
  scanf("%d",&num);
  if(num<0){
    printf("the number is negative\n");
  }
  else{
    printf("the number is positive");
  }
  return 0;
}