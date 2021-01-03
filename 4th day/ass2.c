#include <stdio.h>

int main(void) {
  int limit,i,sum=0;
  printf("enter the limit\n");
  scanf("%d",&limit);
  for(i=1;i<=limit;i=i+2){
      sum=sum+i;
  }
  printf("%d\n",sum);
  return 0;
}