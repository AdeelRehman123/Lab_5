#include<stdio.h>
int main(){
	float A,P,As,per;
	printf("Enter your Assignment score(0-100):");
	scanf("%f",&As);
	printf("Enter your Exam result(0-100):");
	scanf("%f",&P);
	printf("Enter your Attendent score(0-100):");
	scanf("%f",&A);
	
	per=(A+P+As)/3.0;
	
	printf("You got %f Percentage\n",per);
	
	if(per>=80 && per<=100)
	{
		printf("Grade : A1");
	}
	else if(per>=70 && per<80)
	{
		printf("Grade : A");
	}
	else if(per>=60 && per<70)
	{
		printf("Grade : B");
	}
	else if(per>=50 && per<60)
	{
		printf("Grade : C");
	}
	else if(per>=0 && per<50)
	{
		printf("Grade : F(fail)");
	}
	else
	{
		printf("invalid input");
	}
	return 0;	
}
