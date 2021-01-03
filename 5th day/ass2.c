#include<stdio.h>
int main(void){
    int limit,a[100],i,j,count=0;
    printf("enter the limit:\n");
    scanf("%d",&limit);
    printf("enter the elements:\n");
    for ( i = 0; i < limit; i++) {
       scanf("%d",&a[i]);
    }
    for ( i = 0; i < limit; i++){
           if(a[i]%2==0){
               count=count+1;
           }
       
    }
    printf("number of even numbers in the array is %d",count);
    
    
}