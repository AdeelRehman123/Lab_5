//Write a program that categorizes a person's age into different life stages: Child, Teenager, Adult,
//and Senior, using nested if-else statements.
#include<stdio.h>
int main(){
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	
	if(age>=1 && age<=12)
	{
		printf("you are child");
	}
	else if(age>=13 && age<20)
	{
		printf("you are Teenager");
	}
	else if(age>=20 && age<60)
	{
		printf("you are Adult");
	}
	else
	{
		printf("you are senior");
	}
	return 0;
}