#include<stdio.h>
int sum(int,int);
int main(void){
    int num1,num2,c;
    printf("enter two number\n");
    scanf("%d%d",&num1,&num2);
    c=sum(num1,num2);
    printf("sum=%d",c);

}
int sum(int a,int b){
    int result;
    result=a+b;
    return result;
}
/*function with argument, and with return value*/