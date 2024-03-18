#include<stdio.h>
int main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("your%d is even",n);
	}
	else
	{
		printf("your %d is odd",n);
	}
	return 0;
}
