#include<stdio.h>
int main()
{
	int a,a1,a2,a3,sum;
	printf("enter three digit");
	scanf("%d",&a);
	a1=a%10;
	a=a/10;
	a2=a%10;
	a=a/10;
	a3=a%10;
	printf("reverse=%d,%d,%d",a1,a2,a3,sum);
	return 0;
}
