#include<stdio.h>
int main(){
	int n1,n2,n3;
	printf("enter three number");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1<n2)
	{
		if(n1<n3)
		{
			printf("%d id smaller",n1);
		}
		else//(n2<n3)
		{
			printf("%d is smaller",n3);
		}
	}
	else//(n2>n3)
	{
		if(n2<n3)
		{
			printf("%d is smaller",n2);
		}
		else//(n3>n2)
		{
			
			printf("%d is smaller",n3);
		}
	}
	return 0;
}
