#include<stdio.h>
int sum(); 
int main(void){
    int k;
    k=sum();
    printf("sum= %d",k);
}
int sum(){
    int num1,num2,c;
    printf("enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    c=num1+num2;
    return c;
}
/*function without argument.and with return value*/