#include <stdio.h>

int main(void) {
  /*prime number= a number which is divisible by 1 and the number itself*/
  int num,i,flag=0;
  printf("enter the number\n");
  scanf("%d",&num);
  for(i=2;i<num;i++){
    if(num%i==0){
      flag=1;
      break;
    }
  }
  if(flag==0){
    printf("num is prime");
  }
  else{
    printf("num is not prime");
  }
  return 0;
}