#include<stdio.h>
int main(){
	int n,sum=0;
	n=1;
	do
	{
		if(n%2==0)
		{
			sum=sum+n;
		}
		n++;
	}
	while(n<=10);
	printf("sum=%d",sum);
	return 0;
}
