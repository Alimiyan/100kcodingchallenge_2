#include <stdio.h>

int main(void) {
  int n=10,i;
  for(i=0;i<n;i++){
    printf("hi\n");
    if(i==5){
      continue;
    }
    printf("helloo\n");
  }
  printf("finished");
  
  return 0;
}