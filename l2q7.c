#include<stdio.h>
int main()
{
	int a=5,b=6,c=7,res;
	res=(a>b)&& (b<c);
	printf("res=%d",res);
	res=(a>b)||(b<c);
	printf("\n or res=%d",res);
	res=(a!=b);
	printf("\nnot res=%d",res);
	return 0;
}
