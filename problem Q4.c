#include<stdio.h>
int main(){
	int age,cs;
	float income;
	printf("Enter your Age:");
	scanf("%d",&age);
	printf("Enter your Credit score:");
	scanf("%d",&cs);
	printf("Enter your current Income:");
	scanf("%f",&income);
	
	if((age>=18 && age<= 60) && (income>=30000) && (cs>=650))
	{
		printf("You are eligible for a loan");
	}
	else 
	{
		printf("You are not eligible for a loan");
	}
	return 0;
}
