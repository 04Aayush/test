#include<stdio.h>
int main(){
	int fib1,fib2,prev,next,num;
	fib1=1;
	fib2=1;
	prev=fib1;
	printf("enter number:");
	scanf("%d",&num);
	printf("\n%d",fib1);
	do
	{
		next=fib2+prev;
		prev=fib2;
		fib2=next;
		printf("%d",prev);
	}while(num>next);
	return 0;
}
