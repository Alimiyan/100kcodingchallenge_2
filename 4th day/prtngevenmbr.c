#include <stdio.h>

int main(void) {
  int num,i;
  printf(" enter a number\n");
  scanf("%d",&num);
  for(i=2;i<=num;i++){
    if(i%2==0){
      printf("%d\n",i);
    }
  }
  return 0;
}