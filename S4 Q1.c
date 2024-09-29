
#include<stdio.h>
int main(){
	int n1;
    int n2;
    printf("Enter num1:");
    scanf("%d",&n1);
    printf("Enter num2:");
    scanf("%d",&n2);
    
    printf("Before swapping: num1 = %d, num2 = %d\n", n1, n2);

    n1 = n1 ^ n2;
    n2 = n1 ^ n2;
    n1 = n1 ^ n2;

    printf("After swapping: num1 = %d, num2 = %d\n", n1, n2);

    return 0;
}
    
    



 

