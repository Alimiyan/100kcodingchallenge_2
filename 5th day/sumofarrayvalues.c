#include <stdio.h>

int main(void) {
  int a[100],limit,i,sum=0;
  printf("enter the limit \n");
  scanf("%d",&limit);
  printf("enter the values\n");
  for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i];
  }
  printf("the sum of array is: %d",sum);
    return 0;
}