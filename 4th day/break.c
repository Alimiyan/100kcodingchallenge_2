#include <stdio.h>

int main(void) {
  int n=10,i;
  for(i=0;i<10;i++){
    printf("hi\n");
    if(i==5){
      break;
    }
    printf("helloo\n");
  }
  printf("finished\n");
  return 0;
}