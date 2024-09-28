//Write a program using a ternary operator to find the maximum of two numbers.
#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter first number:");
	scanf("%d",&num1);
	
	printf("Enter second number:");
	scanf("%d",&num2);
	
	(num1<num2)? printf("Maximum:%d",num2) : printf("Maximum:%d",num1);
	
	return 0;
	
}

