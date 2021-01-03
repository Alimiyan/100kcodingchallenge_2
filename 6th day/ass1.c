#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int i,n,count=0;
    printf("enter a string\n");
    scanf("%s",a); 
    n=strlen(a);   
  	for(i=0;i<n/2;i++){
		if(a[i]==a[n-(1+i)]){
			count=count+1;
		}
	}
    if (count==n/2){
        printf("string is palindrome");
    }
    else{
        printf("string is not palindrome");
    }
}