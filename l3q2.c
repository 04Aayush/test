#include<stdio.h>
int main(){
	int n;
	printf("enter number");
	scanf("%d",&n);
	if (n>0)
	{
		printf("your %d is positive",n);
	}
	else
	{
		printf("your number is negative",n);
	}
	return 0;
}
