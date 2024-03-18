#include<stdio.h>
int main()
{
	float n,m,p;
	printf("enter two number:\n");
	scanf("%f%f",&n,&m);
	p=pow(n,m);
	printf("power=%f",p);
	return 0;
}
