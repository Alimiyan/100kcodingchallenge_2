#include<stdio.h>
int main(void){
    int limit,a[100],b[100],i,j,temp;
    printf("enter the limit\n");
    scanf("%d",&limit);
    printf("enter the first array:\n");
    for ( i = 0; i < limit; i++)
    {
        /* code */
        scanf("%d",&a[i]);
       
    }
    
    printf("enter the second array:\n");
    for ( j = 0; j < limit; j++)
    {
        /* code */
        scanf("%d",&b[j]);
        
    }
    
    for ( i = 0; i < limit; i++)
    {
        /* code */
        for ( j = i; j < limit; j++)
        {
            /* code */
            temp=a[i];
            a[i]=b[j];
            b[j]=temp;
            break;

        }
        
        
    }
    printf("first array:\n");
    for ( i = 0; i < limit; i++)
    {
        /* code */
        printf("%d ",a[i]);
       

    }
      printf("second array:\n");
    for ( j = 0; j < limit; j++)
    {
        /* code */
        printf("%d ",b[j]);
       

    }
     
}