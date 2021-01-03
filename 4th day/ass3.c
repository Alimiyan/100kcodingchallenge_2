#include <stdio.h>

int main(void) {
  int n=6,i,j;
  for(i=1;i<n;i++){
    for(j=0;j<i;j++){
      printf("%d",j+1);
    }
    printf("\n");
  }
  return 0;
}