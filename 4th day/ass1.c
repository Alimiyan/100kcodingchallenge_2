#include <stdio.h>

int main(void) {
  int num,i,sum;
  printf("enter a num\n");
  scanf("%d",&num);
  for(i=1;i<=10;i++){
    sum=i*num;
    printf("%d X %d = %d\n",i,num,sum);
  }
  return 0;
}