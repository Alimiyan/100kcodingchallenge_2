#include<stdio.h>
int main(void){
    int limit,i,a[100],j,temp;
    printf("enter the limit\n");
    scanf("%d",&limit);
    
    printf("enter the elements\n");
    for(i=0;i<limit;i++){
     scanf("%d",&a[i]);
    }
    
    for ( i = 0; i < limit-1; i++){
       for ( j= i+1; j < limit; j++)
       {
           if(a[i]<a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
       
    }
    printf("sorted elements:\n");
    for ( i = 0; i < limit; i++)
    {
        /* code */
        printf("%d",a[i]);
    }
    
    
}