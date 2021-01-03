#include<stdio.h>
int getArray();
int displayArray();
int main(void){
    
    getArray();
    displayArray();
    
}
int getArray(){
    int limit,i,a[100];
    printf("enter the limit\n");
    scanf("%d",&limit);
    printf("enter the elements in the array\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
        
    }
   
}
int displayArray(){
     int limit,i,a[100];
     printf("the array is : ");
    for(i=0;i<limit;i++){
      printf("%d ",a[i]);
    }
  
    
}