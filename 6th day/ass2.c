#include<stdio.h>
int main(void){
    int limit,i,j,a[100][100],b[100][100],sum=0;
    printf("enter the size: \n");
    scanf("%d",&limit);
    printf("enter the value of array 1:\n");
    for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the value of array 2:\n");
    for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
            sum=a[i][j]+b[i][j];
            printf("%d\t",sum);
        }
        printf("\n");
    }
}