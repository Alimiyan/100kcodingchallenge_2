
#include <stdio.h>

int main(void) {
  int n,i,j;
  printf("enter a number \n");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=0;j<i;j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}