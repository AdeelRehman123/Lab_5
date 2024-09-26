   //Write a program that checks if a number is divisible by both 3 and 5 using logical operators.
#include<stdio.h>
int main(){
	int num;
	printf("enter number:");
	scanf("%d",&num);
	
	if(num<=0)
	{
		printf("the number you enter is negative or Zero");
		
	}
	else if(num>0)
	{
		if(num%3==0 && num%5==0)
		{
			printf("This number is divisible by both 3 and 5");
		}
		else if(num%5==0)
		{
			printf("This number is divisible by 5");
		}
		else if(num%3==0)
		{
			printf("This number is divisible by 3");
		}
		else 
		{
			printf("This number is not divisible by both 3 and 5");
		}
		
	}
	else
	{
		printf("Invalid input");
	}
	return 0;
}
