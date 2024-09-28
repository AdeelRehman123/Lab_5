//Use the ternary operator to check if a number is positive, negative, or zero.
#include<stdio.h>
int main(){
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	
	(num<0)?printf("%d is a negative number",num):(  (num>0)?printf(" %d is a positive number",num):printf("This number is zero")  );
	
	return 0;
	
}
