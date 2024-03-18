#include<stdio.h>
int main(){
	int n;
	n=1;
	do
	{
		if(n%2==0)
		{
			printf("%d\t",n);
		}
		n++;
	}
	while(n<=100);
	return 0;
}
