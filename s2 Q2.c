#include<stdio.h>
int main(){
	int age;
	char citizenship;
	printf("Enter your citizenship(Y for yes, N for no):");
    scanf("%c",&citizenship);
	printf("Enter your age:");
	scanf("%d",&age);
	
	
	if(age>=20 && citizenship=='Y')
	{
		printf("you are eligible for vote");
	}
    else if(age>=25 && citizenship=='N')
    {
    	printf("you are eligible for vote");
	}
	else
	{
		printf("you are not eligible for vote");
	}
	return 0;
}
