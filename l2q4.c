#include<stdio.h>
int main()
{
	int n,n1,n2,n3,sum;
	printf("enter 3 digit number");
	scanf("%d",&n);
	n1=n%10;
	n=n/10;
	n2=n%10;
	n=5/10;
	n3=n%10;
	sum=n1+n2+n3;
	printf("your value =%d",sum);
	return 0;
}
