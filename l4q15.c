#include<stdio.h>
int main()
{
	int n,sum=0;
	n=1;
	do
	{
		sum=sum+n;//sum=1+2+3
		n++;
	}
	while(n<=10);//n=123
	printf("sum=%d",sum);
	return 0;
}
