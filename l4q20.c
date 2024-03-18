#include<stdio.h>
int main()
{
	int n,rev=0,digit,temp;
	printf("enter  number:");
	scanf("%d",&n);
	temp=n;
	do
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}while(n>0);
	if(temp==rev)
	{
		printf("pall");
	}
	else
	{
		printf("not pali");
	}
	return 0;
}
