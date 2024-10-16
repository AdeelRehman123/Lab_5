#include<stdio.h>
int main()
{
	int n,sum;
	printf("Enter number:");
	scanf("%d",&n);
	
	while(1)
	{
		sum=0;
		while(n!=0){
			sum+=n%10;
			n/=10;
		}
		if(sum>0 && sum<10){
		  printf("sum of digits in (1-9):%d",sum);
		  break;
		}
		n=sum;
	}
	return 0;
}
