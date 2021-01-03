#include<stdio.h>
void sum();
int main(void){
    sum();
}
    void sum(){
    
        int num1, num2, sum;
        printf("enter two numbers\n");
        scanf("%d%d",&num1,&num2);
        sum=num1+num2;
        printf("sum = %d",sum);
    }
/*function without arguement,without return value*/