#include <stdio.h>

int main(void) {
  int a,b,result,choice;
  printf("enter two numbers\n");
  scanf("%d%d",&a,&b);
  printf("1 for addition \n2 for substraction \n3 for multiplication \n4 for division \n");
  scanf("%d",&choice);
  if(choice==1){
    result=a+b;
    printf("result is : %d",result);
  }
  else if(choice==2){
    result=a-b;
    printf("result is : %d",result);
  }
  else if(choice==3){
    result=a*b;
    printf("result is : %d",result);
  }
  else if(choice==4){
    result=a/b;
    printf("result is : %d",result);
  }
  else{
    printf("enter the correct choice");
  }
  return 0;
}