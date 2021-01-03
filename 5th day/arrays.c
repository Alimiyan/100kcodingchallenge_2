#include <stdio.h>

int main(void) {
  int a[5],i,limit;
  printf("enter the limit\n");
  scanf("%d",&limit);
  printf("enter values\n");
  for (i=0;i<limit;i++){
    scanf("%d",&a[i]);
  }
  printf("entered values are: \n");
  for(i=0;i<limit;i++){
    printf("%d,",a[i]);
  }
  return 0;
}