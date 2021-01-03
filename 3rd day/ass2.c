#include <stdio.h>

int main(void) {
  int mark;
  printf("enter the mark \n");
  scanf("%d",&mark);
  if(mark>=90){
    printf("grade A\n");
  }
  else if(mark>=80 && mark<90){
    printf("grade B\n");
  }
  else if(mark>=70 && mark<80){
    printf("grade C\n");
  }
  else if(mark>=60 && mark<70){
    printf("grade D\n");
  }
  else if(mark>=50 && mark<60){
    printf("grade E\n");
  }
  else if(mark<50){
    printf("failed");
  }
  return 0;
}