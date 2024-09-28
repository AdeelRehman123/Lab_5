#include<stdio.h>
int main(){
	int year;
	printf("Enter Year:");
	scanf("%d",&year);
	if(year%400==0 || year%4==0 && year%100!=0)
	{
		printf("This Year is a LeapYear");
	} 
        else
	{
		printf("This is not leapYear");
	}
	return 0;
}
