//Create a program that determines if a number is positive, negative, or zero, and if it’s positive,
//checks if it’s an even or odd number.
#include<stdio.h>
int main(){
	int num;
	printf("enter Number");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("This number is negative");
	}
	else if (num>0)
	{
		if(num%2==0)
		{
			printf("This number is positive and also even");
		}
	    else
		{
			printf("This number is positive but odd");
		}
	}
	else
	{
		printf("This number is Zero and even");
	}
	return 0;
}
