#include<stdio.h>
int main()
{
	int num,digit,sum=0;
	int temp;
	printf("enter number");
	scanf("%d",&num);
	temp=num;
	do
	{
		digit=num%10;
		sum+=digit*digit*digit;
		num=num/10;
	}while(num!=0);
	if(temp==sum){
	printf("armstrong number");
	}
	else{
	printf("\nnot armstrong number");
	}
	return 0;
}
