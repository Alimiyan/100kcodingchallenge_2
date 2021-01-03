#include <stdio.h>

int main(void) {
  int num,i,sum=0;
  printf("enter a num \n");
  scanf("%d",&num);
  for(i=1;i<=num;i++){
    sum=sum+i;
  }
  printf("%d",sum);

  return 0;
}