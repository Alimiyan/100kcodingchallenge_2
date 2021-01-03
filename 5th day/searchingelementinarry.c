#include <stdio.h>

int main(void) {
  int a[100],limit,i,sum=0,search,flag=0;
  printf("enter the limit \n");
  scanf("%d",&limit);
  printf("enter the values\n");
  for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
    
  }
    printf("enter the element to be search: ");
    scanf("%d",&search);
  for(i=0;i<limit;i++){
    if(search==a[i]){
      flag=1;
      break;
    }
  }
  if(flag==1){
      printf("element found at position %d",i+1); 
  }
  else{
      printf("value not found");
  }
    return 0;
}